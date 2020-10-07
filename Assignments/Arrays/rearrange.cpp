#include <iostream>
using namespace std;

//Re-Arrange Positive and Negative Values of Given Array 
void reArrange(int arr[], int size) {
  // A swap function is prepended. Use it like swap(arg1,arg2)
  // Write your code here
    for(int i = 0; i < size; i++) {
        int flag = 0;
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] >=0 && arr[j + 1] < 0) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                flag = 1;
            }
        }
        if(!flag) break; 
    }
}


int main(){
  int size = 6;
  int arr[size] = {2,4,-6,0,-5,-10};
  
  cout << "Array before rearranging: ";
  for(int i = 0; i<size; i++)
    cout << arr[i] << " ";
  cout << endl;
  
  reArrange(arr,size);
  
  cout << "Array after rearranging: ";
  for(int i = 0; i<size; i++)
    cout << arr[i] << " ";
  cout << endl;
}