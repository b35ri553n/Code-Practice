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

void printLevelOrder(Node *root) {
    if(!root) return;
    queue <Node *> q;
    q.push(root);
    q.push(NULL);
    while(q.size() > 1) {
        Node *curr = q.front();
        q.pop();
        if(!curr) {
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << curr -> key << " ";
        if(curr -> left) q.push(curr -> left);
        if(curr -> right) q.push(curr -> right);
    }
}

int main() {
    Node *root = new Node(10);      //Node *root = NULl for a null root
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> left -> left = new Node(40);
    printLevelOrder(root);
}