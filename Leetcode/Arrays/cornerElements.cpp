#include <iostream>
using namespace std;

int getMaxCornerSum(int *arr, int n, int k, int start, int end, int max_sum) { //recursive
    if(k == 0) return max_sum;
    int max_sum_start = max_sum + arr[start];
    int max_sum_end = max_sum + arr[end];
    int ans = max(getMaxCornerSum(arr, n, k - 1, start + 1, end, max_sum_start),
                getMaxCornerSum(arr, n, k - 1, start, end - 1, max_sum_end));
    return ans;
}

int getMaxCornerSum2(int *arr, int n, int k) {
    int current_sum = 0, max_sum = 0, j = n - 1;
    for(int i = 0; i < k; i++)
        current_sum += arr[i];
    max_sum = current_sum;
    for(int i = k - 1; i >= 0; i--) {
        current_sum = current_sum - arr[i] + arr[j];
        max_sum = max(current_sum, max_sum);
        j--;
    }
    return max_sum;
}

int main() {
    int arr[] = {8, 4, 4, 8, 12, 3, 2, 9};
    int maxSum = getMaxCornerSum(arr, 8, 3, 0, 7, 0);
    cout << "With Recursion: " << maxSum << endl;
    maxSum = getMaxCornerSum2(arr, 8, 3);
    cout << "With Sliding Window: " << maxSum << endl;
    return 0;
}