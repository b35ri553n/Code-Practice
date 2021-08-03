#include<bits/stdc++.h>
using namespace std;

int main() {
    int k, r, i = 1;
    cin >> k >> r;
    if(k % 10 == r) {
        cout << 1;
        return 0;
    }
    
}

// int main() {
//     int n, sumx = 0, sumy = 0, sumz = 0;
//     cin >> n;
//     while(n--) {
//         int x, y, z;
//         cin >> x >> y >> z;
//         sumx += x;
//         sumy += y;
//         sumz += z;
//     }
//     if(sumx == 0 && sumy == 0 && sumz == 0) cout << "YES";
//     else cout << "NO";
//     return 0;
// }

// int main() {
//     long long n;
//     cin >> n;
//     if(n % 2 == 0) cout << n / 2;
//     else cout << (-1 * (n + 1)) / 2;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<double> vperc;
//     for(int i = 0; i < n; i++) {
//         double temp;
//         cin >> temp;
//         vperc.push_back(temp);
//     }
//     double pure = 0;
//     for(int i = 0; i < n; i++) {
//         pure = pure + vperc[i] / 100;
//     }
//     cout << fixed << setprecision(12) << (pure / n) * 100; 
// }

// int main() {
//     int k, l, m, n, d, count = 0;
//     cin >> k >> l >> m >> n >> d;
//     for(int i = 1; i <= d; i++) {
//         if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
//             count++;
//     }
//     cout << count;
// }

// int main() {
//     int n, l, curr_diff, diff = INT_MIN;
//     double init_rad, end_rad;
//     cin >> n >> l;
//     vector<int> pos;
//     for(int i = 0; i < n; i++) {
//         int temp;
//         cin >> temp;
//         pos.push_back(temp);
//     }
//     sort(pos.begin(), pos.end());
//     init_rad = pos[0] - 0;
//     end_rad = l - pos[n - 1];
//     for(int i = 0; i < n - 1; i++) {
//         curr_diff = pos[i + 1] - pos[i];
//         diff = max(diff, curr_diff);
//     }
//     double ddiff = diff / 2.0;
//     if(ddiff < init_rad) ddiff = init_rad;
//     if(ddiff < end_rad) ddiff = end_rad;
//     cout << fixed << setprecision(9) << ddiff;
// }

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int n, count = 0, count2 = 0, rem, multiplier;
//         cin >> n;
//         vector<int> ans;
//         while(n > 0) {
//             rem = n % 10;
//             n /= 10;
//             count++;
//             if(!rem) {
//                 count2++;
//                 continue;
//             }
//             multiplier = (count == 1) ? 1 : ((int)(pow(10,(count - 1)) + 0.5));
//             ans.push_back(rem * multiplier);
//         }
//         cout << count - count2 << endl;
//         for(int i : ans) 
//             cout << i << " ";
//         cout << endl;
//     }
// }

// int main() {
//     int n, k, i, flag = 0;
//     cin >> n >> k;
//     int remaining_time = 240 - k;
//     for(i = 1; i <= n; i++) {
//         remaining_time = remaining_time - (i * 5);
//         if(remaining_time < 0) {
//             i--;
//             flag = 1;
//             break;
//         } else if(remaining_time == 0) {
//             flag = 1;
//             break;
//         }
//     }
//     if(flag) cout << i;
//     else cout << --i;
// }

// int main() {
//     int a, b, ans1, ans2, flag = 0;
//     cin >> a >> b;
//     if(a > b) {
//         ans1 = b;
//         flag = 1;
//     } else {
//         ans1 = a;
//     }
//     if(flag) {
//         ans2 = (a - b) / 2;
//     } else {
//         ans2 = (b - a) / 2;
//     }
//     cout << ans1 << " " << ans2;
//     return 0;
// }