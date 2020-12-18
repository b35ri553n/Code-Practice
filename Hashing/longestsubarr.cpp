#include <iostream>
#include <unordered_set>
using namespace std;

//Naive approach
// bool longestSumSubarr(int *arr, int n, int sum) {
//     int current_sum = 0;
//     for(int i = 0;i < n; i++) {
//         current_sum = 0;
//         for(int j = i; j < n; j++) {
//             current_sum += arr[j];
//             if(current_sum == sum) return true;
//         }
//     }
//     return false;
// }


//check if presum-sum exists or not
bool longestSumSubarr(int *arr, int n, int sum) {
    unordered_set<int> s;
    int presum = 0;
    for(int i = 0; i < n; i++) {
        presum += arr[i];
        if(presum == sum) return true;  //when sum is arr[0] to arr[i]
        if(s.find(presum - sum) != s.end())
            return true;
        s.insert(presum);
    }
    return false;
}

int main() {
    int arr[] = {3, 1, 0, 1, 8, 2, 3, 6};
    int sum = 5;
    cout << longestSumSubarr(arr, 8, sum);
}