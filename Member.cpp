#include "Member.h"

//----------------------------------------Member Functions--------------------------------------------------------------

Member:: Member () 
{
	setName();
	//cheak if the name is ok
	setBornDate();
}
Member::~Member()
{
}


const char* Member::getType() const {
	return "member";
}

void Member::setBornDate()
{
	Date date;
	cout << "Please enter the members born date:\n";
	date.setDay();
	date.setMonth();
	date.setYear();
	this->bornDate = date;
}

void Member::addFanPage(fanPage* add) {
	fanOf.push_back(add);
}

void Member::setCounterPost(int counter) {
	if (counter > -1)
		counterPost = counter;
}

void  Member::printTenLastPostOfFriends()      const {
	bool flag = 0;
	Post * mostUpdated = nullptr;
	int indexMax;
	//we cheack 10 time
	for (int i = 0; i < 10; i++) {
		//we cheack all the friend of the membr
		for (int j = 0; j < (friends.size()); j++) {
			//only if the friend have post
			if (friends[j]->counterPost> 0) {
				if (flag == 0) {
					mostUpdated = friends[j]->listOfPost[friends[j]->counterPost - 1];
					flag = 1;
					indexMax = j;
				}

				//compare
				if (comparePosts(friends[j]->listOfPost[friends[j]->counterPost- 1], mostUpdated) == 1) {
					mostUpdated = friends[j]->listOfPost[friends[j]->counterPost- 1];
					indexMax = j;
				}
			}
		}
		if (mostUpdated != nullptr) {
			//print name of friend with the most recent post
			friends[indexMax]->showName();
			//print the most recent posy
			mostUpdated->showPost();
			//update counter of friend
			friends[indexMax]->setCounterPost((friends[indexMax]->counterPost - 1));
			flag = 0;
			mostUpdated = nullptr;
		}
	}

	//We'll update to the previous state

	for (auto i : friends)
		i->counterPost = listOfPost.size();

}

// This function returns 1 if a is a newer post than b, end 0 otherwise.
int  Member::comparePosts(Post * a, Post * b)    const {
	Date& aDate = a->getDatePost();
	Date& bDate = b->getDatePost();
	Time &atime = a->getTimePost();
	Time &btime = b->getTimePost();
	//if its bigger year return 1
	if (aDate.getYear() > bDate.getYear())
		return 1;
	//if not
	else {
		// if smaller return 0
		if (aDate.getYear() < bDate.getYear())
			return 0;
		//if equal year
		else {
			//if bigger month reutrn 1
			if (aDate.getMonth() > bDate.getMonth())
				return 1;
			else {
				// if smaller month
				if (aDate.getMonth() < bDate.getMonth())
					return 0;
				//if equal
				else {
					if (aDate.getDay() > bDate.getDay())
						return 1;
					else {
						if (aDate.getDay() < bDate.getDay())
							return 0;
						//equal day
						else {
							if (atime.getHoures() > btime.getHoures())
								return 1;
							else {
								if (atime.getHoures() < btime.getHoures())
									return 0;
								//equal houre
								else {
									if (atime.getMinutes() > btime.getMinutes())
										return 1;
									else
										return 0;
								}
							}

						}
					}

				}
			}
		}
		return 0;
	}
}