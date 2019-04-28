/*
 * DataStruct.h
 *
 *  Created on: Nov 13, 2017
 *      Author: willi
 */

#ifndef DATASTRUCT_H_
#define DATASTRUCT_H_

class DataStructException{};
class DataStructOutOfBoundsException{};
template<typename T>
class DataStruct{
public:
	DataStruct();
	~DataStruct();


	void Add(T e);
	void Remove(int i);
	int Size();
	T& operator[](const int i);

private:
	int max;
	int index;
	T *dataArr;
};
template<typename T>
DataStruct<T>::DataStruct(){
	dataArr = new T[10];
	max = 10;
	index = 0;
}
template<typename T>
DataStruct<T>::~DataStruct(){
	delete [] this->dataArr;
}

template<typename T>
void DataStruct<T>::Add(T e){
	if(this->index == this->max){
		max = max * 2;
		T *temp;
		temp = new T[max];
		for(int i = 0; i < index; i++){
			temp[i] = dataArr[i];
		}
		delete [] dataArr;
		dataArr = temp;
		dataArr[index++] = T(e);
	}
	else{
		dataArr[index++] = T(e);
	}
}
template<typename T>
void DataStruct<T>::Remove(int i){
	if(i < 0 || i >= this->Size()){
		throw DataStructOutOfBoundsException();
	}

}
template<typename T>
int DataStruct<T>::Size(){
	return index;
}
template<typename T>
T& DataStruct<T>::operator[](const int i){
	if(i < 0 || i >= index){
		throw DataStructException();
	}
	else{
		return dataArr[i];
	}
}




#endif /* DATASTRUCT_H_ */
