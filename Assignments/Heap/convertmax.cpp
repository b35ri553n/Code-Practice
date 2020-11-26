#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

// string convertMax(vector<int> maxHeap){
//   string result = "";
//   vector<int> minHeap;
//   // Write your code here
//   minHeap.push_back(maxHeap[maxHeap.size() - 1]);
//   for(int i = maxHeap.size() - 2; i >= 0; i--) {
//     minHeap.push_back(maxHeap[i]);
//     for(int j = minHeap.size() - 1; j != 0 && minHeap[j] < minHeap[(j - 1) / 2]; j = (j - 1) / 2) {
//         swap(minHeap[j], minHeap[(j - 1) / 2]);
//     } 
//   }
//   for(int i = 0; i < minHeap.size() - 1; i++) {
//       result += to_string(minHeap[i]) + ","; 
//   }
//   result += to_string(minHeap[minHeap.size() - 1]);
//   return result;
// }

void minHeapify(vector <int> &minHeap, int i) {      //assuming the heap is minheap from i+1 to size()-1
    int smallest = i;
    if(2*i + 1 < minHeap.size() && minHeap[2*i + 1] < minHeap[smallest]) 
        smallest = 2*i + 1;
    if(2*i + 2 < minHeap.size() && minHeap[2*i + 2] < minHeap[smallest])
        smallest = 2*i + 2;
    if(smallest != i) {
        swap(minHeap[i], minHeap[smallest]);
        minHeapify(minHeap, smallest);
    }
}

string convertMax(vector<int> maxHeap) {
    string result = "";
    for(int i = (maxHeap.size()) / 2; i >= 0; i--) {    //first parents occurs at len-1/2 in heap
        minHeapify(maxHeap, i);
    }
    for(int i = 0; i < maxHeap.size(); i++)
        result += to_string(maxHeap[i]) + ",";
    result.pop_back();
    return result;
}

int main(){
  // Accept input from the user and display the results
  int size;
  cin >> size;
  vector<int> maxHeap(size);
  for(int i = 0; i < size; i++) {
    cin >> maxHeap[i];
  }
  cout << convertMax(maxHeap) << endl;
}