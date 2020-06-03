#include "print_vector.h"

using namespace std;

string print_vector(vector<string> arg) {
    if (arg.empty()) {
        return "[]";
    }

    string output("[");
    for (int i = 0; i < arg.size() - 1; i++) {
        output += "\"" + arg[i] + "\", ";
    }

    output += "\"" + arg[arg.size() - 1] + "\"]";
    return output;
}

string print_vector(vector<int> arg) {
    if (arg.empty()) {
        return "[]";
    }

    string output("[");
    for (int i = 0; i < arg.size() - 1; i++) {
        output += to_string(arg[i]) + ", ";
    }

    output += to_string(arg[arg.size() - 1]) + "]";
    return output;
}

string print_vector(vector<char> arg) {
    if (arg.empty()) {
        return "[]";
    }

    string output("[");
    for (int i = 0; i < arg.size() - 1; i++) {
        output += "\'" + string(arg[i], 1) + "\', ";
    }

    output += "\'" + string(arg[arg.size() - 1], 1) + "\']";
    return output;
}

string print_vector(vector<bool> arg) {
    if (arg.empty()) {
        return "[]";
    }

    string output("[");
    for (int i = 0; i < arg.size() - 1; i++) {
        output += to_string(arg[i]) + ", ";
    }

    output += to_string(arg[arg.size() - 1]) + "]";
    return output;
}

string print_vector(vector<double> arg) {
    if (arg.empty()) {
        return "[]";
    }

    string output("[");
    for (int i = 0; i < arg.size() - 1; i++) {
        output += to_string(arg[i]) + ", ";
    }

    output += to_string(arg[arg.size() - 1]) + "]";
    return output;
}

string print_vector(vector<float> arg) {
    if (arg.empty()) {
        return "[]";
    }

    string output("[");
    for (int i = 0; i < arg.size() - 1; i++) {
        output += to_string(arg[i]) + ", ";
    }

    output += to_string(arg[arg.size() - 1]) + "]";
    return output;
}