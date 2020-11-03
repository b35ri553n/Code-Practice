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

int getSize(Node *root) {
    if(!root)       //if tree is empty then we cant access its left right 
        return 0;
    return 1 + getSize(root -> left) + getSize(root -> right);
}

int main() {
    Node *root = new Node(10);      //Node *root = NULl for a null root
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> left -> left = new Node(40);
    cout << getSize(root) << endl;
    return 0;
}