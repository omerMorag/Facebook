#include "VideoPost.h"



VideoPost::VideoPost()
{
}


VideoPost::~VideoPost()
{
}

const char*   VideoPost::getType()                const {
	return "video post";
}


void VideoPost::showPost() {
	this->datePost.showDate();
	this->timePost.showTime();
	cout << endl;
	cout << "Plays the video status" << endl;
}