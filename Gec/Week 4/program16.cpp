#include <iostream>
using namespace std;
int main()
{
	int playerLife = 100;
	int damage;
	int questionCounter = 0;
	cout << "Health is: " << playerLife << endl;
	
	for  (int i = 0; i < 10; i++)
	{

		cout << "How much health to decrease: " << playerLife << " How much damage shall i deal?" << endl;
		cin >> damage;
		playerLife = playerLife - damage;
		questionCounter++;
		
		if (playerLife <= 0 )
		{
			cout << "Early end. Player Died!" << endl;
			break;
		}
	}
	if (playerLife >= 0  && questionCounter <10 || questionCounter ==10)
	{
		cout << "All questions asked. Player survided!" << endl;
	}
	/*else if (playerLife <= 0 && questionCounter == 10)
	{
		cout << "Early end. PlayerDied" << endl;

	}*/

	
}