#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

//This program is not finished

int main()
{
	while (true)
	{
		int userInput;

		fstream myfile;

	menu:
		cout << "Press 1 to Enter a score" << endl;
		cout << "Press 2 to display scores" << endl;
		cout << "Press 3 to exit" << endl;

		cin >> userInput;
		if (userInput == 1)
		{
			int userScore;
			myfile.open("scores.txt", ios::app);


			cout << "enter your score" << endl;
			cin >> userScore;
			myfile << userScore;
			myfile << "\n";
			cout << "your score has been entered" << endl;

			myfile.close();

			goto menu;

		}
		else if (userInput == 2)
		{
			myfile.open("scores.txt");
			if (myfile.is_open())
			{
				string line;
				while (getline(myfile, line))
				{
					cout << line << endl;
				}
				myfile.close();
			}
		}
		else if (userInput == 3)
		{
			cout << "You are exiting the program" << endl;
			break;
		}
	}
	
}