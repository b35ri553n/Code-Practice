#include <bits/stdc++.h>
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

string findAncestors(Node *root, int k) {
    string res = "";
    Node *curr = root;
    while(curr -> key != k) {
        res += to_string(curr -> key) + ", ";
        if(curr -> key < k) curr = curr -> right;
        else if (curr -> key > k) curr = curr -> left;
    }
    return res;
}

int main() {
    Node *root = new Node(6);      //Node *root = NULl for a null root
    root -> left = new Node(4);
    root -> right = new Node(9);
    root -> left -> left = new Node(2);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(8);
    root -> right -> right = new Node(12);
    root -> right -> right -> left = new Node(10);
    root -> right -> right -> right = new Node(14);
    cout << findAncestors(root, 12);
    return 0;
}