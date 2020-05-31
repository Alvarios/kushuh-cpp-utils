#include "find_matches.h"
#include "split.h"

using namespace std;

vector<int> find_matches(string const& witness, string const& candidate) {
    return find_matches(split(witness), split(candidate));
}

vector<int> find_matches(string const& witness, string const& candidate, char delimiter) {
    return find_matches(split(witness, delimiter), split(candidate, delimiter));
}

// List each index in witness that match candidate string.
vector<int> find_matches(
    const vector<string> &witness,
    const vector<string> &candidate
) {
    // Match candidate in witness. See more at http://www.cplusplus.com/reference/algorithm/search/
    __wrap_iter<const basic_string<char> *> match = search(
        begin(witness), end(witness),
        begin(candidate), end(candidate)
    );

    // A match occurred before iterator reached the end of witness.
    if (match != end(candidate)) {
        // List every match in the witness string for post-computation.
        vector<int> matchesOffsets;

        // Keep track of last matched index. Matched range returned by search function is relative to begin() value,
        // which isn't 0. So to get the accurate 0 based char position of the match, we need to subtract the begin()
        // offset to the matched value.
        int lastMatchIndex(0);

        // We want to find all the matches, not only the first one, for post-computing.
        while (match != end(witness)) {
            lastMatchIndex += match - witness.begin();

            // Add last matched offset to output.
            matchesOffsets.push_back(lastMatchIndex);

            // Perform a new match with the same method as above, except we cut the witness string to last match.
            match = search(begin(witness) + lastMatchIndex + 1, end(witness), begin(candidate), end(candidate));
        };

        return matchesOffsets;
    } else {
        // No match returns an empty vector.
        return vector<int>();
    }
}
