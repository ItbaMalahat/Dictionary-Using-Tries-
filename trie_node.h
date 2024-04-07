// trie_node.h
#ifndef TRIE_NODE_H
#define TRIE_NODE_H

#define ALPHABET_SIZE 26

struct TrieNode {
    struct TrieNode* children[ALPHABET_SIZE];
    int isEndOfWord;
};

typedef struct TrieNode TrieNode;

TrieNode* createTrieNode();
void destroyTrie(TrieNode* root);

#endif  // TRIE_NODE_H
