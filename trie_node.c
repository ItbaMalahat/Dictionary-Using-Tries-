// trie_node.c
#include <stdlib.h>
#include "trie_node.h"

TrieNode* createTrieNode() {
    TrieNode* node = (TrieNode*)malloc(sizeof(TrieNode));
    if (node != NULL) {
        for (int i = 0; i < ALPHABET_SIZE; i++) {
            node->children[i] = NULL;
        }
        node->isEndOfWord = 0;
    }
    return node;
}

void destroyTrie(TrieNode* root) {
    if (root == NULL) {
        return;
    }

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        destroyTrie(root->children[i]);
    }

    free(root);
}
