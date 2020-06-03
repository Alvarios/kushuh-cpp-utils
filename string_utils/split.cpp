#include "split.h"

using namespace std;

// Convert string_utils into vector_utils of sequences.
vector<string> split(const string& str, char delimiter) {
    vector<string> output;

    stringstream ss(str); // Turn the string_utils into a stream.
    string sequence;

    // While a new sequence was found.
    while(getline(ss, sequence, delimiter)) {
        if (!sequence.empty()) {
            output.push_back(sequence);
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


void Sequencer::init(const string& corpus, int const& limit) {
    c_corpus = corpus;
    c_limit = limit;

    ss = stringstream(corpus);
}

void Sequencer::init(const string& corpus) {
    c_corpus = corpus;

    c_limit = 25;
    ss = stringstream(corpus);
}

vector<string> Sequencer::read_block(char delimiter) {
    vector<string> output;

    if (ss.peek() == EOF) {
        return output;
    }

    int counter = 0;

    // While a new sequence was found.
    while(counter < c_limit && getline(ss, sequence, delimiter)) {
        if (!sequence.empty()) {
            counter++;
            output.push_back(sequence);
        }
    }

    return output;
};