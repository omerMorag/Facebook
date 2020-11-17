#pragma once
#ifndef __User_H
#define __User_H
#include <iostream>
#include "Post.h"
#include "Date.h"
#include "TextPost.h"
#include "VideoPost.h"
#include "PhotoPost.h"
#include <cstring>
#include "TextAndPhoto.h"
#include "TextAndVideo.h"
#include<vector>
#include <string>
#include <sstream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)


class Member;
class VideoPost;

class User
{

protected:
	string mName;
	vector<Member*> friends;
	vector<Post*> listOfPost;

	int  counterPost;

public:
	User();
	 virtual ~User();
	 virtual void setName();
	void showName()                  const;
	string  getName()                  const;
	void printAllFriends()           const;
	void printAllPost()              const;
	void  addPost();
	int operator+=( Member* add);
	bool operator>( const User* other)           const ;
	virtual const char* getType() const;
};

#endif