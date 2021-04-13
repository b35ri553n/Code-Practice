// Reverse string inplace without builtin methods

#include <bits/stdc++.h>
using namespace std;

void reverseString(char s[])
{	
  int n = strlen(s);
  for(int i = 0; i < n / 2; i++) {
	 char ch = s[n - i - 1];
     s[n - i - 1] = s[i];
     s[i] = ch;
  }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char s[] = {'t', 'h', 'i', 's'};
    int n = strlen(s);
    reverseString(s);
    for(int i = 0; i < n; i++)
        cout << s[i];
 
    return 0;
}
