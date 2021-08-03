// Given an array of unique elements, construct a Binary Search Tree and check if its a Full Binary Tree [FBT]. 
// A FBT is one in which each node is either a leaf or possesses exactly 2 child nodes.
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

bool has0or2Children(BSTNode *root) {
    if(!root) return true;
    int leftE = (root -> left ? 2 : 1), rightE = (root -> right ? 2 : 1);
    if(leftE ^ rightE) return false;
    return true;
}

bool isFullBST(BSTNode *root) {
    if(!root) return true;
    queue<BSTNode *> q;
    q.push(root);
    q.push(NULL);
    while(q.size() > 1) {
        BSTNode *curr = q.front();
        q.pop();
        if(!curr) {
            q.push(NULL);
            continue;
        }
        if(!has0or2Children(curr)) return false;
        if(curr -> left) q.push(curr -> left);
        if(curr -> right) q.push(curr -> right);
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
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) 
            cin >> arr[i];
        BSTNode *root = helper(arr, n);
        cout << ((isFullBST(root)) ? "True" : "False") << endl;
    }
    return 0;
}