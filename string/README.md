# String utils

## Split

Split a string in vector of sequences. A sequence is a group of characters separated
by a specific separator.

```c++
vector<string> path = split("all the king horses, and all the king mens", ',');
print_vector(path);
// ["all the king horses", " and all the king mens"]

// No delimiters is equivalent to split by character.
path = split("all the king horses, and all the king mens");
print_vector(path);
// ["a", "l", "l", ...]
```

## find_matches

Given a string s1 and a subsequence s2, `find_matches` will return a list of every
index occurrence of s2 in s1.

For example :
```c++
vector<int> output = find_matches("all the king horses and all the king mens", "all");
print_vector(output); // [0, 24]

output = find_matches("all the king horses and all the king mens", "all", ' ');
print_vector(output); // [0, 5]
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