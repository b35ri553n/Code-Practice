#include <bits/stdc++.h>
using namespace std;

float atm(int wish, float initial) {
    if(wish % 5 != 0 || initial < wish + 0.5){
        return initial;
    }
    else if(wish % 5 == 0){
        return initial - wish - 0.5;
    }  
    return 0; 
}

int main() {
	// your code goes here
	int wish;
	float initial;
	cin >> wish >> initial;
	cout << fixed << setprecision(2) << atm(wish, initial);
	return 0;
}