// Given an array of unique elements, construct a Binary Search Tree and check if its a complete tree. 
// In a complete binary tree every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

struct BSTNode {
    int data;
    BSTNode *left = NULL;
    BSTNode *right = NULL;
    BSTNode(int d) {
        data = d;
    }
};

bool isCompleteBST(BSTNode *root) {
    if(!root) return true;
    queue<BSTNode *> q;
    q.push(root);
    q.push(NULL);
    bool flag = false;
    while(q.size() > 1) {
        BSTNode *curr = q.front();
        q.pop();
        cout << curr -> data << " ";
        if(!curr) {
            for(auto it = q.front(); it != q.back(); it++) {
                if(it -> data == -1) flag = true;
                else if(flag) return false;
            }
            q.push(NULL);
            if(!flag) flag = false;
            continue;
        }
        if(curr && curr -> data == -1) continue;
        if(curr -> left) q.push(curr -> left);
        else q.push(new BSTNode(-1));
        if(curr -> right) q.push(curr -> right);
        else q.push(new BSTNode(-1));
    }
    return true;
}

BSTNode *buildBST(BSTNode *root, int num) {
    if(!root) {
        return new BSTNode(num);
    }
    if(root -> data >= num) {
        root -> left = buildBST(root -> left, num);
    } else {
        root -> right = buildBST(root -> right, num);
    }
    return root;
}

BSTNode *helper(int *arr, int n) {
    BSTNode *root = NULL;
    for(int i = 0; i < n; i++) {
        root = buildBST(root, arr[i]);
    }
    return root;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    // cin.ignore();
    cout << "hola ";
    while(t--) {
        int n;
        cin >> n;
        cout << "hey ";
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        cout << "hello ";
        BSTNode *root = helper(arr, n);
        cout << "hey ";
        cout << ((isCompleteBST(root)) ? "True" : "False") << endl;
    }
    return 0;
}