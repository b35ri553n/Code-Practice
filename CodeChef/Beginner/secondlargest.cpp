#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[3], lgst = INT_MIN, slgst = INT_MIN;
        for(int i = 0; i < 3; ++i){
            cin >> arr[i];
        }
        for(int i = 0; i < 3; ++i){
            if(arr[i] > lgst){
                slgst = lgst;
                lgst = arr[i];
            }
            else if(arr[i] > slgst && arr[i] != lgst)
                slgst = arr[i];
        }
        cout << slgst << endl;
    }
}