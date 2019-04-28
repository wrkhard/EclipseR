//============================================================================
// Name        : 0.cpp
// Author      : William Keely
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include<iomanip>
#include<fstream>

//classes
#include "LinkedList.h"
#include "Eclipse.h"
#include "HashTable.h"
#include "DataStruct.h"

using namespace std;

//Exception class for dealing with duplicate Eclipses.
class DuplicateEclipseException{};

void QuickSortInt(DataStruct<Eclipse> & e, int left, int right, int key){
	if(key == 1){
		int i = left;
		int j = right;
		int pivot = e[(left + right) / 2].GetCat();


		while(i <= j){
			while(e[i].GetCat() < pivot){
				i++;
			}
			while(e[j].GetCat() > pivot){
				j--;
			}
			if(i <=j){
				string copyString = e[i].GetOutString();
				Eclipse tmp(copyString);
				e[i] = e[j];
				e[j] = tmp;
				i++;
				j--;
			}
		};
		if(left < j){
			QuickSortInt(e,left,j,key);
		}
		if(i < right){
			QuickSortInt(e, i , right,key);
		}
	}
	if(key == 2){
		int i = left;
		int j = right;
		int pivot = e[(left + right) / 2].GetPlate();


		while(i <= j){
			while(e[i].GetPlate() < pivot){
				i++;
			}
			while(e[j].GetPlate() > pivot){
				j--;
			}
			if(i <=j){
				string copyString = e[i].GetOutString();
				Eclipse tmp(copyString);
				e[i] = e[j];
				e[j] = tmp;
				i++;
				j--;
			}
		};
		if(left < j){
			QuickSortInt(e,left,j, key);
		}
		if(i < right){
			QuickSortInt(e, i , right, key);
		}

	}
	if(key == 3){
		int i = left;
		int j = right;
		int pivot = e[(left + right) / 2].GetYear();


		while(i <= j){
			while(e[i].GetYear() < pivot){
				i++;
			}
			while(e[j].GetYear() > pivot){
				j--;
			}
			if(i <=j){
				string copyString = e[i].GetOutString();
				Eclipse tmp(copyString);
				e[i] = e[j];
				e[j] = tmp;
				i++;
				j--;
			}
		};
		if(left < j){
			QuickSortInt(e,left,j, key);
		}
		if(i < right){
			QuickSortInt(e, i , right, key);
		}

	}
	if(key == 4){
		int i = left;
		int j = right;
		int pivot = e[(left + right) / 2].GetMonthNumber();


		while(i <= j){
			while(e[i].GetMonthNumber() < pivot){
				i++;
			}
			while(e[j].GetMonthNumber() > pivot){
				j--;
			}
			if(i <=j){
				string copyString = e[i].GetOutString();
				Eclipse tmp(copyString);
				e[i] = e[j];
				e[j] = tmp;
				i++;
				j--;
			}
		};
		if(left < j){
			QuickSortInt(e,left,j, key);
		}
		if(i < right){
			QuickSortInt(e, i , right, key);
		}

	}
	if(key == 5){
		int i = left;
		int j = right;
		int pivot = e[(left + right) / 2].GetDay();


		while(i <= j){
			while(e[i].GetDay() < pivot){
				i++;
			}
			while(e[j].GetDay() > pivot){
				j--;
			}
			if(i <=j){
				string copyString = e[i].GetOutString();
				Eclipse tmp(copyString);
				e[i] = e[j];
				e[j] = tmp;
				i++;
				j--;
			}
		};
		if(left < j){
			QuickSortInt(e,left,j, key);
		}
		if(i < right){
			QuickSortInt(e, i , right, key);
		}

	}
	if(key == 7){
		int i = left;
		int j = right;
		int pivot = e[(left + right) / 2].GetDT();


		while(i <= j){
			while(e[i].GetDT() < pivot){
				i++;
			}
			while(e[j].GetDT() > pivot){
				j--;
			}
			if(i <=j){
				string copyString = e[i].GetOutString();
				Eclipse tmp(copyString);
				e[i] = e[j];
				e[j] = tmp;
				i++;
				j--;
			}
		};
		if(left < j){
			QuickSortInt(e,left,j, key);
		}
		if(i < right){
			QuickSortInt(e, i , right, key);
		}

	}
	if(key == 7){
		int i = left;
		int j = right;
		int pivot = e[(left + right) / 2].GetLunaNum();


		while(i <= j){
			while(e[i].GetLunaNum() < pivot){
				i++;
			}
			while(e[j].GetLunaNum() > pivot){
				j--;
			}
			if(i <=j){
				string copyString = e[i].GetOutString();
				Eclipse tmp(copyString);
				e[i] = e[j];
				e[j] = tmp;
				i++;
				j--;
			}
		};
		if(left < j){
			QuickSortInt(e,left,j, key);
		}
		if(i < right){
			QuickSortInt(e, i , right, key);
		}

	}
	if(key == 8){
		int i = left;
		int j = right;
		int pivot = e[(left + right) / 2].GetSarosNum();


		while(i <= j){
			while(e[i].GetSarosNum() < pivot){
				i++;
			}
			while(e[j].GetSarosNum() > pivot){
				j--;
			}
			if(i <=j){
				string copyString = e[i].GetOutString();
				Eclipse tmp(copyString);
				e[i] = e[j];
				e[j] = tmp;
				i++;
				j--;
			}
		};
		if(left < j){
			QuickSortInt(e,left,j, key);
		}
		if(i < right){
			QuickSortInt(e, i , right, key);
		}

	}
	if(key == 15){
		int i = left;
		int j = right;
		int pivot = e[(left + right) / 2].GetAlt();


		while(i <= j){
			while(e[i].GetAlt() < pivot){
				i++;
			}
			while(e[j].GetAlt() > pivot){
				j--;
			}
			if(i <=j){
				string copyString = e[i].GetOutString();
				Eclipse tmp(copyString);
				e[i] = e[j];
				e[j] = tmp;
				i++;
				j--;
			}
		};
		if(left < j){
			QuickSortInt(e,left,j, key);
		}
		if(i < right){
			QuickSortInt(e, i , right, key);
		}

	}
	if(key == 16){
		int i = left;
		int j = right;
		int pivot = e[(left + right) / 2].GetAzm();


		while(i <= j){
			while(e[i].GetAzm() < pivot){
				i++;
			}
			while(e[j].GetAzm() > pivot){
				j--;
			}
			if(i <=j){
				string copyString = e[i].GetOutString();
				Eclipse tmp(copyString);
				e[i] = e[j];
				e[j] = tmp;
				i++;
				j--;
			}
		};
		if(left < j){
			QuickSortInt(e,left,j, key);
		}
		if(i < right){
			QuickSortInt(e, i , right, key);
		}

	}
	if(key == 17){
		int i = left;
		int j = right;
		int pivot = e[(left + right) / 2].GetWidth();


		while(i <= j){
			while(e[i].GetWidth() < pivot){
				i++;
			}
			while(e[j].GetWidth() > pivot){
				j--;
			}
			if(i <=j){
				string copyString = e[i].GetOutString();
				Eclipse tmp(copyString);
				e[i] = e[j];
				e[j] = tmp;
				i++;
				j--;
			}
		};
		if(left < j){
			QuickSortInt(e,left,j, key);
		}
		if(i < right){
			QuickSortInt(e, i , right, key);
		}

	}
}
void QuickSortString(DataStruct<Eclipse> & e, int left, int right, int key){
	if(key == 6){
		int i = left;
		int j = right;
		string pivot = e[(left + right) / 2].GetTD();


		while(i <= j){
			while(e[i].GetTD() < pivot){
				i++;
			}
			while(e[j].GetTD() > pivot){
				j--;
			}
			if(i <=j){
				string copyString = e[i].GetOutString();
				Eclipse tmp(copyString);
				e[i] = e[j];
				e[j] = tmp;
				i++;
				j--;
			}
		};
			if(left < j){
				QuickSortString(e,left,j, key);
			}
			if(i < right){
				QuickSortString(e, i , right, key);
			}
	}
	if(key == 10){
			int i = left;
			int j = right;
			string pivot = e[(left + right) / 2].GetType();


			while(i <= j){
				while(e[i].GetType() < pivot){
					i++;
				}
				while(e[j].GetType() > pivot){
					j--;
				}
				if(i <=j){
					string copyString = e[i].GetOutString();
					Eclipse tmp(copyString);
					e[i] = e[j];
					e[j] = tmp;
					i++;
					j--;
				}
			};
				if(left < j){
					QuickSortString(e,left,j, key);
				}
				if(i < right){
					QuickSortString(e, i , right, key);
				}
	}
	if(key == 13){
			int i = left;
			int j = right;
			string pivot = e[(left + right) / 2].GetLat();


			while(i <= j){
				while(e[i].GetLat() < pivot){
					i++;
				}
				while(e[j].GetLat() > pivot){
					j--;
				}
				if(i <=j){
					string copyString = e[i].GetOutString();
					Eclipse tmp(copyString);
					e[i] = e[j];
					e[j] = tmp;
					i++;
					j--;
				}
			};
				if(left < j){
					QuickSortString(e,left,j, key);
				}
				if(i < right){
					QuickSortString(e, i , right, key);
				}
	}
	if(key == 14){
			int i = left;
			int j = right;
			string pivot = e[(left + right) / 2].GetLong();


			while(i <= j){
				while(e[i].GetLong() < pivot){
					i++;
				}
				while(e[j].GetLong() > pivot){
					j--;
				}
				if(i <=j){
					string copyString = e[i].GetOutString();
					Eclipse tmp(copyString);
					e[i] = e[j];
					e[j] = tmp;
					i++;
					j--;
				}
			};
				if(left < j){
					QuickSortString(e,left,j, key);
				}
				if(i < right){
					QuickSortString(e, i , right, key);
				}
	}




}
void QuickSortFloat(DataStruct<Eclipse> & e, int left, int right, int key){
	int i = left;
	int j = right;
	float pivot = e[(left + right) / 2].GetMag();


	while(i <= j){
		while(e[i].GetMag() < pivot){
			i++;
		}
		while(e[j].GetMag() > pivot){
			j--;
		}
	if(i <=j){
			string copyString = e[i].GetOutString();
			Eclipse tmp(copyString);
			e[i] = e[j];
			e[j] = tmp;
			i++;
			j--;
		}
	};
	if(left < j){
		QuickSortFloat(e,left,j, key);
	}
	if(i < right){
		QuickSortFloat(e, i , right, key);
	}
}
string BinarySearch(DataStruct<Eclipse> & e, int l, int r, int col, string s){
	if(col == 1){
		int x = stoi(s);
		while(l <=r){
			int m = 1 + (r - 1)/2;
			if(e[m].GetCat() == x){
				return e[m].GetOutString();
			}
			if(e[m].GetCat() < x){
				l = m + 1;
			}
			else{
				r = m - 1;
			}
			return "-1";
		}
	}
	if(col == 2){
		int x = stoi(s);
		while(l <=r){
			int m = 1 + (r - 1)/2;
			if(e[m].GetPlate() == x){
				return e[m].GetOutString();
			}
			if(e[m].GetPlate() < x){
				l = m + 1;
			}
			else{
				r = m - 1;
			}
			return "-1";
		}
	}
	if(col == 3){
		int x = stoi(s);
		while(l <=r){
					int m = 1 + (r - 1)/2;
					if(e[m].GetYear() == x){
						return e[m].GetOutString();
					}
					if(e[m].GetYear() < x){
						l = m + 1;
					}
					else{
						r = m - 1;
					}
					return "-1";
				}
	}
	if(col == 5){
		int x = stoi(s);
		while(l <=r){
					int m = 1 + (r - 1)/2;
					if(e[m].GetDay() == x){
						return e[m].GetOutString();
					}
					if(e[m].GetDay() < x){
						l = m + 1;
					}
					else{
						r = m - 1;
					}
					return "-1";
				}
	}
	if(col == 7){
		int x = stoi(s);
		while(l <=r){
					int m = 1 + (r - 1)/2;
					if(e[m].GetDT() == x){
						return e[m].GetOutString();
					}
					if(e[m].GetDT() < x){
						l = m + 1;
					}
					else{
						r = m - 1;
					}
					return "-1";
				}
	}
	if(col == 8){
		int x = stoi(s);
		while(l <=r){
					int m = 1 + (r - 1)/2;
					if(e[m].GetLunaNum() == x){
						return e[m].GetOutString();
					}
					if(e[m].GetLunaNum() < x){
						l = m + 1;
					}
					else{
						r = m - 1;
					}
					return "-1";
				}
	}
	if(col == 9){
		int x = stoi(s);
		while(l <=r){
					int m = 1 + (r - 1)/2;
					if(e[m].GetSarosNum() == x){
						return e[m].GetOutString();
					}
					if(e[m].GetSarosNum() < x){
						l = m + 1;
					}
					else{
						r = m - 1;
					}
					return "-1";
				}
	}
	if(col == 15){
		int x = stoi(s);
		while(l <=r){
					int m = 1 + (r - 1)/2;
					if(e[m].GetAlt() == x){
						return e[m].GetOutString();
					}
					if(e[m].GetAlt() < x){
						l = m + 1;
					}
					else{
						r = m - 1;
					}
					return "-1";
				}
	}
	if(col == 16){
		int x = stoi(s);
		while(l <=r){
					int m = 1 + (r - 1)/2;
					if(e[m].GetAzm() == x){
						return e[m].GetOutString();
					}
					if(e[m].GetAzm() < x){
						l = m + 1;
					}
					else{
						r = m - 1;
					}
					return "-1";
				}
	}
	if(col == 17){
		int x = stoi(s);
		while(l <=r){
					int m = 1 + (r - 1)/2;
					if(e[m].GetWidth() == x){
						return e[m].GetOutString();
					}
					if(e[m].GetWidth() < x){
						l = m + 1;
					}
					else{
						r = m - 1;
					}
					return "-1";
				}
	}
	return "-1";
}


