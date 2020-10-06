#include <iostream>
using namespace std;

void rotateArray(int arr[], int size) {
  // Write your code here  
    int temp = arr[size - 1];
    for(int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
      
    cout << "Array after rotation: ";
    for(int i=0; i<size; i++){
      cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
  int size = 6;
  int arr[size] = {3,6,1,8,4,2};
  cout << "Array before rotation: ";
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  
  rotateArray(arr,size);
}