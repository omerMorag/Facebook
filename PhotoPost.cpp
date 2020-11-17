#include "PhotoPost.h"



PhotoPost::PhotoPost()
{
}


PhotoPost::~PhotoPost()
{
}

void PhotoPost:: showPost() {
	this->datePost.showDate();
	this->timePost.showTime();
	cout << endl;
	cout << "Displays picture status" << endl;
}

 const char*   PhotoPost::getType()                const {
	 return "photo post";
}