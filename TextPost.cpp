#include "TextPost.h"



TextPost::TextPost()
{
	setTextPost();
}


TextPost::~TextPost()
{

}

void TextPost::setTextPost() {

	string string;
	cout << "what on your mind? " << endl;
	cin.ignore();
	getline(cin, string); //The user input goes into string
	textPost = string;
}

const char*   TextPost::getType()                const {
	return "text post";
}

void TextPost::showPost() {
	this->datePost.showDate();
	this->timePost.showTime();
	cout << endl;
		cout << "text post:";
		cout << this->textPost << endl;
}

