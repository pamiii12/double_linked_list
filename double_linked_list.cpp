#include <iostream>
#include <string>
using namespace std;

class node {
public:
	int noMhs;
	string name;
	node* next;
	node* prev;
 }; 

class DoubleLInkedList {
private:
	node* START;
public:
	DoubleLInkedList();
	void addNode();
	bool search(int rollno, node* previous, node** current);
	bool deleteNode(int rollNode);
	bool listEmpty();
	void ascending();
	void discending();
	void hapus();
	void searchData();
};

DoubleLInkedList::DoubleLInkedList() {
	START = NULL;
}

