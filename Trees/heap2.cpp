#include <bits/stdc++.h>
using namespace std;

class MinHeap {
    public:
        int *arr;
        int capacity;
        int size;
    private:
        MinHeap(int c) {
            arr = new int[c];
            size = 0;
            capacity = c;
        } 
        int left(int i) {return (2 * i + 1);}
        int right(int i) {return (2 * i + 2);}
        int parent(int i) {return (i - 1) / 2;}
        void insert(int x) {            //O(logn)
            if(size == capacity) return;
            size++;
            arr[size - 1] = x;
            for(int i = size - 1; i != 0 && arr[parent(i)] > arr[i]; i = parent(i)) {
                swap(arr[i], arr[parent(i)]);
            }
        }
        void minHeapify(int i) {
            int lt = left(i), rt = right(i), smallest = i; //assume root is smallest 
            //check if left child exists and if its smaller than root
            if(lt < size && arr[lt] < arr[i]) 
                smallest = lt;
            //check if right child exists and if its smaller than root
            if(rt < size && arr[rt] < arr[i]) 
                smallest = rt;
            if(smallest != i) {    //root wasnt smallest 
                swap(arr[i], arr[smallest]);
                minHeapify(smallest);
            }
        }
        int extractMin() {
            if(size == 0) return INT_MAX;
            if(size == 1) {     //if we call minheapify directly, size-- makes 0 elements in array
                size--;         // but minheapify assumnes there are elements present. so it throws error
                return arr[0];  // hence we should handle this case seperately
            }
            swap(arr[0], arr[size - 1]);    //min elements goes to last index of array
            size--;                         //but isnt part of heap
            minHeapify(0);
            return arr[size];
        }
};

int main() {

}