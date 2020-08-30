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

void findNthE(Node *head, int n) {
    if(!head) return;
    Node *slow = head, *fast = head;
    for(int i = 0; i < n; ++i){
        if(!fast) return;
        fast = fast -> next;
    }
    while(fast){
        slow = slow -> next;
        fast = fast -> next;
    }
    cout << slow -> data;
}

int main() {
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> next = new Node(50);
    findNthE(head, 2);
    return 0;
}