/*
 * Eclipse.h
 *
 *  Created on: Nov 13, 2017
 *      Author: willi
 */
#include<string>
#include<iostream>
#include<iomanip>
#include<fstream>

#ifndef ECLIPSE_H_
#define ECLIPSE_H_


using namespace std;

class Eclipse {
public:
	Eclipse();
	Eclipse(string h);
	~Eclipse();
	//add operator overload.


	int GetCat();
	int GetPlate();
	int GetYear();
	string GetMonth();
	int GetMonthNumber();
	int GetDay();
	string GetTD();
	int GetDT();
	int GetLunaNum();
	int GetSarosNum();
	string GetType();
	float GetGamma();
	float GetMag();
	string GetLat();
	string GetLong();
	int GetAlt();
	int GetAzm();
	int GetWidth();
	void SetMonthNum(int n);
	string GetOutString();


	int calcMonthNum(string m);
	void Parse(string in);
	int CompareString(string s1, string s2);
	int CompareInt(int i1, int i2);
	int CompareFloat(float f1, float f2);








private:
	int cat;
	int plate;
	int year;
	string month;
	int monthNum;
	int day;
	string td;
	int dt;
	int lunaNum;
	int sarosNum;
	string eclipseType;
	float gamma;
	float mag;
	string lat;
	string longitude;
	int alt;
	int azm;
	int width;


	string outstring;
	string inArr[19];



};




#endif /* ECLIPSE_H_ */
