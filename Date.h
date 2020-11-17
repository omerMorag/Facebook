#pragma once
#ifndef __DATE_H
#define  __DATE_H
#define CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>

class Date
{
public:
	Date();
	void setDay();
	void setMonth();
	void setYear();
	int  getDay()           const;
	int getMonth()          const;
	int  getYear()          const;
	void setCurrenDate(int day, int month, int year);
	void showDate()          const;
private:
	int day, month, year;
};

#endif 
