#include "BinaryTree.h"


int main() {
    BinaryTree tree;

    // Test case 1: Insert nodes into the tree
    std::cout << "Inserting nodes 10, 5, 15, 3, 7, 12, 18 into the tree.\n";
    tree.insertNode(10);
    tree.insertNode(5);
    tree.insertNode(15);
    tree.insertNode(3);
    tree.insertNode(7);
    tree.insertNode(12);
    tree.insertNode(18);
    // Test case 2: Try inserting a duplicate
    std::cout << "Inserting duplicate node 10 into the tree.\n";
    tree.insertNode(10);
    // Test case 3: Search for existing nodes
    std::cout << "Searching for node 7 (should be found).\n";
    std::cout<<"Result: "<<tree.searchNode(7)<<"\n";
    std::cout << "Searching for node 15 (should be found).\n";
    std::cout<<"Result: "<<tree.searchNode(15)<<"\n";
    // Test case 4: Search for non-existing node
    std::cout << "Searching for node 20 (should not be found).\n";
    std::cout<<"Result: "<<tree.searchNode(20)<<"\n";
    // Test case 5: Search in an empty tree
    BinaryTree emptyTree;
    std::cout << "Searching in an empty tree (should indicate tree is empty).\n";
    std::cout<<"Result: "<<emptyTree.searchNode(5)<<"\n";
    return 0;
}
