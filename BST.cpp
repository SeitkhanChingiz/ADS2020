#include <iostream>
int main() {
    TreeNode root(5);
    TreeNode leftChild(4);
    TreeNode rightChild(6);
    root.left = &leftChild;
    root.right = &rightChild;

    std::cout <<
    "data: " << root.data <<
    ", left: " << root.left->data <<
    ", right: " << root.right->data <<
    std::endl;
    
    return 0;
