// trie_operations.h
#ifndef TRIE_OPERATIONS_H
#define TRIE_OPERATIONS_H

#include "trie_node.h"

void insertWord(TrieNode* root, const char* word);
int searchWord(TrieNode* root, const char* word);

#endif  // TRIE_OPERATIONS_H
