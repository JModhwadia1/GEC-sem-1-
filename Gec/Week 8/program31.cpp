#include <iostream>
using namespace std;

int main()
{
	int count;
	cout << "enter a number: " << endl;
	cin >> count;
	for (int i = 0; i <  1; i++)
	{
		
		if (count % 2 == 0)
		{
			cout << "is an even number" << endl;
		}
			
		else if (count % 2 != 0)
		{
			cout << "is an odd number" << endl;

		}
			

	}
	// pause the output
	cin.get();

}