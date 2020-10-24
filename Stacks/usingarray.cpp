#include <bits/stdc++.h>
using namespace std;

void push(vector <int> &vec, int x, int &top) {
    top++;
    vec[top] = x;
}

int pop(vector <int> &vec, int &top) {
    int res = vec[top];
    top--;
    return res;
}
void display(vector <int> vec, int &top) {
    for(int i = 0; i < top; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    vector <int> vec;
    int top = -1;
    push(vec, 10, top);
    push(vec, 20, top);
    push(vec, 30, top);
    display(vec, top);
    cout << "Popped: " << pop(vec, top) << endl;
    push(vec, 40, top);
    display(vec, top);
}