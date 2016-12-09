#include "stdio.h"
#include "iostream"
using namespace std;

class User
{
public:
	int id;
	bool isRegistered;
	User()
	{
		id = 0;
		isRegistered = false;
	}
	void Status()
	{
		if (isRegistered)
			cout << "UserID: " << id << " Registered: True\n";
		else
			cout << "UserID: " << id << " Registered: False\n";
	}
};

void Register(User u[], int userID)
{
	u[userID].isRegistered = true;
}

void main()
{
	User users[20];
	for (int i = 0; i < 20; i++)
	{
		users[i].id = i;
	}
	Register(users, 3);
	Register(users, 10);
}