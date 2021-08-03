#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <iostream>
using namespace std;

struct LLNode{
  int data;
  struct LLNode *next;
};

LLNode *reverseLL(LLNode *h) {
    if(!h) return NULL;
    LLNode *c = h; LLNode *n = h; LLNode *p = NULL;
    while(c) {
        n = c -> next;
        c -> next = p;
        p = c;
        c = n;
    }
    return p;
}

LLNode *findMid(LLNode *h) {
    LLNode *slow = h; LLNode *fast = h;
    while(fast && fast -> next && fast -> next -> next) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

bool isPalindromicList(LLNode *h)
{
    if(!h) return true;
    LLNode *m = findMid(h);
    LLNode *h2 = m -> next;
    h2 = reverseLL(h2);
    m -> next = NULL;
    LLNode *t1 = h; LLNode *t2 = h2;
    while(t1 && t2) {
        if(t1 -> data != t2 -> data) return false;
        t1 = t1 -> next;
        t2 = t2 -> next;
    }
    return true;
}