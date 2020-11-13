#include <bits/stdc++.h>
using namespace std;

class ArrayList {
  private:
    int *arr;
    int num_elements;
    int capacity;
  public:
    ArrayList(int size){
        arr = new int[size];
        num_elements = 0;
        capacity = size;
    }

    int getAt(int index){
        return arr[index];
    }
    int length() {
        return num_elements;
    }
    void print() {
        for(int i=0; i<num_elements; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    void resize() {
        int* tempArr=new int[capacity*2];
        capacity*=2;
        for(int i=0; i<num_elements; i++) {
            tempArr[i]=arr[i];
        }
        delete [] arr;
        arr=tempArr;
    }
    void insert(int val) {
        if(num_elements < capacity) {
            arr[num_elements]=val;
            num_elements++;
        } else {
            resize();
            arr[num_elements]=val;
            num_elements++;
        }
    }
};

struct Node {
    int key;
    Node *left;
    Node *right;

    Node(int k) {
        key = k;
        left = right = NULL;
    }
};

void inOrderTraversal(Node* root, ArrayList* result) {
    if(root) {
        inOrderTraversal(root -> left, result);
        result -> insert(root -> key);
        inOrderTraversal(root -> right, result);
    }
}

int findKthMax(Node* root, int k,int nodes) {
    ArrayList *inOrderTraversalList = new ArrayList(nodes);
    inOrderTraversal(root, inOrderTraversalList);
    return inOrderTraversalList -> getAt(nodes - k);
}

int main() {
    Node *root = new Node(6);      //Node *root = NULl for a null root
    root -> left = new Node(4);
    root -> right = new Node(9);
    root -> left -> right = new Node(5);
    root -> left -> left = new Node(2);
    root -> right -> left = new Node(8);
    cout << findKthMax(root, 3, 6) << endl;
}