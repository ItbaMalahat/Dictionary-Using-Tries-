// dictionary.c
#include "dictionary.h"

void initializeDictionary(TrieNode** root) {
    *root = createTrieNode();
}

void destroyDictionary(TrieNode** root) {
    destroyTrie(*root);
    *root = 0;
}

void addWordToDictionary(TrieNode* root, const char* word) {
    insertWord(root, word);
}

int searchInDictionary(TrieNode* root, const char* word) {
    return searchWord(root, word);
}
