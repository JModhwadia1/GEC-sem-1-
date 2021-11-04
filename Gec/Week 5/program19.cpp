#include <iostream>
using namespace std;

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);
bool OddOrEven(int tenInputs);
int main()
{
	OddOrEven();

}
bool OddOrEven()
{
	int tenInputs;
	for (size_t i = 0; i < 10; i++)
	{
		cout << "please enter ten numbers" << endl;
		cin >> tenInputs;
	}

}