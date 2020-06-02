#ifndef KUSHUH_CPP_UTILS_SPLIT_H
#define KUSHUH_CPP_UTILS_SPLIT_H

#include <iostream>
#include <vector>
#include <sstream>

std::vector<std::string> split(const std::string& str, char delimiter);
std::vector<std::string> split(const std::string& str);

class Sequencer {
    public:
        void init(const std::string& corpus, int const& limit);
        void init(const std::string& corpus);

        std::vector<std::string> read_block(char delimiter);
    private:
        std::string c_corpus;
        std::stringstream ss;
        std::string sequence;
        int c_limit;
};

#endif //KUSHUH_CPP_UTILS_SPLIT_H
