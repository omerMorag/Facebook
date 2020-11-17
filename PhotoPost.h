#pragma once
#ifndef __PHOTOPOST_H
#define  __PHOTOPOST_H
#include "Post.h"

class PhotoPost:virtual public Post
{
public:
	PhotoPost();
	~PhotoPost();
    void showPost();
	virtual const char* getType()                const;

};

#endif