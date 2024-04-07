// file_io.c
#include <stdio.h>
#include <stdlib.h>
#include "file_io.h"
#include "trie_node.h"

void saveDictionaryToFile(TrieNode* root, const char* filename) {
    FILE* file = fopen(filename, "wb");

    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    // Write the trie structure to the file using fwrite
    fwrite(root, sizeof(TrieNode), 1, file);

    fclose(file);
}

void loadDictionaryFromFile(TrieNode** root, const char* filename) {
    FILE* file = fopen(filename, "rb");

    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    // Allocate memory for the root node
    *root = createTrieNode();

    // Read the trie structure from the file using fread
    fread(*root, sizeof(TrieNode), 1, file);

    fclose(file);
}
