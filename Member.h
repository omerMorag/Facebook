#pragma once
#ifndef __MEMBER_H
#define __MEMBER_H
#include <iostream>
#include "Date.h"
#include <cstring>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include "fanPage.h"
#include "Post.h"
#include "User.h"
#include <vector>

class fanPage;

class Member: public User
{
public:
	~Member();
	Member();
	void setBornDate();
	void addFanPage(fanPage* add);
	void printTenLastPostOfFriends()           const;
	void setCounterPost(int counter);
	int comparePosts(Post * a, Post * b)       const;
	virtual const char* getType()              const;

private:

	vector<fanPage*> fanOf;
	Date bornDate;
};
#endif