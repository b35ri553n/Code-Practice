#include <iostream>
using namespace std;

int findFirstUnique(int arr[], int size) {
    // Write your code here
    for(int i = 0; i < size; i++) {
        int flag = 0;
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                flag = 1;
                break;
            } 
        }
        if(flag == 0) return arr[i];
    }
    return - 1;
}


int main(){
  int size = 6;
  int arr[size] = {2,54,7,2,6,54};
  
  cout << "Array: " ;
  for(int i=0; i<size; i++)
     cout << arr[i] << " ";
  cout << endl;
  
  int unique = findFirstUnique(arr,size);
  cout << "First Unique in an Array: " << unique << endl;
  return 0;
}