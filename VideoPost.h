#pragma once
#ifndef __VIDEOPOST_H
#define  ____VIDEOPOST_H
#include "Post.h"

class VideoPost :virtual public Post
{
public:
	VideoPost();
	~VideoPost();
 void showPost();
 virtual const char* getType()                const;

};

#endif
