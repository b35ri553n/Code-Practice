
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// for(int i = 0; i < n; i++) 

// bool isDiff(ll n, ll k) {
//     ll ans1 = n / k;
//     ll ans2 = -1;
    
// }

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
    
//     int t;
//     cin >> t;
//     // cin.ignore();
//     while(t--) {
//         ll n, k;
//         cin >> n >> k;
//         if(isDiff(n, k)) cout << "YES" << endl;
//         else cout << "NO" << endl;
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int minMoves(int n) {
    if(n == 1) return 0;
    if(isPrime(n)) return n - 1;
    int closestdivisor = 0;
    for(int i = n - 1; i > 1; i--) {
        if(n % i == 0) {
            closestdivisor = i;
            break;
        }
    }
    if(!isPrime(closestdivisor))return 1 + minMoves(closestdivisor);
    else return minMoves(closestdivisor - 1);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    // cin.ignore();
    while(t--) {
        int n;
        cin >> n;
        cout << minMoves(n) << endl;
    }

    return 0;
}