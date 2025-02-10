#include"BinaryTree.h"

void BinaryTree::insertNode(int data) {
    Node* newNode = new Node(data);
    if(root == NULL)
       root = newNode; 
    else
        recursiveInsert(root , newNode);
}

void BinaryTree::recursiveInsert(Node* curr, Node* newNode) {
    if(curr->data == newNode->data)
        std::cout << "No duplicate insertions are permitted." << std::endl;
    
    else if(curr->data > newNode->data) {
        if(curr->left == NULL) 
            curr->left = newNode;
        else
            recursiveInsert(curr->left , newNode); 
    } 
    else if(curr->data < newNode->data) {
        if(curr->right == NULL) 
            curr->right = newNode;
        else
            recursiveInsert(curr->right , newNode); 
    }
}

bool BinaryTree::searchNode(int data) {
    if(root == NULL) {
        std::cout << "Tree is empty." << std::endl;
        return false;
    }
    else
        return recursiveSearch(root,data);
}

bool BinaryTree::recursiveSearch(Node* curr, int data) {
    if(curr == NULL) {
        std::cout << "Data not found." << std::endl;
        return false;
    }
    
    if(curr->data == data) {
        std::cout << "Current Node value is: " << curr->data 
            << ", the required value is: " << data <<std::endl;
        return true;
    }

    std::cout << "Current node value is: " << curr->data << "." << std::endl;

    if(data < curr->data) {
        std::cout << "The desired data is less than the current node's" 
            << " value, searching down the left child..." << std::endl;
        return recursiveSearch(curr->left , data);
    }

    if(data > curr->data) {
        std::cout << "The desired data is greater than the current node's" 
            << " value, searching down the right child..." << std::endl;
        return recursiveSearch(curr->right, data);
    }
    return false;
}


