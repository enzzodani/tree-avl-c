#include "../include/tree.h"
#include <stdio.h>
#include <stdlib.h>

//Initial Struct
typedef struct Node Node;
struct Node {
  int data;
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
  newNode->right = NULL;
  newNode->left = NULL;

  puts("newNode created");
  return newNode; 
}


//Basic Trees Operations
Node* insertNode(Node** root, Node* node) {
  //Root Empty
  if ((*root) == NULL) {
    *root = node; 
    return node;
  }

  if ((*root)->data == node->data) {
    puts("The value already exists");
    return *root;
  }
  
  if (node->data < (*root)->data) {
    insertNode(&((*root)->left), node);
  } else {
    insertNode(&((*root)->right), node);
  }

  return node;
}

void removeNode(Node** root, int data) {
  // root.data = data
  if ((*root)->data == data) {
    // doesnt have children
    if ((*root)->left == NULL && (*root)->right == NULL) {
    
    *root = NULL;
    free(*root);
    return;
    } else if ((*root)->left!=NULL || (*root)->right!=NULL) {

    }
    
    //one child 

    //two children

  }
}
