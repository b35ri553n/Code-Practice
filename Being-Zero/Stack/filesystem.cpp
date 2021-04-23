// Zack is learning Operating Systems. He came across the following commands:
// cd - changes the location of working directory, and
// pwd - display the present working directory

// If the cd parameter contains "..", that means you have to step back one directory. 
// The path of directories is separated by slashes "/". 
// The default root directory is "/". 
// Your task is to print the current working directory, for each "pwd" command.

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
    // cin.ignore();
    while(t--) {
        int n;
        cin >> n;
        stack<string> st;
        string command;
        cin >> command;
        if(command == "pwd") {
            if(st.empty()) cout << "/" << endl;
            else {
                
            }
        } else {
            string input, intermediate;
            cin >> input;
            stringstream sso(input);
            while(getline(sso, intermediate, '/')) {
                st.push(intermediate);
            }
        }
    }

    return 0;
}