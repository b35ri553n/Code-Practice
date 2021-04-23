// Given MAP Data Structure and following operations :
// ADD_KEY_VALUE - 0
// CHECK_KEY_EXISTANCE - 1
// PRINT_VALUE_FOR_KEY - 2
// COUNT_KEYS - 3
// REMOVE_KEY - 4

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
// for(int i = 0; i < n; i++) 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> m;
        while(n--) {
            int optype;
            cin >> optype;
            if(optype == 0) {
                int key, value;
                cin >> key >> value;
                if(m.find(key) != m.end()) m[key] = value;
                else m.insert(pair<int, int>(key, value));
            }
            else if(optype == 1) {
                int key;
                cin >> key;
                if(m.find(key) != m.end()) cout << "true ";
                else cout << "false ";
                
            } else if(optype == 2) {
                int key;
                cin >> key;
                cout << m[key] << " ";
            } 
            else if(optype == 3) {
                cout << m.size() << " ";
            } 
            else if(optype == 4) {
                int key;
                cin >> key;
                m.erase(key);
            }
            
        }
        cout << endl;
    }

    return 0;
}