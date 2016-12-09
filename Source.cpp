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
	
};

void main()
{
	User users[20];
	for (int i = 0; i < 20; i++)
	{
		users[i].id = i;
	}
}