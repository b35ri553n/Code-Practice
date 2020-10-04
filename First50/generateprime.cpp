#include <bits/stdc++.h>
using namespace std;

//Brute Force Approach: Loop from 2 to n - 1 and check if any divisors exist (O(n))
//Better Way: Loop from 2 to sqrt(n) and check if divisors exist (O(sqrt(n)))
//To generate n prime no.s, complexity would be O(n * sqrt(n))

//Sieve of Erastosthenes to generate prime numbers within 2 to n
vector<bool> generatePrime(int n) {
    vector<bool> primes(n, true);
    primes[0] = primes[1] = false;
    for(int i = 2; i < n; i++) {
        if(primes[i] && (long long) i * i <= n) {
            for(int j = i * i; j <= n; j += i)
                primes[j] = false;
        }
    }
    return primes;
}

//FIX THIS
vector<bool> generatePrime2(int n) {
    vector<bool> primes(n + 2, true);
    primes[0] = primes[1] = false;
    int count = n;
    for(int i = 2; n--; i++) {
        if(primes[i]) {
            for(int j = i * i; j <= primes[primes.end()]; j += i)
                primes[j] = false;
        }
    }
    return primes;
}

void displayPrimes(int n) {
    vector <bool> primes = generatePrime2(n);
    for(int i = 1; i <= n; i++) {
        if(primes[i]) cout << i << " ";
    }
}

int main() {
    int n = 100;
    displayPrimes(n);
}