string LinearSearch(DataStruct<Eclipse> & e, int col, string s){
	if(col == 1){
		int x = stoi(s);
		for(int i = 0; i < e.Size(); i++){
			if(e[i].GetCat() == x){
				return e[i].GetOutString();
			}
		}

	}
	if(col == 2){
			int x = stoi(s);
			for(int i = 0; i < e.Size(); i++){
				if(e[i].GetPlate() == x){
					return e[i].GetOutString();
				}
			}

		}
	if(col == 3){
				int x = stoi(s);
				for(int i = 0; i < e.Size(); i++){
					if(e[i].GetYear() == x){
						return e[i].GetOutString();
					}
				}

			}
	if(col == 4){

				for(int i = 0; i < e.Size(); i++){
					if(e[i].GetMonth() == s){
						return e[i].GetOutString();
					}
				}

			}
	if(col == 5){
				int x = stoi(s);
				for(int i = 0; i < e.Size(); i++){
					if(e[i].GetDay() == x){
						return e[i].GetOutString();
					}
				}

			}
	if(col == 6){

				for(int i = 0; i < e.Size(); i++){
					if(e[i].GetTD() == s){
						return e[i].GetOutString();
					}
				}

			}
	if(col == 7){
				int x = stoi(s);
				for(int i = 0; i < e.Size(); i++){
					if(e[i].GetDT() == x){
						return e[i].GetOutString();
					}
				}

			}
	if(col == 8){
				int x = stoi(s);
				for(int i = 0; i < e.Size(); i++){
					if(e[i].GetLunaNum() == x){
						return e[i].GetOutString();
					}
				}

			}
	if(col == 9){
				int x = stoi(s);
				for(int i = 0; i < e.Size(); i++){
					if(e[i].GetSarosNum() == x){
						return e[i].GetOutString();
					}
				}

			}
	if(col == 10){

				for(int i = 0; i < e.Size(); i++){
					if(e[i].GetType() == s){
						return e[i].GetOutString();
					}
				}

			}
	if(col == 11){
				float x = stof(s);
				for(int i = 0; i < e.Size(); i++){
					if(e[i].GetGamma() == x){
						return e[i].GetOutString();
					}
				}

			}
	if(col == 12){
				float x = stof(s);
				for(int i = 0; i < e.Size(); i++){
					if(e[i].GetMag() == x){
						return e[i].GetOutString();
					}
				}

			}

	if(col ==14){

		for(int i = 0; i < e.Size(); i++){
			if(e[i].GetLat() == s){
				return e[i].GetOutString();
			}
		}
	}
	if(col == 15){

				for(int i = 0; i < e.Size(); i++){
					if(e[i].GetLong() == s){
						return e[i].GetOutString();
					}
				}

			}
	if(col == 16){
				int x = stoi(s);
				for(int i = 0; i < e.Size(); i++){
					if(e[i].GetAlt() == x){
						return e[i].GetOutString();
					}
				}

			}
	if(col == 17){
				int x = stoi(s);
				for(int i = 0; i < e.Size(); i++){
					if(e[i].GetAzm() == x){
						return e[i].GetOutString();
					}
				}

			}
	if(col == 18){
				int x = stoi(s);
				for(int i = 0; i < e.Size(); i++){
					if(e[i].GetWidth() == x){
						return e[i].GetOutString();
					}
				}

			}
	return "-1";

}













