#include "Time.h"

//----------------------------------------Time Functions--------------------------------------------------------------

Time::Time() {
}

Time::~Time()
{
}
int Time::getMinutes()   const {
	return minutes;
}

int Time::getHoures()   const {
	return houres;
}

void Time::showTime()const {
	cout << this->houres << ":" << this->minutes;
}

void Time::setTime(int minutes, int houres) {
	this->minutes = minutes;
	this->houres = houres;
}