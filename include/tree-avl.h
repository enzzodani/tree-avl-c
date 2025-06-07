#ifndef TREE_H
#define TREE_H

//Initial structures and Functions
typedef struct Node Node;

Node* initNode(int data);

//Aux Functions
int heightTree(Node* node);

void updateHeight(Node* node);

void balanceFactor(Node* node);

void searchData(int data);

//Basic Trees Operations
void insertNode(Node* root, Node* node);
void removeNode(Node* root, int data);

//Rotations
void simple_right(Node* node);
void simple_left(Node* node);
void double_left_right(Node* node);
void double_right_left(Node* node);

#endif
