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
    while(curr != NULL) {
    cout << curr -> data << " ";
    curr = curr -> next;
    }
}

Node* push(Node *&head, int x) {
    Node *temp = new Node(x);
    temp -> next = head;
    head = temp;
    return head;
}

int pop(Node *&head) {
    if(!head) return -1;
    int res = head -> data;
    Node *temp = head;
    head = head -> next;
    delete(temp);
    return res;
}

int evaluate(int op1, int op2, char symbol) {
    switch(symbol) {
        case '+' : return (op2 + op1);
        case '-' : return (op2 - op1);
        case '*' : return (op2 * op1);
        case '/' : return (op2 / op1);
        case '^' : return (pow(op2, op1));
        default : cout << "Invalid mathematical operator" << endl;
    }
    return -1;
}

bool isDigit(char num) {
    for(int i = 0; i < 10; i++) {
        if(num - '0' == i) return true;
    }
    return false;
}

int evaluatePostfix(string exp) {
    Node *head = new Node((int)exp[0] - 48);

    for (int i = 1; i < exp.size(); i++) {
        if(isDigit(exp[i])) push(head, ((int)exp[i]) - 48);
        else {
            int op1 = pop(head);
            int op2 = pop(head);
            push(head, evaluate(op1, op2, exp[i]));
        }
    }

    return head -> data;
}

int main() {
    string str = "921*-8-4+";                           //9 - 2 * 1 - 8 + 4
    cout << evaluatePostfix(str);
    return 0;
}