#include "TheFaceBook.h"

//--------------------------------------TheFaceBook Functions--------------------------------------------------------------
TheFaceBook::~TheFaceBook() {
	for (auto i : allUsers) {
		delete i;
	}
	allUsers.clear();
}

TheFaceBook::TheFaceBook()
{
	numOfFumPage = 0;
	NumOfMembers = 0;
}

void TheFaceBook::addUser(int index) {
	if (index == 1) {
		int size = allUsers.size();
		User * newAdd = new Member();
		while (UnValidName(newAdd->getName()) == true) {
			cout << "there is already a member with this name, try again: " << endl;
			newAdd->setName();
		}
		allUsers.push_back(newAdd);
		NumOfMembers = NumOfMembers + 1;
	}
	else {
		User * newFan = new fanPage();
		allUsers.push_back(newFan);
		numOfFumPage = numOfFumPage + 1;
	}
	cout << endl << "user added successfully." << endl;
}

bool TheFaceBook::UnValidName(string temp)     const {
	for (auto i: allUsers) {
		if (temp.compare((i->getName())) == 0) {
			if (strcmp(i->getType(),"Member")== 0)
			return true;
		}
	}
	return false;
}




void TheFaceBook::showUsers()            const {
	//print all the members
	int k = 1;
	if (allUsers.size() != 0) {
		cout << "All users registered in the system are:"<<endl;
		for (auto i : allUsers) {
			cout << k<< ".";
			i->showName();
			cout << "\n";
			k++;
		}
	}
	else
		cout << "there are no registered members in the sistem" << endl;
}



void TheFaceBook::printAll(int index)    const
{
	allUsers[index - 1]->printAllFriends();
}

void  TheFaceBook::makeFriendshipOfTwoMembers()
{
	if (NumOfMembers > 1) {
		int ans1, ans2;
		int member1, member2;
		cout << "Please click on the index of the members you would like to link: \n";
		showUsers();
		cout << "member 1: ";
		cin >> member1;
		cout << "member 2: ";
		cin >> member2;
		if ((strcmp(allUsers[member1 - 1]->getType(), "member") == 0)
			&& (strcmp(allUsers[member2 - 1]->getType(), "member") == 0)) {
			if (member1 != member2) {
				ans1 = (allUsers[(member1 - 1)]->operator+=((Member*)allUsers[(member2 - 1)]));
				ans2 = (allUsers[(member2 - 1)]->operator+=((Member*)allUsers[(member1 - 1)]));
				if ((ans1 == 0) || (ans2 == 0))
					cout << "they are already a friends" << endl;
				else {
					allUsers[member1 - 1]->showName();
					cout << " and ";
					allUsers[member2 - 1]->showName();
					cout << endl << "are friends now!" << endl;
				}
			}
			else
				cout << "A person can not be a member of himself Please select another member" << endl;
		}
		else
			cout << "one of the users you chose was a fan page try again" << endl;
	}
	else
		cout << "there is only 1 person registered in the system right now..." << endl;
}


void  TheFaceBook::addFanToFanPage()
{
	int indexfan, indexmem,ans;
	if (numOfFumPage == 0)
		cout << " no fan pages in the system, this option is not availeble" << endl;
	else {
		showUsers();
		cout << "Please click the fan page index you'd like to add fans to:" << endl;
		cin >> indexfan;
		//cheak if they are type fan page and member
		if (NumOfMembers != 0) {
			cout << "Please click on the member index you would like to add as a fan:" << endl;
			cin >> indexmem;
			if ((strcmp(allUsers[indexfan - 1]->getType(), "fan page")==0)
				&& (strcmp(allUsers[indexmem - 1]->getType(),"member") == 0)) {
				ans = allUsers[indexfan - 1]->operator+=((Member*)allUsers[indexmem - 1]);
				if (ans == 1) {
					((Member*)allUsers[indexmem - 1])->addFanPage((fanPage*)allUsers[indexfan - 1]);
					cout << endl << "the fan added succesfaly" << endl;
				}
				else
					cout << "this member is already a fan, please choos another member." << endl;
			}
			else
				cout << "you chose a wrong type of user,try again:" << endl;
		}
		else
			cout << " no members in the system, this option is not availeble" << endl;
	}
}

void  TheFaceBook::addPostForUser(int index) {
	allUsers[index - 1]->addPost();
}


void TheFaceBook::printPost(int index) {
		allUsers[index - 1]->printAllPost();
}

void TheFaceBook::diPlaytenPostOfAfriend(int index) {
	if (strcmp((allUsers[index - 1])->getType(), "member") == 0)
	(	(Member*)allUsers[index - 1])->printTenLastPostOfFriends();
	else
		cout << "you chose a fan page, try again:" << endl;
}

void TheFaceBook::compareTwoUsers()           const {
	int member1, member2;
	cout << "Please click the index numbers of the two users you want to compare: " << endl << endl;
	showUsers();
	cout << "user 1: ";
	cin >> member1;
	cout << "user 2: ";
	cin >> member2;
	
	if (allUsers[member1 - 1]->operator> (allUsers[member2 - 1]))
		cout << "user 1 has more friends tham user 2" << endl;
	else 
		cout << "user 1 is not have more friends tham user 2" << endl;

}

