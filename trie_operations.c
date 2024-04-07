// trie_operations.c
#include <string.h>
#include "trie_operations.h"

void insertWord(TrieNode* root, const char* word) {
    TrieNode* current = root;

    for (int i = 0; i < strlen(word); i++) {
        char currentChar = tolower(word[i]);  // Convert to lowercase for case-insensitive comparison
        int index = currentChar - 'a';

        if (current->children[index] == NULL) {
            current->children[index] = createTrieNode();
        }

        current = current->children[index];
    }

    current->isEndOfWord = 1;
}

int searchWord(TrieNode* root, const char* word) {
    TrieNode* current = root;

    for (int i = 0; i < strlen(word); i++) {
        char currentChar = tolower(word[i]);  // Convert to lowercase for case-insensitive comparison
        int index = currentChar - 'a';

        if (current->children[index] == NULL) {
            return 0; // Word not found
        }

        current = current->children[index];
    }

    return (current != NULL && current->isEndOfWord);
}
