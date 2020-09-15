#include <bits/stdc++.h>

using namespace std;

struct Node {
    char data;
    struct Node *next;
}*top = NULL;

void push(char x) {
    struct Node *temp = new Node;
    if (temp == NULL) cout << "stack is full" << endl;
    else {
        temp -> data = x;
        temp -> next = top;
        top = temp;
    }
}

char pop() {
    struct Node *temp;
    char x = -1;
    if(top == NULL) cout << "stack is empty" << endl;
    else {
        temp = top;
        top = top -> next;
        x = temp -> data;
        free(temp);
    }
    return x;
}

void Display() {
    struct Node *p = top;
    while (p != NULL) {
        cout << p -> data;
        p = p -> next;
    }
    cout << endl;
}

int isBalanced(char *exp) {
    for(int i = 0; exp[i] != '\0'; i++) {
        if(exp[i] == '(') push(exp[i]);
        else if(exp[i] == ')') {
            if (top == NULL) return 0;
            pop();
        }
    }
    if(top == NULL) return 1;
    else return 0;
}

int pre(char x) {
    if (x == '+' || x == '-') return 1;
    else if(x == '*' || x == '/') return 2;
    return 0;
}

int isOperand(char x){
    if(x == '+' || x == '-' || x == '*' || x == '/') return 0;
    else return 1;
}

string InToPost(string infix) {
    int i= 0, j = 0;
    char *postfix;
    int len = infix.length();


    while(infix[i] != '\0') {
        if(isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else {
            if(pre(infix[i]) > pre(top -> data))
                push(infix[i++]);
            else {
                postfix[j++] = pop();
            }
        }
    }
    while(top != NULL) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    return postfix;
}

int main() {
    string infix = "2 + 3 * 4";
    push('#');
    string postfix = InToPost(infix);
    cout << "hi";
    cout << postfix;
    cout << "bye";
    return 0;
}