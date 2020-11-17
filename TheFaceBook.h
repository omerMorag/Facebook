#pragma once
#ifndef __THEFACEBOOK_H
#define __THEFACEBOOK_H
#include "Member.h"
#include "fanPage.h"
#define CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>
#include<typeinfo.h>
#include <vector>

class TheFaceBook
{
public:
	//the constructor
	TheFaceBook();

	//we need to write the destructor
	~TheFaceBook();

	void addUser(int index);
	void showUsers()            const;
	void printAll(int index)            const;
	void addPostForUser(int index);
	void makeFriendshipOfTwoMembers();
	void addFanToFanPage();
	void printPost(int index);
	void diPlaytenPostOfAfriend(int index);
	bool TheFaceBook::UnValidName(string temp)     const;
	void compareTwoUsers()           const;
private:
	vector<User*> allUsers;
	int numOfFumPage,NumOfMembers;
};
#endif