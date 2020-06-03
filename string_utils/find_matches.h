#ifndef KUSHUH_CPP_UTILS_FIND_MATCHES_H
#define KUSHUH_CPP_UTILS_FIND_MATCHES_H

#include <iostream>
#include <vector>

std::vector<int> find_matches(
    std::vector<std::string> const& witness,
    std::vector<std::string> const& candidate
);

std::vector<int> find_matches(std::string const& witness, std::string const& candidate, char delimiter);
std::vector<int> find_matches(std::string const& witness, std::string const& candidate);

#endif //KUSHUH_CPP_UTILS_FIND_MATCHES_H
