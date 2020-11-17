#include "Date.h"

//-----------------------------------date Function-------------------------------------------------------------
Date::Date() {

}

void Date::setDay() {
	int day;
	cout << "day: ";
	cin >> day;

	while (day > 31 || day < 1) {
		cout << "The day you entered is illegal, please enter again (number from 1 to 30): ";
		cin >> day;
	}
	this->day = day;
}

void Date::setMonth() {
	int month;
	cout << "month: ";
	cin >> month;

	while (month > 12 || month < 1) {
		cout << "The month you entered is illegal, please enter again (number from 1 to 12): ";
		cin >> month;
	}
	this->month = month;
}

void Date::setYear() {
	int year;
	cout << "year: ";
	cin >> year;

	while (year > 2018) {
		cout << "The year you entered is illegal, please enter again: ";
		cin >> year;
	}
	this->year = year;
}

void Date::setCurrenDate(int day, int month, int year) {
	this->day = day;
	this->month = month;
	this->year = year;
}

void Date::showDate() const {
	cout << this->day << "." << this->month << "." << this->year << endl;
}

int Date::getYear() const {
	return this->year;
}

int Date::getMonth()const {
	return this->month;
}

int Date::getDay()const {
	return this->day;
}
