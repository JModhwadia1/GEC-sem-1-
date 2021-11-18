#include <iostream>
#include <string>
using namespace std;

int main()
{
	char name[50];
	cout << "Please write your name" << endl;
	cin.getline( name, 50 );


	for (int i = 1; i < strlen(name); i++)
		if (name[i] == ' '  )

			cout << name[i - 1] << endl;;
	return 0;
}

 