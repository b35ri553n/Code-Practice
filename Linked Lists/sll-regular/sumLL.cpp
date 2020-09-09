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

int sumLL(Node *head){
    if(!head) return 0;
    if(!(head -> next)) return head -> data;
    int total = 0;
    while(head){
        total += head -> data;
        head = head -> next;
    }
    return total;
}

int main(){
    Node *head = new Node(10);
    // head -> next = new Node(20);
    // head -> next -> next = new Node(30);
    cout << sumLL(head) << endl;
    return 0;
}