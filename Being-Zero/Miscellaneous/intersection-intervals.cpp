// Given two intervals, each interval has starTime and endTime.  Return the intersection interval of both, interval common in both.  
// if they don't overlap we must have -1 -1 as common interval.  If start and end of intersection is same, still answer should be -1 -1.

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

void printCommonInterval(int s1, int e1, int s2, int e2) {
    if(s2 >= e1 || e2 <= s1) {
        cout << -1 << " " << -1 << endl;
        return;
    }
    int s3 = ((s1 >= s2) ? s1 : s2), e3 = ((e1 <= e2) ? e1 : e2);
    if(s3 == e3) {
        cout << -1 << " " << -1 << endl;
        return;
    }
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
        printCommonInterval(s1, e1, s2, e2);
    }

    return 0;
}