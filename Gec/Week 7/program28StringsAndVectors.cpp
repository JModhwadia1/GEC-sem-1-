#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string>inventory;
	string input;

	cout << "Type which item you wish to keep: Staff or Knife" << endl;
	getline(cin, input);
	inventory.push_back(input);
	inventory.push_back("Sword");
	cout << "Your inventory holds: " << endl;

	for (int i = 0; i < inventory.size(); i++)
	{
		cout << inventory[i] << endl;
	}

	cout << "Type which item you wish to keep: Healing potion or Fire Spell" << endl;
	getline(cin, input);
	inventory.push_back(input);

	for (int i = 0; i < inventory.size(); i++)
	{
		cout << inventory[i] << endl;
	}
	cout << "Your inventory is full!" << endl;

	cout << "You have found a magic ring what would you like to replace in your inventory. Choose from 1 - 3? Choices:" << endl;

	for (int i = 0; i < inventory.size(); i++)
	{
		cout << inventory[i] << endl;
	
	}
	cin >> input;

	if (input == "1")
	{
		inventory[0] = "magic ring";
	}
	else if (input == "2")
	{
		inventory[1] = "magic ring";
	}
	else if (input == "3")
	{
		inventory[2] = "magic ring";
	}

	cout << "Your inventory is now: " << endl;
	for (int i = 0; i < inventory.size(); i++)
	{
		cout << inventory[i] << endl;

	}

	cout << "You have been robbed!!" << endl;
	cout << "Your inventory now is: " << endl;
	
	for (int i = 0; i < inventory.size(); i++)
	{
	 	 inventory[i] = "Empty";
		 cout << inventory[i] << endl;
	}
	
	// i coudve used inventory.clear(); but then i could not have outputed anything
	
		
	
	
	
	
	

	

}
