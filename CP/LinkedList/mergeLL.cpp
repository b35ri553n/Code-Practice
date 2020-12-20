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

struct Node {
	int data;
	Node *next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

void mergeSortedList(Node *&head1, Node *head2) {
	Node *curr1 = head1, *curr2 = head2;
	while(curr1 && curr1 -> next && curr2 && curr2 -> next) {
		if(curr1 -> data <= curr2 -> data && curr1 -> next -> data >= curr2 -> data) {
            Node *temp = curr1, *temp2 = curr1 -> next;
            temp -> next = curr2;
            temp = temp -> next;
            temp -> next = temp2;
            curr1 = curr1 -> next -> next;
            curr2 = curr2 -> next;
        } 
        else {
            Node *temp = head1;
            curr2 = head1;
            head1 -> next = temp;
        }
    }
}

void traverseNprint(Node *head) {
    Node *curr = head;
    while(curr != NULL) {
    cout << curr -> data << " ";
    curr = curr -> next;
    }
    cout << endl;
}

int main() {
    list<int> list1({2, 4, 5, 7, 8, 9});
    list<int> list2({3, 6, 7, 10, 11});
    list<int> mergedList = mergeSortedLists(list1, list2);
    for(auto x: mergedList)
        cout << x << " -> ";
    cout << endl;
    Node *head = new Node(2);
    head -> next = new Node(4);
    head -> next -> next = new Node(5);
    head -> next -> next -> next = new Node(7);
    head -> next -> next -> next -> next = new Node(8);
    head -> next -> next -> next -> next -> next = new Node(9);
    Node *head2 = new Node(3);
    head2 -> next = new Node(6);
    head2 -> next -> next = new Node(7);
    head2 -> next -> next -> next = new Node(10);
    head2 -> next -> next -> next -> next = new Node(11);
    mergeSortedList(head, head2);
    traverseNprint(head);
    return 0;
}