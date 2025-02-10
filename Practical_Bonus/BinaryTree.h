#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include "Node.h"
#include <iostream>
struct BinaryTree{
    Node* root;
    BinaryTree() {
        root = NULL;
    }
    void insertNode(int data);
    void recursiveInsert(Node* curr, Node* newNode);
    bool searchNode(int data);
    bool recursiveSearch(Node* curr, int data);
};
#endif
