// Given an array of unique elements, construct a Binary Search Tree and for every node, print the depth of that node.
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

BSTNode *buildBST(BSTNode *root, int num, int level) {
    if(!root) {
        cout << level << " ";
        return new BSTNode(num);
    }
    if(root -> data >= num) {
        root -> left = buildBST(root -> left, num, ++level);
    } else {
        root -> right = buildBST(root -> right, num, ++level);
    }
    return root;
}

void helper(int *arr, int n) {
    BSTNode *root = NULL;
    for(int i = 0; i < n; i++) {
        root = buildBST(root, arr[i], 0);
    }
    return;
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
        cout << endl;
    }
    return 0;
}