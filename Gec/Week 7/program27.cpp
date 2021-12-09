//#include <iostream> 
//#include <string> 
//#include <algorithm> 
//
//using namespace std;
//
//
//int main()
//{
//
//	string inputName;
//	string inputlastName;
//	string TestString = "Do you know who loves C++ , XX ";
//
//	cout << "Please enter the firstname" << endl;
//
//	getline(cin, inputName);
//
//	cout << "Please enter the lastname" << endl;
//	getline(cin, inputlastName);
//
//
//
//	TestString.replace(28, 10, inputName);
//
//
//
//	cout << TestString << " does" << endl;
//
//	TestString.replace(28, 10, inputlastName);
//
//
//
//	cout << TestString << " does" << endl;
//
//
//	//Second input
//
//	string inputName2;
//	string inputlastName2;
//
//	cout << "Please enter the firstname" << endl;
//
//	getline(cin, inputName2);
//
//
//	while (true)
//	{
//
//		if (inputName2.length() < inputName.length())
//		{
//			cout << "Please input a longer name" << endl;
//			break;
//		}
//
//		else
//		{
//			TestString.replace(28, 10, inputName2);
//
//
//
//			cout << TestString << " does" << endl;
//			break;
//		}
//
//
//
//	}
//
//	while (true)
//	{
//
//		cout << "Please enter the lastname" << endl;
//
//		getline(cin, inputlastName2);
//
//		if (inputlastName2.length() < inputlastName.length())
//		{
//			cout << "Please input a longer name" << endl;
//			break;
//		}
//
//		else
//		{
//
//			TestString.replace(28, 10, inputlastName2);
//
//			cout << TestString << " does" << endl;
//			break;
//		}
//
//
//
//	}
//
//	return 0;
//}