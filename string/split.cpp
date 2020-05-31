#include "split.h"

using namespace std;

// Convert string into vector of sequences.
vector<string> split(const string& str, char delimiter) {
    vector<string> output;

    stringstream ss(str); // Turn the string into a stream.
    string tok;

    // While a new sequence was found.
    while(getline(ss, tok, delimiter)) {
        if (!tok.empty()) {
            output.push_back(tok);
        }
    }

    return output;
}

// Quick declaration
vector<string> split(const string& str) {
    vector<string> output;

    for(char c : str) {
        string cs(1, c);
        output.push_back(cs);
    }

    return output;
}
