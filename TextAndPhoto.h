#pragma once
#pragma once
#ifndef __TEXTANDPHOTO_H
#define  __TEXTANDPHOTO_H
# include"TextPost.h"
# include"PhotoPost.h"
# include"VideoPost.h"

class TextAndPhoto :public TextPost, public VideoPost
{
public:
	 TextAndPhoto();
	~TextAndPhoto();
	 void showPost();
	 virtual const char* getType()                const;
};

#endif