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

void findK(Node* root, int k, string* result) {
    int level_num = 0;
    *result = "";
    queue <Node *> q;
    q.push(root);
    q.push(NULL);
    while(level_num <= k && q.size() > 1) {
        Node *curr = q.front();
        q.pop();
        if(!curr) {
            q.push(NULL);
            level_num++;
            continue;
        }
        if(level_num == k) *result += to_string(curr -> key) + ", ";
        if(curr -> left) q.push(curr -> left);
        if(curr -> right) q.push(curr -> right);
    }
}

string findKNodes(Node* root, int k) {
    std::string result;
    findK(root, k, &result);
    return result;
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
    cout << findKNodes(root, 2) << endl;    //2, 5, 8, 12
}