#pragma once
#pragma once
#ifndef TIME_H
#define TIME_H
using namespace std;
#include <iostream>
#include"ctime"
class Time
{
public:
	Time();
	~Time();
	void setTime(int minutes, int houres);
	void showTime()                    const;
	int getMinutes()                   const;
	int getHoures()                    const;
private:
	int houres, minutes;
};

#endif