#include "Post.h"

//----------------------------------------post Functions--------------------------------------------------------------
Post::Post() {
	//set the current time of the post
	time_t timeInSec;
	tm timeOfEnter;
	time(&timeInSec);
	errno_t result = localtime_s(&timeOfEnter, &timeInSec);
	datePost.setCurrenDate(timeOfEnter.tm_mday, timeOfEnter.tm_mon + 1, timeOfEnter.tm_year + 1900);
	timePost.setTime(timeOfEnter.tm_min, timeOfEnter.tm_hour);
}

Post::~Post()
{
	
}


 void Post::showPost() {
	this->datePost.showDate();
	this->timePost.showTime();
}

 Date& Post::getDatePost()       {
	return datePost;
}

  Time &   Post::getTimePost()    {
	return this->timePost;
}

  const char*   Post::getType()                const {
	  return "post";
  }

 bool Post:: operator== ( Post* other)           const {
	 //we cheack if they are video or photo post-iif yes they automotaclly equals.
	 if (strcmp(this->getType(), other->getType()) == 0) {
		 if ((strcmp(this->getType(), "video post") == 0) || strcmp(other->getType(), "photo post") == 0)
			 return true;

		 //We stayed with text statuses
		 if ((this->textPost.compare(other->textPost)) == 0)
			 return true;
		 else
			 return false;

	 }
	 else
		 return false;
 }

 bool Post:: operator!=(const Post* other)           const {
	 if (other == this)
		 return false;
	 else
		 return true;
 }
