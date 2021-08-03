// Given two baskets of fruits, put them in a basket such that 
// 1. Each basket contains only one type of fruit
// 2. The sum of no of fruits in the basket is max
// AABCCB O/P: 4 Ans: BCCB
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int n = a.length();
        int s=0, e=0, mxS=0;
        map<char, int> mp;
        for(;e<n;e++){
            if(mp.find(a[e])==mp.end() && mp.size()>=2){
                while(mp.size()>=2){
                    mp[a[s]]--;
                    if(mp[a[s]]==0)
                        mp.erase(a[s]);
                    s++;
                }
            }
            mp[a[e]]++;
            mxS = max(mxS, e-s+1);
        }
        cout<<mxS<<"\n";
    }
    return 0;
}