using namespace std;
#include <iostream>
#include "Member.h"
#include "TheFaceBook.h"
#include "fanPage.h"

void main()
{
	TheFaceBook face;
	int act = 0, index;
	cout << "Welcome to facebook! " << endl;

	while (act != 11) {
		cout << endl << "--------------------------------------------------" << endl;
		cout << "Please choose the action you would like to do:" << endl << "1.Add a member" << endl << "2.Add fans page" << endl <<
			"3.Add post for a user or fan page" << endl << "4.Show all the posts of a member or fan page" << endl <<
			"5.Connect between two members" << endl << "6.Add a member as a fan on fan page" << endl << "7.Displays all registered entities"
			<< endl << "8.Show all friends of member or fans page" << endl << "9.Displays the last 10 member statuses " <<
			endl << "10.compare to users" << endl << "11. Sign out of the system" << endl;
		cin >> act;
		system("cls");
		if ((act == 1) || (act == 2)) {
			face.addUser(act);
		}
		if (act == 3) {
			cout << "Tap the user index to add a post" << endl;
			face.showUsers();
			cin >> index;
			face.addPostForUser(index);
			cout << "The post was successfully uploaded" << endl;
		}
		if (act == 4) {
			face.showUsers();
			cout << "Tap the user index you want to see all his posts " << endl;
			cin >> index;
			face.printPost(index);
		}
		if (act == 5) {
			face.makeFriendshipOfTwoMembers();
		}
		if (act == 6) {
			face.addFanToFanPage();
		}
		if (act == 7) {
			face.showUsers();
		}
		if (act == 8) {
			face.showUsers();
			cout << "Tap the user index you want to see all his friends/fans: " << endl;
			cin >> index;
			face.printAll(index);
		}
		if (act == 9) {
			cout << "Please click on the member name index to view the ten statuses of its members" << endl << endl;
			face.showUsers();
			cin >> index;
			face.diPlaytenPostOfAfriend(index);
		}
		if (act == 10) {
			face.compareTwoUsers();
		}

	}
}