
#pragma once
#ifndef __TEXTPOST_H
#define  __TEXTPOST_H
#include "Post.h"

class Post;
class TextPost :  virtual public Post
{
public:
	TextPost();
	~TextPost();
	void setTextPost();
	void showPost();
	virtual const char* getType()                const;
protected:

};

#endif