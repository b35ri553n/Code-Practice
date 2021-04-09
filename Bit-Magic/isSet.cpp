#include <iostream>
using namespace std;

void kThBit(int n, int k) {
    if(n & (1 << (k - 1)) != 0) cout << "Yes";
    else cout << "No";
}

void kThBit2(int n, int k) {
    if((n >> (k - 1)) & 1 == 1) cout << "Yes";
    else cout << "No";
}

int main() {
    kThBit(5, 3);
    kThBit2(13, 3);
    return 0;
}