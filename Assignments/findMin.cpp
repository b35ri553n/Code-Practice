#include <iostream>
using namespace std;

//Returns minimum value from given Array 
int findMinimum(int arr[], int size) {
	int minimum = arr[0];
    // Write your code here
    for(int i = 0; i < size; i++) {
        if(arr[i] < minimum) minimum = arr[i];
    }
	return minimum;
}

int main(){
    int size = 4;
    int arr[size] = {9,2,3,6};
  
    cout << "Array : ";
    for(int i=0; i<size; i++)
      cout << arr[i] << " ";
    cout << endl;
  
    int min = findMinimum(arr,size);
    cout << "Minimum in the Array: " << min << endl;
    return 0;
}