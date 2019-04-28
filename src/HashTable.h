/*
 * HashTable.h
 *
 *  Created on: Nov 19, 2017
 *      Author: willi
 */

#ifndef HASHTABLE_H_
#define HASHTABLE_H_

#include<iostream>
#include<string>
#include "LinkedList.h"
#include "Eclipse.h"

using namespace std;

template<typename T>
class HashTable{
public:
	struct Bucket{
		LinkedList<T> bucketList;

	};

	HashTable(LinkedList<T> l);
	~HashTable();

	string Find(int key);
	int HashFunction(int key);
	void Add(T& t, int key);


	LinkedList<T> list;
	Bucket Table[100];
	int tableSize = 0;
};
template<typename T>
HashTable<T>::HashTable(LinkedList<T> l){
	int index = 0;
	for(int i = 0; i < l.counter; i++){
		index = i + 1;
		list.Insert(l[i], index);

	}
	cout << "Internal list is good. " << endl;
	cout << "LIST COUNTER IS = " << list.counter;

	cout << "Table array has been created with size of " << tableSize << endl;
	for(int i  = 0; i < list.counter; i++){
		int x = HashFunction(list[i].GetCat());
		cout << "Here is x = " << x << endl;
		Add(list[i], x);
		cout << "This has been added! " << Table[x].bucketList[0].GetOutString() << endl;

	}
	cout << "END OF CONTRUCTOR***********" << endl;

}
template<typename T>
HashTable<T>::~HashTable(){

}
template<typename T>
int HashTable<T>::HashFunction(int key){
	return (key % 10);
}
template<typename T>
void HashTable<T>::Add(T& t, int key){
	cout << "START OF ADD: " << endl;
	if(Table[key].bucketList.counter > 0){
		int indy = Table[key].bucketList.counter;
		cout << "bucketList.counter is here at " << indy;
		Table[key].bucketList.Insert(t, indy);
		cout << "ITS IN WEEEE!!!" << endl;
	}
	else{
	cout << "bucketList.counter is currently: " << Table[key].bucketList.counter << endl;
	int buckIndex = Table[key].bucketList.counter + 1;
	cout << "buckIndex = " << buckIndex;
	Table[key].bucketList.Insert(t, buckIndex);
	}
	cout << "INSERTED!!" <<endl;
}
template<typename T>
string HashTable<T>::Find(int key){
	int x = HashFunction(key);
	cout << "bucketList.counter == " << Table[x].bucketList.counter << endl;
	if(Table[x].bucketList.counter == 0){
		string err = "Sorry but that item could not be found. \n";
		return err;
	}
	else{
		for(int i = 0; i < Table[x].bucketList.counter; i++){
			if(key == Table[x].bucketList[i].GetCat()){
				return Table[x].bucketList[i].GetOutString();
			}

		}
		return "Sorry but that item could not be found \n";
	}
}






#endif /* HASHTABLE_H_ */
