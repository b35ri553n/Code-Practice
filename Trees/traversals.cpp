#include<bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;
    Node(int k) {
        key = k;
        left = right = NULL;
    }
};

void inorder(Node *root) {
    if(root) {      //if tree is empty then we cant access its left right
        inorder(root -> left);
        cout << root -> key << " ";
        inorder(root -> right);
    }    
}

void preorder(Node *root) {
    if(root) {      //if tree is empty then we cant access its left right
        cout << root -> key << " ";
        inorder(root -> left);
        inorder(root -> right);
    }    
}

void postorder(Node *root) {
    if(root) {      //if tree is empty then we cant access its left right
        inorder(root -> left);
        inorder(root -> right);
        cout << root -> key << " ";
    }    
}

int main() {
    Node *root = new Node(10);      //Node *root = NULl for a null root
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> left -> left = new Node(40);
    inorder(root);
    preorder(root);
    postorder(root);
    return 0;
}