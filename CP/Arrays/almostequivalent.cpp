//almost equivalent strings

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void compareStr(unordered_map<char, int> c1, unordered_map<char, int> c2, vector<string> &ans) {
    for(auto i: c1) {
        if(c2.find(i.first) != c2.end() && (i.second - c2[i.first] <= 3 && i.second - c2[i.first] >= -3));
        else if(c2.find(i.first) == c2.end() && i.second <= 3);
        else {
            ans.push_back("NO");
            return;
        }
    }
    ans.push_back("YES");
}

void compareStr2(unordered_map<char, int> c1, unordered_map<char, int> c2, vector<string> &ans) {
    for(auto i: c2) {
        if(c1.find(i.first) == c1.end()) {
            if(i.second > 3) {
                ans.push_back("NO");
                return;
            }
        }
    }
}

vector<string> almostEquivalent(vector<string> v1, vector<string> v2) {
    unordered_map<char, int> count1;
    unordered_map<char, int> count2;
    vector<string> ans;
    for(int i = 0; i < v1.size(); i++) {
        for(char j: v1[i]) 
            count1[j]++;
        for(char j: v2[i]) 
            count2[j]++;
        if(v1[i].length() != v2[i].length())
            ans.push_back("NO");
        else {
            compareStr(count1, count2, ans);
            compareStr2(count1, count2, ans);
        }
    } 
    return ans;
}

int main() {
    // vector<string> v1 = {"aabaab", "aaaaabb"};
    // vector<string> v2 = {"bbabbc", "abb"};
    vector<string> v1 = {"dddaa"};
    vector<string> v2 = {"eeeeea"};
    vector<string> v3 = almostEquivalent(v1, v2);
    for(string i: v3) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}