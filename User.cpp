#include "User.h"
#include "Member.h"
//----------------------------------------User Functions--------------------------------------------------------------

User::User()
{
	counterPost = 0;
}


User::~User()
{
	friends.clear();
	listOfPost.clear();
}

void User::setName()
{
	string string;  
	cout << "please enter the user name: "<<endl;
	cin.ignore();
	getline(cin, string); //The user input goes into string
	mName = string;
}

 const char* User:: getType() const { 
	 return "user";
 }


void User::showName()      const {
	cout<<this->getType() <<": " <<this->mName << " \n";
}

string User::getName()                const {
	return this->mName;
}


void User::printAllPost()        const {
	if (listOfPost.size() == 0) {
		showName();
		cout << " has no posts yet" << endl;
	}
	else {
		int k = 1;
		cout << "all the post of ";
		showName();
		cout << "are:" << endl<<endl;
		for (auto i : listOfPost) {
			cout << k + 1 << ".";
			i->showPost();
			cout << endl;
			k++;
		}
	}
}

void User::printAllFriends()   const {
	if (friends.size() == 0) {
		showName();
		cout << " has no friends yet" << endl;
	}
	else {
		cout << "all the friends of  ";
		showName();
		cout << "are:" << endl;
		for (auto i : friends) {
			i->showName();
			cout << endl;
		}
	}
}

void User::addPost() {
	int index;
	Post * add;
	cout << "to select a text post press 1" << endl << "to select a video post press 2" << endl << "to select a photo post press 3" << endl
		<< "to select a text&photo  post press 4" << endl << "to select a text&video  post press 5" << endl;
	cin >> index;
	if (index==1)
		add = new TextPost();

	if (index == 2)
		add = new VideoPost();
	if (index == 3)
		add = new PhotoPost();
	if (index == 4)
		add = new TextAndPhoto();
	if (index == 5)
		add = new TextAndVideo();
	listOfPost.push_back(add);

	counterPost = listOfPost.size();
}

int User::operator+=(Member* add) {
	bool flag = 0;
	//check if  he is already a friend
	for (auto i : friends) {
		if (i == add)
			flag = 1;
	}
	if (flag == 0) {
		friends.push_back(add);
		return 1;
	}
	else
		return 0;
}

//if the left has more friens from the right the function return 1;
bool User:: operator>(const User* other)           const {
	if (friends.size() >= other->friends.size())
		return true;
	else
		return false;
}