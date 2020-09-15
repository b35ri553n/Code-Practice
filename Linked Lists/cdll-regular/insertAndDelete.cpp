#include <bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	node *next;
	node *prev;
};

class CDLL
{
	public:
	node *last;
	CDLL() //contructor
	{
		last=NULL;
	}
	void insertAtBegin(int x);      //methods
	void insertAtMiddle(int pos,int x);
	void insertAtEnd(int x);
	void deleteAtBegin();
	void deleteAtMiddle(int pos);
	void deleteAtEnd();
	void display();
};
////////////////////////////////////DISPLAY
void CDLL::display()
{
	node *p;
	p = last -> next;
	while(p != last)
	{
		cout << p -> data << "\t";
		p = p -> next;
	}
	cout << p -> data << "\t" << endl;
}

////////////////////////////////////DELETE AT BEGIN
void CDLL::deleteAtBegin()
{
	node *temp;
	if(last == NULL)
	{
		cout << "list is empty:";
	}
	else if(last -> next == NULL)
	{
		temp = last;
		delete temp;
	}
	else
	{
		temp = last -> next;
		last -> next = temp -> next;
		temp -> next -> prev = last;
		delete temp; 
	}	
}

////////////////////////////////////DELETE AT MIDDLE 
void CDLL::deleteAtMiddle(int pos)
{
	node *temp;
	node *p;
	int i;
	for(i = 1, p = last -> next; i < pos - 1 && p -> next != last; i++)
		p = p -> next;
	if(i == pos - 1)
	{
		temp = p -> next;
		temp -> prev -> next = temp -> next;
		temp -> next -> prev = p;
		delete temp;
	}
	else
	{
		cout<<"wrong position";
	}
}

////////////////////////////////////DELETE AT END
void CDLL::deleteAtEnd()
{
	node *temp;
	node *p;
	if(last == NULL)
	{
		cout << "the list is empty:";
	}
	else if(last -> next == NULL)
	{
		temp = last;
		delete temp;
	}
	else
	{
		p = last -> next;
		while(p -> next != last)
			p = p -> next;
		temp = p -> next; 
		temp -> prev -> next = temp -> next;
		temp -> next -> prev = p;
		last = p;
		delete temp;
	}
}

////////////////////////////////////INSERT AT BEGIN
void CDLL::insertAtBegin(int x)
{
	node *temp = new node;
	temp -> data = x;
	temp -> prev = temp -> next = NULL;
	if(!last)
	{
		last = temp;
		last -> next = last -> prev = last;
	}
	else
	{
		temp -> next = last -> next;
		temp -> prev = last;
		temp -> next -> prev = temp;
		last -> next = temp;
	}
} 

////////////////////////////////////INSERT AT MIDDLE
void CDLL::insertAtMiddle(int pos, int x)
{
	node *temp = new node;
	temp -> data = x;
	temp -> prev = temp -> next = NULL;
	node *p;
	int i;
	for(i = 1, p = last -> next; i < pos - 1 && p -> next != last; i++)
		p = p -> next;
	if(i == pos - 1)
	{
		temp -> prev = p;
		temp -> next = p -> next;
		temp -> prev -> next = temp;
		temp -> next -> prev = temp;
	}
	else
	{
		cout << "wrong position";
	}
}  

////////////////////////////////////INSERT AT END
void CDLL::insertAtEnd(int x)
{
	node *temp = new node;
	temp -> data = x;
	temp -> prev = temp -> next = NULL;
	if(last == NULL)
	{
		last = temp;
		last -> next = last -> prev = last;
	}
	else
	{
		temp -> prev = last;
		temp -> next = last -> next;
		last -> next = temp;
		last = temp;
	}
}

int main()
{
	int x, choice;
	int pos;
	CDLL cdllOb;
	while(1)
	{
		cin >> choice;
		switch(choice)
		{
			case 1:
				cout << "give element: ";
				cin >> x;
				cdllOb.insertAtBegin(x);
				break;
			case 2:
				cout << "give position: ";
				cin >> pos;
				cout << "give element: ";
				cin >> x;
				cdllOb.insertAtMiddle(pos,x);
				break;
			case 3:
				cout << "give element: ";
				cin >> x;
				cdllOb.insertAtEnd(x);
				break;
			case 4:
				cdllOb.deleteAtBegin();
				break;
			case 5:
				cout << "give position: ";
				cin >> pos;
				cdllOb.deleteAtMiddle(pos);
				break;
			case 6:
				cdllOb.deleteAtEnd();
				break;
			case 7:
				cdllOb.display();
				break;
		}
	}

    return 0;
}