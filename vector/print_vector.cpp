#include "print_vector.h"

using namespace std;

void print_vector(vector<string> arg) {
    cout << "[";
    for (int i = 0; i < arg.size() - 1; i++) {
        cout << "\"" << arg[i] << "\", ";
    }

    cout << "\"" << arg[arg.size() - 1] << "\"]" << endl;
}

void print_vector(vector<int> arg) {
    cout << "[";
    for (int i = 0; i < arg.size() - 1; i++) {
        cout << arg[i] << ", ";
    }

    cout << arg[arg.size() - 1] << "]" << endl;
}

void print_vector(vector<char> arg) {
    cout << "[";
    for (int i = 0; i < arg.size() - 1; i++) {
        cout << "\'" << arg[i] << "\', ";
    }

    cout << "\'" << arg[arg.size() - 1] << "\']" << endl;
}

void print_vector(vector<bool> arg) {
    cout << "[";
    for (int i = 0; i < arg.size() - 1; i++) {
        cout << arg[i] << ", ";
    }

    cout << arg[arg.size() - 1] << "]" << endl;
}

