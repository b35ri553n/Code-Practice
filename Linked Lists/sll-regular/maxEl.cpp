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

int maxEl(Node *head){
    if(!head) return -1;
    if(!(head -> next)) return head -> data;
    int max = head -> data;
    while(head){
        head = head -> next;
        if(head -> data > max){
            max = head -> data;
        }
        if(!(head -> next)) break;
    }
    return max;
}

int main(){
    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(5);    
    cout << maxEl(head) << endl;
    return 0;
}