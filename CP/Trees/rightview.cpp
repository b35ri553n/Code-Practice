#include <iostream>
#include <vector>
#include <queue>
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

vector<int> getRightView(Node *root) {
    vector<int> right_view;
    queue<Node *> q;	//give a better name like level_order_traversal
    q.push(root);
    // left_view.push_back(root -> key);
    q.push(NULL);
    while(q.size() > 1) {
        Node *node = q.front();
        q.pop();
        if(!(q.front())) right_view.push_back(node -> key);
        if(!node) {
            // left_view.push_back(q.front() -> key);  //for left view
            q.push(NULL);
            continue;
        }
        if(node -> left) q.push(node -> left);
        if(node -> right) q.push(node -> right);
    }
    return right_view;
}

int main() {
    Node *root = new Node(10);      //Node *root = NULl for a null root
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(7);
    root -> left -> left -> right = new Node(10);
    root -> left -> right = new Node(8);
    root -> right -> left = new Node(12);
    root -> right -> right = new Node(15);
    // root -> right -> right -> left = new Node(14);
    vector<int> rightView = getRightView(root);
    for(int i: rightView)
        cout << i << " ";
    return 0;
}