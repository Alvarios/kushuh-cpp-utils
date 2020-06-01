#include "./string/find_matches.h"
#include "./string/split.h"
#include "./string/format.h"
#include "./vector/print_vector.h"

using namespace std;

int main() {
    cout << "\nsplit\n" << endl;

    vector<string> path = split("all the king horses, and all the king mens", ',');
    cout << "\t" << print_vector(path) << endl;
    // ["all the king horses", " and all the king mens"]

    path = split("all the king horses, and all the king mens");
    cout << "\t" << print_vector(path) << endl;
    // ["a", "l", "l", ...]

    cout << "\nsplitter\n" << endl;

    Splitter splitter;
    splitter.init("all the king horses, and all the king mens", 2);
    cout << print_vector(splitter.read_block(' ')) << endl; // ["all", "the"]
    cout << print_vector(splitter.read_block(' ')) << endl; // ["king", "horses,"]
    cout << print_vector(splitter.read_block(' ')) << endl; // ["and", "all"]
    cout << print_vector(splitter.read_block(' ')) << endl; // ["the", "king"]
    cout << print_vector(splitter.read_block(' ')) << endl; // ["mens"]
    cout << print_vector(splitter.read_block(' ')) << endl; // []

    splitter.init("all the king horses, and all the king mens", 3);
    cout << print_vector(splitter.read_block(' ')) << endl; // ["all", "the", "king"]
    cout << print_vector(splitter.read_block(' ')) << endl; // ["horses,", "and", "all"]
    cout << print_vector(splitter.read_block(' ')) << endl; // ["the", "king", "mens"]
    cout << print_vector(splitter.read_block(' ')) << endl; // []

    cout << "\nfind_matches\n" << endl;

    vector<int> output = find_matches("all the king horses and all the king mens", "all");
    cout << "\t" << print_vector(output) << endl; // [0, 24]

    output = find_matches("all the king horses and all the king mens", "all", ' ');
    cout << "\t" << print_vector(output) << endl; // [0, 5]

    cout << "\nformat\n" << endl;

    cout << "remove_double_spaces\n" << endl;

    string str("all   the king        horses");
    remove_double_spaces(str);
    cout << "\t" << str << endl; // "all the king horses"

    cout << "\njoin\n" << endl;

    cout << "\t";
    cout << join(vector<string>{"all", "the", "king", "horses"}, " ") << endl;

    return 0;
}

