# String utils

## Split

Split a string in vector of sequences. A sequence is a group of characters separated
by a specific separator.

```c++
vector<string> path = split("all the king horses, and all the king mens", ',');
cout << print_vector(path) << endl;
// ["all the king horses", " and all the king mens"]

// No delimiters is equivalent to split by character.
path = split("all the king horses, and all the king mens");
cout << print_vector(path) << endl;
// ["a", "l", "l", ...]
```

### Sequencer

Sequencer is a special class to read a long string by custom blocks, instead of loading
the whole string to memory.

```c++
Sequencer sequencer;
// Second parameter is block length in words. Default is 25.
sequencer.init("all the king horses, and all the king mens", 2);

cout << print_vector(sequencer.read_block(' ')) << endl; // ["all", "the"]
cout << print_vector(sequencer.read_block(' ')) << endl; // ["king", "horses,"]
cout << print_vector(sequencer.read_block(' ')) << endl; // ["and", "all"]
cout << print_vector(sequencer.read_block(' ')) << endl; // ["the", "king"]
cout << print_vector(sequencer.read_block(' ')) << endl; // ["mens"]
cout << print_vector(sequencer.read_block(' ')) << endl; // []

// Or
vector<string> sequence = sequencer.read_block(' ');

while (!sequence.empty()) {
    // Do something with the sequence.
    
    sequence = sequencer.read_block(' ');
}
```

## find_matches

Given a string s1 and a subsequence s2, `find_matches` will return a list of every
index occurrence of s2 in s1.

For example :
```c++
vector<int> output = find_matches("all the king horses and all the king mens", "all");
cout << print_vector(output) << endl; // [0, 24]

output = find_matches("all the king horses and all the king mens", "all", ' ');
cout << print_vector(output) << endl; // [0, 5]
```

> 💡 Tip : when delimiter is specified, index represent the position in the splitted
 array of the match. In the second example, first match remains the same (as sequence
 starts with the string to match) but the second one, at the 24th character, is
 the 5th word (split on space is equivalent to splitting on words).

> 💡 Tip : With a delimiter, only EXACT MATCHES will return true. `find_matches("all the king horses and all the king mens", "al", " ")`
 will return 0 match, as no word is strictly equal to all.

## Format

Miscellaneous format functions.

### remove_double_spaces

```c++
string str("all   the king        horses");
remove_double_spaces(str);
cout << str << endl; // "all the king horses"
```

### join

Join a vector of strings on a given separator.

```c++
cout << join(vector<string>{"all", "the", "king", "horses"}, " ") << endl;
// all the king horses
```