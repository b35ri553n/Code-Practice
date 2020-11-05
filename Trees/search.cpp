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

bool searchElR(Node *root, int x) {
    if(!root) return false;     //To handle empty root or if x is not present
    else if(root -> key == x) return true;
    else if(root -> key > x) return searchElR(root -> left, x);
    else return searchElR(root -> right, x);
}

bool searchElI(Node *root, int x) {
    while(root) {
        if(root -> key == x) return true;
        else if(root -> key > x) root = root -> left;
        else root = root -> right;
    }
    return false;
}

int main() {
    Node *root = new Node(15);      //Node *root = NULl for a null root
    root -> left = new Node(5);
    root -> right = new Node(20);
    root -> left -> left = new Node(3);
    root -> right -> left = new Node(18);
    root -> right -> left -> left = new Node(16);
    root -> right -> right = new Node(80);
    if(searchElR(root, 16)) cout << "Found" << endl;
    else cout << "Not found" << endl;
    if(searchElI(root, 19)) cout << "Found" << endl;
    else cout << "Not found" << endl;
    return 0;
}