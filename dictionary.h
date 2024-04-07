// dictionary.h
#ifndef DICTIONARY_H
#define DICTIONARY_H

#include "trie_node.h"

void initializeDictionary(TrieNode** root);
void destroyDictionary(TrieNode** root);
void addWordToDictionary(TrieNode* root, const char* word);
int searchInDictionary(TrieNode* root, const char* word);

#endif  // DICTIONARY_H