/*******BEGINING OF MAIN*******8
 * *
 */


int main() {
	string fileName;
	string purgeName;
	string mergeName;
	string outName;
	string inString;
	string headerText;
	string trash;
	string userOption;

	int headerCount = 0;
	int trashCount = 0;
	int indexer = 1;

	bool menuDone = false;

	ifstream inFile;
	ofstream outFile;

	LinkedList<Eclipse> eclipseList;
	LinkedList<Eclipse> initialList;
	DataStruct<Eclipse> dArr;
	DataStruct<Eclipse> initializer;

	//find
	string result;
	string findString;
	int key = 0;
	int col = 0;

	cout << "Hello user, please enter a file name!" << endl;
	getline(cin, fileName);

	inFile.open(fileName);
	if(inFile.fail()){
		cerr << "File not found." << endl;
	}
	while(!inFile.eof()){
		while(headerCount < 10){
			getline(inFile, inString);
			headerText = headerText + inString + "/n";
			inString = "";
			headerCount++;
		}
		getline(inFile,inString);
		try{
			cout << "indexer is = " << indexer;
			Eclipse e(inString);

			for(int i = 0; i < eclipseList.counter; i++){
				if(e.GetCat() == eclipseList[i].GetCat()){
					throw DuplicateEclipseException();
				}
			}
			initialList.Insert(e, indexer);
			initializer.Add(e);
			indexer++;
		}
		catch(...){}
	}
	inFile.close();
	int theIndex = 1;
	for(int i = 0; i < initializer.Size() - 1; i++){
		eclipseList.Insert(initializer[i], theIndex);
		theIndex++;
	}
	//HashTable<Eclipse> firstHash(eclipseList);
	for(int j = 0; j < eclipseList.counter; j++){
		dArr.Add(eclipseList[j]);
	}
	cout << eclipseList[2].GetOutString() << endl;




	while(menuDone == false){
		//User commands.
		cout << "Please selcet one of the following. " << endl;
		cout << "'M' - Merge, 'P' - Purge, 'S' - Sort, 'C' - Cout, 'F' - Find, 'O' - Output, 'H' - Hash, 'L' - Embedded Link 'Q' - Quit  " << endl;
		getline(cin, userOption);
		if(userOption == "Q" || userOption == "q"){
			cout << "GOODBYE! " <<endl;
			menuDone = true;
		}
		else if(userOption == "M" || userOption == "m"){
			cout << "Please enter the merge filename. " << endl;
			getline(cin, mergeName);
			inFile.open(mergeName);
			if(inFile.fail()){
				cerr << "File not found." << endl;
			}
			int placeHolder = eclipseList.counter + 1;
			LinkedList<Eclipse> xList;
			DataStruct<Eclipse> temp;
			int g = 1;
			for(int i = 0; i < eclipseList.counter; i++){
				xList.Insert(eclipseList[i], g);
				g++;
			}
			g = 1;
			while(!inFile.eof()){
				while(trashCount < 10){
					getline(inFile, inString);
					trash = trash + inString;
					trashCount++;
				}
				getline(inFile, inString);

				try{
					Eclipse e(inString);
					for(int i = 0; i < eclipseList.counter; i++){
						if(e.GetCat() == eclipseList[i].GetCat()){
							throw DuplicateEclipseException();
						}

					}
					eclipseList.Insert(e, placeHolder);
					placeHolder = eclipseList.counter + 1;







				}
				catch(...){}
			}
			inFile.close();






		}
		else if(userOption == "P" || userOption == "p"){
			int indexPurge = 0;
			cout << "Please enter a file name. " << endl;
			getline(cin, purgeName);
			inFile.open(purgeName);
			if(inFile.fail()){
				cout << "Sorry but that file does not exist. " << endl;
			}
			while(!inFile.eof()){
				while(trashCount < 10){
					getline(inFile, inString);
					trash = trash + inString;
					trashCount++;
				}
				getline(inFile, inString);
				try{
					Eclipse e(inString);
					indexPurge = e.GetCat();
					if(e.GetCat() < eclipseList.counter){
						eclipseList.Remove(indexPurge);
					}

				}
				catch(...){}

			}
			inFile.close();
		}

		else if(userOption == "S" || userOption == "s"){
			int key = 0;
						cout << "Please enter the column you wish to sort by." <<endl;
						cin >> key;
						if(key > 0 && key < 19){
							if(key == 1){
								QuickSortInt(dArr,0,dArr.Size() - 1, 1);
							}
							if(key == 2){
								QuickSortInt(dArr,0,dArr.Size() - 1, 2);
							}
							if(key == 3){
								QuickSortInt(dArr,0,dArr.Size() - 1, 3);
							}
							if(key == 4){
								QuickSortInt(dArr,0,dArr.Size() -1 ,4);
							}
							if(key == 5){
								QuickSortInt(dArr,0,dArr.Size() - 1, 5);
							}
							if(key == 6){
								QuickSortString(dArr,0,dArr.Size() - 1, 6);
							}
							if(key == 7){
								QuickSortInt(dArr,0,dArr.Size() - 1, 7);
							}
							if(key == 8){
								QuickSortInt(dArr,0,dArr.Size() - 1, 8);
							}
							if(key == 9){
								QuickSortInt(dArr,0,dArr.Size()- 1, 9);
							}
							if(key == 10){
								QuickSortString(dArr,0,dArr.Size() - 1, 10);
							}
							if(key == 11){
								QuickSortFloat(dArr,0,dArr.Size() - 1, 11);
							}
							if(key == 12){
								QuickSortFloat(dArr,0,dArr.Size() - 1, 12);
							}
							if(key == 13){
								QuickSortString(dArr,0,dArr.Size() - 1, 13);
							}
							if(key == 14){
								QuickSortString(dArr,0,dArr.Size() - 1, 14);
							}
							if(key == 15){
								QuickSortInt(dArr,0,dArr.Size() - 1, 15);
							}
							if(key == 16){
								QuickSortInt(dArr,0,dArr.Size() - 1, 16);
							}
							if(key == 17){
								QuickSortInt(dArr,0,dArr.Size() - 1, 17);
							}
							if(key == 18){
								QuickSortString(dArr,0,dArr.Size() - 1, 18);
							}
						}
						else{
							cout << "Invalid key.." << endl;
						}
		}
		else if(userOption == "C" || userOption == "c"){
			cout << headerText << endl;
			for(int i = 0; i < eclipseList.counter; i++){
				cout << eclipseList[i].GetOutString() << endl;
			}
		}

		else if(userOption == "F" || userOption == "f"){
			int y = 1;
			LinkedList<Eclipse> fList;
			for(int i = 0; i < eclipseList.counter; i++){
				fList.Insert(eclipseList[i], y);
				y++;
			}
			HashTable<Eclipse> find(fList);
			cout << "Please enter a column. " <<endl;
						cin >> col;
						cout << "Find:   " << endl;
						cin >> findString;
						if(col == 1){
							int catNum = stoi(findString);
							cout << find.Find(catNum) << endl;
						}
						else if(col == key && col != 1){
							try{
								result = BinarySearch(dArr,0,dArr.Size() - 1, col, findString);
							}
							catch(...){
								result = -1;
							}
							if(result == "-1"){
								cout << "Element could not be found.";
							}
							else{
								cout << result << endl;
							}
						}
						else{
							try{
								result = LinearSearch(dArr,col, findString);
							}
							catch(...){
								result = -1;
							}
							if(result == "-1"){
								cout << "Element could not be found.";
							}
							else{
								cout << result << endl;
							}
						}

		}

		else if(userOption == "O" || userOption == "o"){
			string outFileName;
			DataStruct<Eclipse> out;
			for(int i = 0; i < eclipseList.counter; i++){
				out.Add(eclipseList[i]);
			}
			cout << "Please enter a file name. " << endl;
			cin >> outFileName;
			outFile.open(outFileName);
			outFile << headerText << endl;
			for(int i = 0; i < out.Size(); i++){
				outFile << out[i].GetOutString() <<endl;
			}
			outFile.close();
		}

		else if(userOption == "H" || userOption == "h"){
			LinkedList<Eclipse> eList;
			int p = 1;
			for(int i = 0; i < eclipseList.counter; i++){
				eList.Insert(eclipseList[i], p);
				p++;
			}
			HashTable<Eclipse> h(eList);
			for(int i = 0; i < 100; i++){
				if(h.Table[i].bucketList.counter  == 0){
					cout << "NULL. " << i << endl;
				}
				else{
					for(int j = 0; j < h.Table[i].bucketList.counter; j++){
						if(j == 0){
							cout << h.Table[i].bucketList[j].GetOutString() << endl;
						}
						else{
							cout << "OVERFLOW: " << h.Table[i].bucketList[j].GetOutString() << endl;
						}
					}
				}

			}
		}
		else if(userOption == "L" || userOption == "l"){
			LinkedList<Eclipse> xlist;
			int q = 1;
			for(int i = 0; i < eclipseList.counter; i++){
				xlist.Insert(eclipseList[i], q);
				q++;
			}
			HashTable<Eclipse> linkHash(xlist);
			for(int i = 0; i < linkHash.list.counter; i++){
				cout << linkHash.list[i].GetOutString() << endl;

			}
		}
		else{
			cout << "Please enter a valid option." << endl;
		}

	}













/*

	string eclipse = " 4693  235  -0031 Aug 31  17:28:31  10844 -25112   73   A    0.0458  0.9745  12.3N  36.3W  87  196   91  02m56s";
	string eclipse2 = " 4692  235  -0031 Aug 31  17:28:31  10844 -25112   73   A    0.0458  0.9745  12.3N  36.3W  87  196   91  02m56s";
	string eclipse3 = " 4687  235  -0031 Aug 31  17:28:31  10844 -25112   73   A    0.0458  0.9745  12.3N  36.3W  87  196   91  02m56s";
	string eclipse4 = " 4587  235  -0031 Aug 31  17:28:31  10844 -25112   73   A    0.0458  0.9745  12.3N  36.3W  87  196   91  02m56s";
	LinkedList<Eclipse> eList;
	LinkedList<Eclipse> lemons;
	DataStruct<Eclipse> array;
try{
	Eclipse e(eclipse);
	Eclipse ee(eclipse2);
	Eclipse eee(eclipse3);
	Eclipse sameBucket(eclipse4);


	//eList.Create(e);
	eList.Insert(eee, 1);
	eList.Insert(ee, 2);
	eList.Insert(eee, 3);
	eList.Insert(sameBucket, 4);

	for(int i = 0; i < eList.counter; i++){
		array.Add(eList[i]);
	}



}catch(...){}
cout << array[2].GetOutString() << endl;
int index = 1;
for(int i = 0; i < 3; i++){
	cout << "index is " << index << endl;

	lemons.Insert(array[i], index);

	index++;
}
cout << lemons[2].GetOutString() << endl;
*/


	//HashTable<Eclipse> h(eList);







}
