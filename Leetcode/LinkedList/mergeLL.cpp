#include <iostream>
#include <list>
using namespace std;

list<int> mergeSortedLists(list<int> list1, list<int> list2) {
	list<int> mergedList;
	auto it1 = list1.begin(), it2 = list2.begin();
	while(it1 != list1.end() && it2 != list2.end()) {
		if(*it1 <= *it2) {
            mergedList.push_back(*it1);
            it1++;
        }
        else {
            mergedList.push_back(*it2);
            it2++;
        }
    }
    while(it1 != list1.end()) {
        mergedList.push_back(*it1);
        it1++;
    }
    while(it2 != list2.end()) {
        mergedList.push_back(*it2);
        it2++;
    }
    return mergedList;
}

int main() {
    list<int> list1({2, 4, 5, 7, 8, 9});
    list<int> list2({3, 6, 7, 10, 11});
    list<int> mergedList = mergeSortedLists(list1, list2);
    for(auto x: mergedList)
        cout << x << " -> ";
    cout << endl;
    return 0;
}