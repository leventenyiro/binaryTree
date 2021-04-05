#include <iostream>
#include "node.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Node* n1 = new Node(6);
    n1->left = new Node(2);
    n1->left->left = new Node(3);
    n1->left->left->right = new Node(4);
    n1->left->left->right->left = new Node(9);
    n1->left->left->right->right = new Node(2);

    n1->right = new Node(7);
    n1->right->right = new Node(5);
    n1->right->right->left = new Node(1);
    n1->right->right->left->right = new Node(8);

    Node::inOrder(n1);
    cout << endl;
    
    return 0;
}
