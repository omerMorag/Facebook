#pragma once
#ifndef __POST_H
#define __POST_H
#define CRT_SECURE_NO_WARNINGS
#include "Date.h"
#include "Time.h"
#include <iostream>
#include "typeinfo.h"
using namespace std;
const int SIZE = 50;
#pragma warning(disable: 4996)
#include <ctime>
#include <string>
#include <sstream>

class PhotoPost;
class VideoPost;
class TextPost;
class TextAndPhoto;
class TextAndVideo;

class Post
{

public:
	Post();
	 virtual ~Post();
virtual void showPost();
	Date& getDatePost()         ;
	Time & getTimePost()       ;
	bool operator==( Post* other)               const;
	bool operator!=(const Post* other)           const;
	virtual const char* getType()                const;

protected:
	Time timePost;
	Date datePost;
	string textPost;

};

#endif