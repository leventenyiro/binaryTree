#pragma once

#include <iostream>

using namespace std;

class Node {
    public:
        int key;
        Node* left;
        Node* right;

        Node() {
            left = nullptr;
            right = nullptr;
        }

        Node(int x) {
            left = nullptr;
            right = nullptr;
            key = x;
        }

        static void inOrder(Node* t);

        static void preOrder(Node* t);

        static void postOrder(Node* t);
};

void Node::inOrder(Node* t) {
    if (t != nullptr) {
        inOrder(t->left);
        cout << t->key << ",";
        inOrder(t->right);
    }
}

void Node::preOrder(Node* t) {
    if (t != nullptr) {
        cout << t->key << ",";
        preOrder(t->left);
        preOrder(t->right);
    }
}

void Node::postOrder(Node* t) {
    if (t != nullptr) {
        postOrder(t->left);
        postOrder(t->right);
        cout << t->key << ",";
    }
}