#include <iostream>
#include <climits>
using namespace std;

int findSecondMaximum(int arr[], int size) {
  int secondmax = INT_MIN;
  // Write your code here
  int max = INT_MIN;
  for(int i = 0; i < size; i++) {
      if(max < arr[i]) {      //arr[i] is located after SM and M both
          secondmax = max;
          max = arr[i];
      }
      else if(arr[i] > secondmax && arr[i] < max) secondmax = arr[i];     //arr[i] is located in b/w SM and M
  }
  if(secondmax == INT_MIN) return -1;     //arr[size] = {20, 20, 20}; then no SM exists
  return secondmax;
}


int main(){
  int size = 5;
  int arr[size] = {-2,-33,-10,-33,-456};
  
  cout << "Array: ";
  for(int i=0; i<size; i++)
    cout << arr[i] << " ";
  cout << endl;
  
  int secMax = findSecondMaximum(arr,size);
  cout << "Second maximum: " << secMax << endl;
  return 0;
}