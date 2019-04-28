/*
 * LinkedList.h
 *
 *  Created on: Nov 13, 2017
 *      Author: willi
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include<iostream>
using namespace std;

template<typename T>
class LinkedList{
public:
	struct Node{

		T* data;
		Node* next;
	};

	int counter = 0;

	Node* head;
	Node* tail;
	LinkedList();
	~LinkedList();
	void Create(T& t);
	void Insert(T& t, int n);
	void Remove(int n);
	void Display();
	T& operator [](unsigned int i);
};
template<typename T>
LinkedList<T>::LinkedList(){
	head = NULL;
	tail = NULL;
}
template<typename T>
LinkedList<T>::~LinkedList(){
	Node* temp = NULL;
	while(head != NULL){
		temp = head;
		head = head->next;
		delete temp;
	}
	head = NULL;

	counter  = 0;
}
template<typename T>
void LinkedList<T>::Create(T& t){
	counter++;
	Node *temp = new Node;
	temp->data = &t;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else{
		tail->next = temp;
		tail = temp;
	}
}
template<typename T>
void LinkedList<T>::Insert(T& t, int n){
	if(n == 1){
		Create(t);

	}
	else{
	counter++;

	Node *pre = new Node;
	Node *curr = new Node;
	Node *temp = new Node;
	curr = head;
	for(int i = 1; i < n; i++){
		pre = curr;
		curr = curr->next;
	}
	temp->data = &t;
	pre->next = temp;
	temp->next = curr;
	}

}
template<typename T>
void LinkedList<T>::Remove(int n){
	Node *curr = new Node;
	Node *prev = new Node;
	curr = head;
	for(int i = 1; i < n; i++){
		prev = curr;
		curr = curr->next;
	}
	prev->next = curr->next;
	counter--;
}
template<typename T>
void LinkedList<T>::Display(){
	Node *temp = new Node;
	temp = head;
	while(temp != NULL){
		cout << *(temp->data) << endl;
		temp = temp->next;
	}
}
template<typename T>
T& LinkedList<T>::operator [](unsigned int i){
	Node* indexer = head;
	for(int count = 0; count < counter && count < i; count++){
		indexer = indexer->next;
	}
	return *(indexer->data);
}



#endif /* LINKEDLIST_H_ */
