#include "format.h"

using namespace std;

bool both_are_spaces(char lhs, char rhs) { return (lhs == rhs) && (lhs == ' '); }

void remove_double_spaces(std::string& str) {
    string::iterator new_end = unique(str.begin(), str.end(), both_are_spaces);
    str.erase(new_end, str.end());
}

string join(vector<string> const& sequence, string const& delimiter) {
    if (sequence.empty()) {
        return "";
    }

    string output(sequence[0]);

    for(int i = 1; i < sequence.size(); i++) {
        output += delimiter + sequence[i];
    }

    return output;
}