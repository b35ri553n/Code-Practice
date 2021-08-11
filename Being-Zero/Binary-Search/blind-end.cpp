// We are having a Special Array, its start index is 0 but we don't know where it ends.  You are required to find and return the end of this array. 
// To help you so this, you can call the given function:

// BOOLEAN isLocationValidInArray(idx)  
// You can call above function to know if any given index is valid index in array or not.  You need to find out the last valid index in the array.  

// If Special array is having last valid index as 10, this is what function call with return for these calls:
// isLocationValidInArray(10) ===> true
// isLocationValidInArray(11) ===> false
// isLocationValidInArray(9000) ===> false
// isLocationValidInArray(2) ===> true

#include<bits/stdc++.h>
using namespace std;

bool isLocationValidInArray(unsigned long long idx) {
    return idx >= 0 && idx < 1e6;
}


unsigned long long getBlindEnd()
{
  	int  l = 0, h = 1000, m = 0;
  	while(l <= h) {
    	m = l + (h - l) / 2;
        cout << l << " " << h << " " << m << "\n";
      	if(!isLocationValidInArray(m)) h = m - 1;
      	else {l = m + 1; h *= 2;}
    }
  	return m;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << getBlindEnd() << "\n";

    return 0;
}