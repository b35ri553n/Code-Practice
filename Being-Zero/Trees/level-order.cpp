// Given an array of unique elements, construct a Binary Search Tree and print the Level Order of the tree.

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

BSTNode *buildBST(BSTNode *root, int num) {
    if(!root) return new BSTNode(num);
    if(root -> data >= num)
        buildBST(root -> left, num);
    else buildBST(root -> right, num);
    return root;
}

void printLevelOrder(BSTNode *root) {
    queue<BSTNode *> q;
    queue<int> lq;
    unordered_map<int, vector<BSTNode *>> levelMap;
    q.push(root);
    int level = 1;
    lq.push(level);
    while(!q.empty()) {
        BSTNode *curr = q.front();
        q.pop();
        level = lq.front();
        lq.pop();
        levelMap[level].push_back(curr);
        if(curr -> left) {
            q.push(curr -> left);
            lq.push(level + 1);
        } 
        if(curr -> right) {
            q.push(curr -> right);
            lq.push(level + 1);
        } 
    }
    for(auto i = 1; i != level; i++) {
        for(auto j = levelMap[i].begin(); j != levelMap[i].end(); j++)
            cout << j -> data << " ";
        cout << endl;
    }
}

void helper(int *arr, int n) {
    BSTNode *root = NULL;
    for(int i = 0; i < n; i++) {
        root = buildBST(root, arr[i]);
    }
    printLevelOrder(root);
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
        helper(arr, n);
    }

    return 0;
}