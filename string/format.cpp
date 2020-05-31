#include "format.h"

using namespace std;

bool both_are_spaces(char lhs, char rhs) { return (lhs == rhs) && (lhs == ' '); }

void remove_double_spaces(std::string& str) {
    string::iterator new_end = unique(str.begin(), str.end(), both_are_spaces);
    str.erase(new_end, str.end());
}