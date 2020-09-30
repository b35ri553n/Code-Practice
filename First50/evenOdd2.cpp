#include <bits/stdc++.h>
using namespace std;

vector<int> generate_even1(int n) {
    vector <int> v;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) v.push_back(i);
    }
    return v;
}

vector<int> generate_odd1(int n) {
    vector <int> v;
    for(int i = 0; i < n; i++) {
        if(i % 2 != 0) v.push_back(i);
    }
    return v;
}

vector<int> generate_even2(int n) {
    vector <int> v;
    int i = 0, count = n;
    while(count) {
        if(i % 2 == 0) {
            v.push_back(i);
            count--;
        }
        i++;
    }
    return v;
}

vector<int> generate_odd2(int n) {
    vector <int> v;
    int i = 0;
    int count = n;
    while(count) {
        if(i % 2 != 0) {
            v.push_back(i);
            count--;
        }
        i++;
    }
    return v;
}

void display(vector <int> v) {
    for(int i = 0; i < v.size(); ++i) 
        cout << v[i] << " ";
    cout << endl;
}

int main() {
    vector <int> vec1 = generate_even1(8);
    vector <int> vec2 = generate_odd1(8);
    vector <int> vec3 = generate_even2(8);
    vector <int> vec4 = generate_odd2(8);
    display(vec1);
    display(vec2);
    display(vec3);
    display(vec4);
    return 0;
}