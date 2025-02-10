#ifndef NODE_H
#define NODE_H
#include <cstddef>

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }    
};

#endif
