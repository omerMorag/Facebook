#pragma once
#ifndef __TEXTANDVIDEO_H
#define  __TEXTANDVIDEO_H
# include"TextPost.h"
# include"VideoPost.h"
class TextAndVideo: public TextPost, public VideoPost
{
public:
	TextAndVideo();
	~TextAndVideo();
	 void showPost();
	 virtual const char* getType()                const;

};

#endif