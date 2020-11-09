#include <iostream>
using namespace std;

//Add numbers without using + arithmetic operator
//convert numbers into binary and add with carries using XOR and only carries only AND logical operator
//watch Back to Back SWE video on this to understand better: https://www.youtube.com/watch?v=qq64FrA2UXQ&ab_channel=BackToBackSWE

int myAdd(int a, int b) {
    if(!b) return a;
    else return myAdd(a ^ b, (a & b) << 1);
}

int main() {
    int a = 3, b = 1;
    // cin >> a >> b;
    cout << myAdd(a, b) << endl;
    return 0;
}