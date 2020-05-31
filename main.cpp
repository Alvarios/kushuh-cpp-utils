#include "./string/find_matches.h"
#include "./string/split.h"
#include "./string/format.h"
#include "./vector/print_vector.h"

using namespace std;

int main() {
    cout << "\nsplit\n" << endl;

    vector<string> path = split("all the king horses, and all the king mens", ',');
    cout << "\t";
    print_vector(path);
    // ["all the king horses", " and all the king mens"]

    path = split("all the king horses, and all the king mens");
    cout << "\t";
    print_vector(path);
    // ["a", "l", "l", ...]

    cout << "\nfind_matches\n" << endl;

    vector<int> output = find_matches("all the king horses and all the king mens", "all");
    cout << "\t";
    print_vector(output); // [0, 24]

    output = find_matches("all the king horses and all the king mens", "all", ' ');
    cout << "\t";
    print_vector(output); // [0, 5]

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

