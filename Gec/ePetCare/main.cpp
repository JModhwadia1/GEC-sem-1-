#include <iostream>
using namespace std;

#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Hamster.h"

int main()
{
	Pet* petPtr = new Pet(4, 4);
	int choice;
	cout << "1. Dog 2.Cat 3. Hamster" << endl << "enter your choice";
	cin >> choice;
	switch (choice)
	{
	case 1: 
		petPtr = new Dog(0,0);
		break;
	case 2: 
		petPtr = new Cat(0,0);
		break;
	case 3: 
		petPtr = new Hamster(0,0);
		break;
	default: 
		petPtr = new Pet(0,0);
		break;
	}
	
	bool runGame = true;
	while (runGame )
	{
		cout << "0. Quit 1. Listen to your pet 2. Feed your pet 3. Play with the pet" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: 
			runGame = false;
			break;
		case 1: 
			
			petPtr->Talk();
			break;
		case 2:
			petPtr->Feed();
			break;
		case 3: 
			petPtr->Play();
			break;
			

		default:
			//petPtr->Talk();
			break;
		}
	}
	
	return 0;

}