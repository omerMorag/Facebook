#include "TextAndPhoto.h"

TextAndPhoto::TextAndPhoto()
{
}


TextAndPhoto::~TextAndPhoto()
{
}

void TextAndPhoto:: showPost() {
	this->datePost.showDate();
	this->timePost.showTime();
	cout << endl;
	cout << "text post:";
	cout << this->textPost << endl;
	cout << "Displays picture status" << endl;

}

const char*   TextAndPhoto::getType()                const {
	return "text and photo";
}