#include <iostream>
using namespace std;

int main()
{
	char userStatus;
	int userGameChoice;
	cout << "Please tell me your status with 's' for Student, 't' for teacher or 'o'for other" << endl;
	cin >> userStatus;
	cout << "Which game would you like 1 or 2" << endl;
	cin >> userGameChoice;

	if (userStatus == 's' && userGameChoice == 1 || userStatus == 't' && userGameChoice == 1)
	{
		cout << "You are available for a 20% discount" << endl;
	}
	else if (userStatus == 's' && userGameChoice == 2 || userStatus == 't' && userGameChoice == 2)
	{
		cout << "You are available for a 10% discount" << endl;
	}
	else
	{
		cout << "You are not entitled to a discount" << endl;
	}
}

//	 (userStatus == 's' || 't')
//	{
//		if (userGameChoice == 1)
//		{
//			cout << "you can get a 20% discount" << endl;
//		}
//		else if (userGameChoice == 2)
//		{
//			cout << "You can get a 10% discount" << endl;
//
//		}
//
//	else
//	{
//			cout << "you get no discount" << endl;
//	}
//
//
//	}
//}
