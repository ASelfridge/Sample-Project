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

void deleteUser(User u[], int userID)
{
	int temp = 0;
	for (int i = 0; i < 20; i++)
	{
		if (userID == u[i].id)
		{
			u[i].id = -1;
			for (int j = i; j < 19; j++)
			{
				temp = u[j].id;
				u[j].id = u[j + 1].id;
				u[j + 1].id = temp;
			}
			break;
		}
		
	}
}

void main()
{
	User users[20];
	for (int i = 0; i < 20; i++)
	{
		users[i].id = i;
		cout << users[i].id << "\n";
	}
	Register(users, 3);
	Register(users, 10);
	deleteUser(users, 10);
	deleteUser(users, 5);
	deleteUser(users, 15);
}