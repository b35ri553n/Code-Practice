// https://leetcode.com/problems/palindrome-linked-list/submissions/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define M 1000000007
#define N 1000000
// for(int i = 0; i < n; i++) 
ll dp[N + 1];

ll modSum(ll a, ll b) {
    return (a % M + b % M) % M;
}

ll modProd(ll a, ll b) {
    return (a % M * b % M) % M;
}

ll modDiff(ll a, ll b) {
    return (a % M - b % M + M) % M;
}

struct ListNode {
    int data;
    ListNode *next;
    ListNode() {
        data = -1;
        next = NULL;
    }
    ListNode(int n) {
        data = n;
        next = NULL;
    }
};

bool isPalin(ListNode *head) {
    if(head -> next == NULL) return true;
    int len = 0;
    ListNode *temp = head, *temp2 = head, *prev = NULL, *curr = head, *following = head;
    while(temp) {
        len++;
        temp = temp -> next;
    }
    int mid = len / 2;
    while(mid--) {
        temp2 = temp2 -> next;
    }
    while(curr != temp2) {
        following = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = following;
    }
    if(len % 2 != 0) curr = curr -> next;
    while(curr) {
        if(curr -> data != prev -> data) return false;
        curr = curr -> next;
        prev = prev -> next;
    }
    return true;
}

ListNode *makeLL(vector<int> arr) {
    ListNode *head = new ListNode(arr[0]), *temp = head;
    int n = arr.size();
    if(n == 1) return head;
    for(int i = 1; i < n; i++) {
        ListNode *temp2 = new ListNode(arr[i]);
        temp -> next = temp2;
        temp = temp -> next;
    }
    temp -> next = NULL;
    return head;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> arr;
    int n;
    while(cin >> n) {
        arr.push_back(n);
    }
    ListNode *head = makeLL(arr);
    cout << ((isPalin(head)) ? "true" : "false");

    return 0;
}