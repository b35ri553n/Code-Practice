#include<bits/stdc++.h>
using namespace std;

int main () {
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        count = i+1;
        for (int j = 0; j < i+1; j++)
        {
            cout << count << " ";
            count = count + (n-j-1);
        }
        cout << endl;
    }
    return 0;    
}