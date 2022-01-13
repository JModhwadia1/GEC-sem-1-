//#include <iostream>
//using namespace std;
//
//void inputDetails(int* n1, int* n2);
//void outputDetails(int& integer1, int& integer2, int* pointer);
//int main()
//
//{
//	int num1;
//	int num2;
//
//	int* Pnum = &num1;
//	cout << "Enter two numbers" << endl;
//	inputDetails(&num1, &num2);
//	outputDetails(num1, num2, Pnum);
//	cout << "\n";
//	cout << "reassigning the pointer to point at num2\n\n";
//	Pnum = &num2;
//	outputDetails(num1, num2, Pnum);
//	Pnum = NULL;
//	
//	
//
//	
//}
//void inputDetails(int* n1, int* n2)
//{
//	cin >> *n1;
//	cin >> *n2;
//}
//void outputDetails(int& integer1, int& integer2, int* pointer)
//{
//	cout << "num 1 value" << endl;
//	cout << integer1 << endl;
//	cout << "\n";
//	cout << "num 1 address in memory" << endl;
//	cout << &integer1 << endl;
//	cout << "\n";
//	cout << "num 2 value" << endl;
//	cout << integer2 << endl;
//	cout << "\n";
//	cout << "num 2 address in memory" << endl;
//	cout << &integer2 << endl;
//	cout << "\n";
//	cout << "pnum value" << endl;
//	cout << &pointer << endl;
//	cout << "\n";
//	cout << "pnum dereferanced value" << endl;
//	cout << *pointer << endl;
//	cout << "\n";
//	cout << "pnum address" << endl;
//	cout << pointer << endl;
//
//}