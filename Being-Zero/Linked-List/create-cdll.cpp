// Given N, create and return a Circular Doubly Linked List containing values 1 to N.  
// In circular doubly linked list, head previous should point to last node and last next should point to head node.

#include <bits/stdc++.h>
using namespace std;

struct CDLLNode{
    int data;
    struct CDLLNode *next;
    struct CDLLNode *prev;
};


CDLLNode *createCDLList(int n){
    // TODO:  Complete this function
    if(n == 0) return NULL;
    CDLLNode *head = new CDLLNode();
    head -> data = 1;
    head -> next = NULL;
    head -> prev = NULL;
    CDLLNode *tempp = head;
    CDLLNode *temp;
    for(int i = 2; i <= n; i++) {
        temp = new CDLLNode();
        temp -> data = i;
        if(n == i) temp -> next = head;
        else temp -> next = NULL;
        tempp -> next = temp;
        temp -> prev = tempp;
        tempp = temp;
    }
    head -> prev = tempp;
    return head;
}

// Written and Hidden by author
void printList(CDLLNode *h) {
    if(!h) {
        cout << "EMPTY!" << endl;
        return;
    }
    CDLLNode *p;
	p = h; cout << p -> data << "\t";
    p = p -> next;
	while(p != h)
	{
		cout << p -> data << "\t";
		p = p -> next;
	}
	cout << endl;
}

int main()
{
  	int n, t, x;
  	scanf("%d", &t);
  	while(t--)
    {
      	scanf("%d", &n);
        CDLLNode *h = createCDLList(n);
      	printList(h);
      	printf("\n");
    }
  	return 0;
}