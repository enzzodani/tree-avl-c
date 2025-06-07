#include "tree-avl.h"
#include <stdio.h>
#include <stdlib.h>

//Initial Struct
typedef struct Node Node;
struct Node {
  int data;
  int height;
  Node* right;
  Node* left;
};

//Init Node
Node* initNode(int data) {
  Node* newNode = (Node *) malloc(sizeof(Node));

  if (newNode == NULL) {
    puts("Error: Alloc memory Malloc (initNode)");
    exit(EXIT_FAILURE);
  }

  newNode->data = data;
  newNode->height = 0;
  newNode->right = NULL;
  newNode->left = NULL;

  puts("newNode created");
  return newNode; 
}

//Aux Functions

//Basic Trees Operations
void insertNode(Node* root, Node* node) {

  //Case 1: Data <= Root
  
  //Case 2: Data > Root
}

