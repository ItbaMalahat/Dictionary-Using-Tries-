// main.c
#include <stdio.h>
#include "dictionary.h"

int main() {
    TrieNode* root;
    initializeDictionary(&root);

    // Adding words to the dictionary
    addWordToDictionary(root, "Itba");
    addWordToDictionary(root, "GIKI");
    addWordToDictionary(root, "stawberry");
 

loadDictionaryFromFile(&root, "words.txt");

    // Checking if words are in the dictionary
    printf("Is 'Itba' in the dictionary? %s\n", searchInDictionary(root, "Itba") ? "Yes" : "No");
    printf("Is 'GIKI' in the dictionary? %s\n", searchInDictionary(root, "GIKI") ? "Yes" : "No");
    printf("Is 'Junior' in the dictionary? %s\n", searchInDictionary(root, "Junior") ? "Yes" : "No");
    printf("Is 'Systems Programming' in the dictionary? %s\n", searchInDictionary(root, "Systems Programming") ? "Yes" : "No");

    // Save and load dictionary to/from file
    saveDictionaryToFile(root, "dictionary.dat");
    destroyDictionary(&root);

    // Load the dictionary back from file
    loadDictionaryFromFile(&root, "dictionary.dat");

    // Checking if 'apple' is still in the dictionary after loading
    printf("Is 'apple' in the dictionary after loading? %s\n", searchInDictionary(root, "apple") ? "Yes" : "No");

    // Cleanup
    destroyDictionary(&root);

    return 0;
}
