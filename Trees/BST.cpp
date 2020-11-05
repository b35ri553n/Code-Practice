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

Node *insertR(Node *root, int x) {
    if(!root) return new Node(x);
    else if(root -> key < x) 
        root -> right = insertR(root -> right, x);
    else if(root -> key > x)
        root -> left = insertR(root -> left, x);
    return root;
}

Node *insertI(Node *root, int x) {
    Node *temp = new Node(x);
    Node *parent = NULL, *curr = root;
    while(curr) {
        parent = curr;
        if(curr -> key > x) curr = curr -> left;
        else if(curr -> key < x) curr = curr -> right;
        else return root;
    }                               //curr becomes NULL and parent becomes last but one
    if(!parent) return temp;    //empty tree
    if(parent -> key > x)
        parent -> left = temp;
    else if(parent -> key < x) 
        parent -> right = temp;
    return root;
}

Node *getSuccessor(Node *curr) {    //returns inorder successor. but only when right child != NULL
    curr = curr -> right;
    while(curr && curr -> left)
        curr = curr -> left;
    return curr;
}

Node *deleteR(Node *root, int x) {
    if(!root) return NULL;  //tree is empty
    if(root -> key > x) 
        root -> left = deleteR(root -> left, x);
    else if(root -> key < x)
        root -> right = deleteR(root -> right, x); 
    else {      //found node to be deleted
        if(!(root -> left)) {   //root -> right is present but no left child. we delete root and make right as root
            Node *temp = root -> right;     //also handles when node to be deleted is leaf node
            delete root;
            return temp;
        }
        else if(!(root -> right)) {     ////root -> left is present but no right child. we delete root and make elft as root
            Node *temp = root -> left;
            delete root;
            return temp;
        }
        else {      //when node to be deleted has both children, we find nearest greater element and replace it
            Node *succ = getSuccessor(root);    //closest greater element is the leftmost leaf node of right child
            root -> key = succ -> key;      //make root as successor
            root -> right = deleteR(root -> right, succ -> key);       //delete the successor element
        }
        return root;
    }
    return root;
}

void inorder(Node *root) {
    if(root) {      //if tree is empty then we cant access its left right
        inorder(root -> left);
        cout << root -> key << " ";
        inorder(root -> right);
    }    
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
    root = insertR(root, 20);
    root = insertI(root, 75);
    inorder(root);      //print tree
    root = deleteR(root, 3);
    cout << endl;
    inorder(root);

    return 0;
}