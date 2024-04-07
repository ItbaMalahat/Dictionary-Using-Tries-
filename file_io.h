// file_io.h
#ifndef FILE_IO_H
#define FILE_IO_H

#include "trie_node.h"

void saveDictionaryToFile(TrieNode* root, const char* filename);
void loadDictionaryFromFile(TrieNode** root, const char* filename);

#endif  // FILE_IO_H
