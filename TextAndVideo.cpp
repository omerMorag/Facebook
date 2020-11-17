#include "TextAndVideo.h"



TextAndVideo::TextAndVideo()
{
}


TextAndVideo::~TextAndVideo()
{
}

void TextAndVideo::showPost()      {
	this->datePost.showDate();
	this->timePost.showTime();
	cout << endl;
	cout << "text post:";
	cout << this->textPost << endl;
	cout << "Plays the video status" << endl;

}


const char*   TextAndVideo::getType()                const {
	return "text and video";
}