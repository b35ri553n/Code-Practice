#include <iostream>
#include <algorithm>
using namespace std;

// int main() {
//     int arr[] = {10, 20, 5, 7};
//     int n = 4;
//     sort(arr, arr + n);     //sort(vec.begin(), vec.end())
//     for(auto i: arr)
//         cout << i << " ";
//     cout << endl;
//     sort(arr, arr + n, greater<int>());
//     for(auto i: arr)
//         cout << i << " ";
//     cout << endl;
//     return 0;
// }

struct Point {
    int x, y;
};

bool myComp(Point p1, Point p2) {
    return p1.x < p2.x;     //for dec order make < as >
}

int main () {
    Point arr[] = {{3, 10}, {2, 8}, {5, 4}};
    int n = 3;
    sort(arr, arr + n, myComp);
    for(auto i: arr)
        cout << i.x << " " << i.y << endl;
    cout << endl;
    return 0;
}