#pragma once
#ifndef __FANPAGE_H
#define __FANPAGE_H

#include "Member.h"
#include "User.h"
#include "Post.h"
#define CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <string>
#pragma warning(disable: 4996)


class Member;

class fanPage: public User {
public:
	~fanPage();
	fanPage();
	virtual const char* getType() const;
private:

};
#endif