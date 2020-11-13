#include <bits/stdc++.h>
using namespace std;

void insert(int a[], int size) {    //insert element from array into heap
    int temp = a[size], i = size;
    while(i > 0 && temp > a[i / 2]) {
        a[i] = a[i / 2];
        i /= 2;
    }
    a[i] = temp;
}

void createHeap(int a[], int size) {    //O(nlogn)
    for(int i = 1; i < size; i++)
        insert(a, size);
}

template <class T>
void print(T &a, int size, char c) {
    cout << c << ": [" << flush;
    for(int i = 0; i < n; i++) {
        cout << a[i] << flush;
        if(i < n - 1) cout << ", " << flush;
    }
    cout << "]" << endl;
}

int main() {
    int a[] = {10, 20, 30, 25, 5, 40, 35};
    cout << "Create heap by inplace insert" << endl;
    createHeap(a, sizeof(a)/sizeof(a[0]));
    print(a, sizeof(a)/sizeof(a[0]), 'a');
}