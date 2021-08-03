// Given a linked list, rotate the list to the right by k places, where k is non-negative.
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

void traverseNprint(Node *head) {
    Node *curr = head;
    while(curr != NULL) {
    cout << curr -> data << " ";
    curr = curr -> next;
    }
}

Node *rotateListByK(Node *head, int k) {
    if(!head || !head -> next) return head;
    int n = 0;
    Node *temp = head;
    while(temp) {
        n++;
        temp = temp -> next;
    }
    if(k >= n) k = k % n;
    temp = head;
    int i = 1;
    while(i < n - k) {
        temp = temp -> next;
        i++;
    }
    Node *head2 = temp -> next;
    if(!head2) return head;
    temp -> next = NULL;
    temp = head2;
    while(temp && temp -> next) temp = temp -> next;
    temp -> next = head;
    return head2;
}

int main() {
    int k;
    cin >> k;
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> next = new Node(50);
    head -> next -> next -> next -> next -> next = new Node(60);
    Node *rot = rotateListByK(head, k);
    traverseNprint(rot);
    return 0;
}