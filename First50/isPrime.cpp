#include <iostream>
using namespace std;

//Brute Force Approach: Loop from 2 to n - 1 and check if any divisors exist (O(n))
//Better Way: Loop from 2 to sqrt(n) and check if divisors exist (O(sqrt(n)))
//To generate n prime no.s, complexity would be O(n * sqrt(n))

//Sieve of Erastosthenes to generate prime numbers within 2 to n
// bool generatePrime(int n) {
//     bool 
// }

bool isPrime(int n) {
    if (n <= 1) return false;
    else if (n == 2 || n == 3 || n == 5 || n == 7) return true;
    else if(n % 2 == 0 || n % 3 == 0) return false;
    else {
        int r = 5;
        while (r * r < n) {
            if (n % r == 0) return false;
            r += 2;
            if (n % r == 0) return false;
            r += 4;
        }
        return true;
    } 
}

int main() {
    int num;
    cin >> num;
    if(isPrime(num)) cout << "it's prime";
    else cout << "it isn't prime";
}