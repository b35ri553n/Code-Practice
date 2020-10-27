//Program to find previous greater element for every element in an array.
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void display(Node *head) {
    Node *curr = head;
    while (curr != NULL) {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
}

//Since insertion and deletion happens at same end, they're done at head in case of SLL

Node *push(Node *&head, int x) {
    Node *temp = new Node(x);
    temp -> next = head;
    head = temp;
    return head;
}

void pop(Node *&head) {
    if (!head) return;
    // int res = head -> data;
    Node *temp = head;
    head = head -> next;
    delete(temp);
    // return res;
}

int *prevGreaterElement(int *arr, int size) {
    Node *head = new Node(arr[size - 1]);
    int *res = new int[size];
    res[size - 1] = -1;        //since there is no previous element for arr[size - 1]; 
    for(int i = size - 2; i >= 0; i--) {
        while(head && head -> data <= arr[i])
            pop(head);
        res[i] = (!head) ? -1: head -> data;
        push(head, arr[i]);
    }
    return res;
}

int main() {
    int arr[] = {5, 15, 10, 8, 6, 12, 9, 18};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int *res = prevGreaterElement(arr, arr_size);
    cout << "____Result____" << endl;
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ---> " << res[i] << endl;
}