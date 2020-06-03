#ifndef KUSHUH_CPP_UTILS_FORMAT_H
#define KUSHUH_CPP_UTILS_FORMAT_H

#include <iostream>
#include <vector>

bool both_are_spaces(char lhs, char rhs);
void remove_double_spaces(std::string& str);
std::string join(std::vector<std::string> const& sequence, std::string const& delimiter);

#endif //KUSHUH_CPP_UTILS_FORMAT_H
