/****************************************************************************
 * dictionary.c
 *
 * Computer Science 50
 * Problem Set 6
 *
 * Implements a dictionary's functionality.
 ***************************************************************************/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "dictionary.h"

#define HTSIZE 1024

// create a linked list struct for nodes
typedef struct node
    {
        // the value to store in this node
        char word[LENGTH+1];

        // the link to the next node in the list
        struct node* next_node;
    }
    node;
    // initialize the hash table
   node* hashtable[HTSIZE];
    


/**
 * Returns true if word is in dictionary else false.
 */
 
bool check(const char* word)
{
    // TODO
    return false;
}

/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */


bool load(const char* dictionary)
{
    // TODO    
    // open the dictionary file to access the words
    FILE* fp = fopen(dictionary, "r");
    if(fp == NULL)
    {
        printf("could not open %s file\n", dictionary);
        return 0;
    }
    
    char word[LENGTH+1];
    while ( fscanf(fp, "%s", word) != EOF)  
    {
        // malloc a node* for each new word
        node* next_node = malloc(sizeof(node));
        
        fscanf(fp, "%s", next_node->word);  
        
        
    }
      
        // my hash function
        unsigned int hash(char* word);
        {
            int hash = tolower(word[0]) - 'a';
            
            return hash % HTSIZE;    
        }
                        
                        
    return false;
    
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    // TODO
    return 0;
}

/**
 * Unloads dictionary from memory.  Returns true if successful else false.
 */
bool unload(void)
{
    // TODO
    return false;
}
