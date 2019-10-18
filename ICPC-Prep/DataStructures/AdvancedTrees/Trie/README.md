# Trie

There are many ways to store a string, you could do it on an array, BST, or Hashmap, the most efficient approach would be the latter, but what if we want to do suffix queries?

The trie is a DS for storing strings as a tree. Each trie node has a char, a boolean marking end of node and a hashmap or array of nodes (max 26). You can change te boolean for number of searches, or results, anything.

The first node of the trie is a null value, and the hashtable will have the next nodes.

## Complexities

* Lookup of a string: O(m) where m is the length of the string
* Inserting: O(m) where m is the length of the string
* Size complexity is big compared to hashtable: O(alphabetsize x keylength x N)
