#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *prev;
    struct Node *next; 
}*first = NULL; //global DLL

void createDLL(int A[], int n){
    struct Node *temp;
    struct Node *last;
    int i;

    first = new Node;
    first -> data = A[0];
    first -> prev = first -> next = NULL;
    last = first;

    for(i = 1; i < n; ++i){     //i = 0 is already filled
        temp = new Node;
        temp -> data = A[i];
        temp -> next = last -> next;
        temp -> prev = last;
        last -> next = temp;
        last = temp;
    } 
}

void displayDLL(struct Node *head){
    while(head) {
        cout << head -> data << " ";
        head = head -> next;
    }
    cout << endl;
}

int lengthDLL(struct Node *head){
    if(!head) return -1;
    if(!(head -> next)) return 1;
    int count = 0;
    while(head){
        ++count;
        head = head -> next;
    }
    return count;
}

void insertDLL(struct Node *head, int position, int num){
    if(position < 1 || position > lengthDLL(head)) return;
    struct Node *temp;
    temp -> data = num;
    if(position == 1){
        temp -> prev = NULL;
        first -> prev = temp;
        temp -> next = first;
        first = temp;
    }
    else {
        head = first;
        for(int i = 1; i < position - 1; ++i)
            head = head -> next;
        temp -> prev = head;
        temp -> next = head -> next;
        if(head -> next) head -> next -> prev = temp;
        head -> next = temp;
    }
}

int main(){
    int A[] = {10, 20, 30, 40, 50};
    createDLL(A, 5);
    insertDLL(first, 3, 25);
    displayDLL(first);
    return 0;
}