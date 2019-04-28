/*
 * Eclipse.cpp
 *
 *  Created on: Nov 13, 2017
 *      Author: willi
 */

#include "Eclipse.h"

class EclipseException{};
Eclipse::Eclipse(){

}
Eclipse::Eclipse(string h){
	outstring = h;
	Parse(outstring);

}
Eclipse::~Eclipse(){

}

int Eclipse::GetCat(){
	return cat;
}
int Eclipse::GetPlate(){
	return plate;
}
int Eclipse::GetYear(){
	return year;
}
string Eclipse::GetMonth(){
	return month;
}
int Eclipse::GetMonthNumber(){
	return monthNum;
}
int Eclipse::GetDay(){
	return day;
}
string Eclipse::GetTD(){
	return td;
}
int Eclipse::GetDT(){
	return dt;
}
int Eclipse::GetLunaNum(){
	return lunaNum;
}
int Eclipse::GetSarosNum(){
	return sarosNum;
}
string Eclipse::GetType(){
	return eclipseType;
}
float Eclipse::GetGamma(){
	return gamma;
}
float Eclipse::GetMag(){
	return mag;
}
string Eclipse::GetLat(){
	return lat;
}
string Eclipse::GetLong(){
	return longitude;
}
int Eclipse::GetAlt(){
	return alt;
}
int Eclipse::GetAzm(){
	return azm;
}
int Eclipse::GetWidth(){
	return width;
}
string Eclipse::GetOutString(){
	return outstring;
}
void Eclipse::SetMonthNum(int n){
	monthNum = n;
}
int Eclipse::calcMonthNum(string m){
	if(m == "Jan"){
		return 1;
	}
	else if(m == "Feb"){
		return 2;
	}
	else if(m == "Mar"){
		return 3;
	}
	else if(m == "Apr"){
		return 4;
	}
	else if(m == "May"){
		return 5;
	}
	else if(m == "Jun"){
		return 6;
	}
	else if(m == "Jul"){
		return 7;
	}
	else if(m == "Aug"){
		return 8;
	}
	else if(m == "Sep"){
		return 9;
	}
	else if(m == "Oct"){
		return 10;
	}
	else if(m == "Nov"){
		return 11;
	}
	else if(m == "Dec"){
		return 12;
	}
	else{
		return 0;
	}
}
void Eclipse::Parse(string in){
	int col = 0;
	int inLength = in.length();
	int index = 0;
	string tmp;


	for(int i = 0; i < 19; i++){
		inArr[i] = "";
	}
	while(col < 19 && index < inLength){
		if(!isspace(in.at(index))){
			if(index == 0){
				tmp = tmp + in.at(index);
				index = index + 1;
			}
			else if(index == inLength - 1){
				tmp = tmp + in.at(index);
				inArr[col] = tmp;
				tmp.clear();
				col = col + 1;
				index = index + 1;
			}
			else{
				tmp = tmp + in.at(index);
				index = index + 1;
			}
		}
		else if(isspace(in.at(index))){
			if(index == 0){
				index = index + 1;
			}
			else if(index > 0 && !isspace(in.at(index - 1))){
				inArr[col] = tmp;
				col = col + 1;
				tmp.clear();
				index = index + 1;
			}
			else{
				index = index + 1;
			}
		}
	}

	//Check for error in cols.
	if((inArr[9]== "P"|| inArr[9] == "Pb" || inArr[9] == "T+" || inArr[9] == "Pe")&& inArr[17] != ""){
		throw EclipseException();
	}
	if(inArr[18] != ""){
		throw EclipseException();
	}

	//Initialize variables from array and check type.
	if(inArr[9] == "P" || inArr[9] == "Pb" || inArr[9] == "T+" || inArr[9] == "Pe"){
		cat = stoi(inArr[0]);
		plate = stoi(inArr[1]);
		year = stoi(inArr[2]);
		month = inArr[3];
		monthNum = calcMonthNum(month);
		day = stoi(inArr[4]);
		td = inArr[5];
		dt = stoi(inArr[6]);
		lunaNum = stoi(inArr[7]);
		sarosNum = stoi(inArr[8]);
		eclipseType = inArr[9];
		gamma = stof(inArr[10]);
		mag = stof(inArr[11]);
		lat = inArr[12];
		longitude = inArr[13];
		alt = -1;
		azm = -1;
		width = -1;

	}
	else{
		cat = stoi(inArr[0]);
		plate = stoi(inArr[1]);
		year = stoi(inArr[2]);
		month = inArr[3];
		monthNum = calcMonthNum(month);
		day = stoi(inArr[4]);
		td = inArr[5];
		dt = stoi(inArr[6]);
		lunaNum = stoi(inArr[7]);
		sarosNum = stoi(inArr[8]);
		eclipseType = inArr[9];
		gamma = stof(inArr[10]);
		mag = stof(inArr[11]);
		lat = inArr[12];
		longitude = inArr[13];
		alt = stoi(inArr[14]);
		azm = stoi(inArr[15]);
		width = stoi(inArr[16]);

	}
}
int Eclipse::CompareString(string s1, string s2){
	if(s1 > s2){
		return 1;
	}
	else if(s1 < s2){
		return -1;
	}
	else{
		return 0;
	}
}
int Eclipse::CompareInt(int i1, int i2){
	if(i1 > i2){
		return 1;
	}
	else if(i1 < i2){
		return -1;
	}
	else{
		return 0;
	}
}
int Eclipse::CompareFloat(float f1, float f2){
	if(f1 > f2){
		return 1;
	}
	else if(f1 < f2){
		return -1;
	}
	else{
		return 0;
	}
}
