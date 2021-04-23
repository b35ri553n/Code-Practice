// Given two intervals, each interval has starTime and endTime.  Return the merged interval of both.  
// They are given in such a way that there is guaranteed overlap.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

void printMergedInterval(int s1, int e1, int s2, int e2) {
    int s3 = ((s1 <= s2) ? s1 : s2), e3 = ((e1 >= e2) ? e1 : e2);
    cout << s3 << " " << e3 << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        int s1, e1, s2, e2;
        cin >> s1 >> e1 >> s2 >> e2;
        printMergedInterval(s1, e1, s2, e2);
    }

    return 0;
}