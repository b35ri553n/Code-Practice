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

Node *reverseSLL(Node *head) {
    vector<int> vec;
    for(Node *curr = head; curr; curr = curr -> next)
        vec.push_back(curr -> data);
    for(Node *curr = head; curr; curr = curr ->next){
        curr -> data = vec.back();
        vec.pop_back();
    }
    return head;
}

int main() {
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> next = new Node(50);
    head = reverseSLL(head);
    traverseNprint(head);
    return 0;
}