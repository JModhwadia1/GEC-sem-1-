//#include <iostream>
//using namespace std;
//
//
//
//int main()
//{
//	string userAnswer;
//	int computerAnswer;
//	int userInput = 0;
//	int rounds = 0;
//	int userScore = 0;
//	int computerScore = 0;
//	int userScoreRemaining = 0;
//	int compScoreRemaining = 0;
//	int total = 3;
//	
//	while ( userScore < 3 && computerScore < 3)
//	{
//		while (true)
//		{
//
//
//			cout << "Enter Your selection: ";
//			cin >> userAnswer;
//			rounds++;
//			if (userAnswer == "Rock")
//			{
//				cout << "You chose Rock" << endl;
//				userInput = 1;
//				break;
//
//			}
//			else if (userAnswer == "Paper")
//			{
//				cout << "You chose Paper" << endl;
//				userInput = 2;
//				break;
//			}
//			else if (userAnswer == "Scissors")
//			{
//				cout << "You chose Scissors" << endl;
//				userInput = 3;
//				break;
//			}
//			if (userInput != 1 || userInput != 2 || userInput != 3)
//			{
//				cout << "Incorrect Selection, Please Type Rock, Paper or Scissors" << endl;
//			}
//		}
//			
//		
//		srand(time(NULL));
//
//		computerAnswer = rand() % 3 + 1;
//
//
//
//		if (computerAnswer == 1)
//		{
//			cout << "The Computer Chose Rock" << endl;
//		}
//		else if (computerAnswer == 2)
//		{
//			cout << "The Computer chose Paper" << endl;
//		}
//		else if (computerAnswer == 3)
//		{
//			cout << "The computer chose Scissors" << endl;
//		}
//#pragma region conditions 
//
//
//
//		if (userInput == 1 && computerAnswer == 2)
//		{
//			computerScore++;
//			cout << "Computer wins" << endl;
//			cout << "Computer Score: " << computerScore << endl;
//		}
//		else if (userInput == 2 && computerAnswer == 3)
//		{
//			computerScore++;
//			cout << "Computer Wins" << endl;
//			cout << "Computer Score: " << computerScore << endl;
//		}
//		else if (userInput == 3 && computerAnswer == 1)
//		{
//			computerScore++;
//			cout << "Computer wins" << endl;
//			cout << "Computer Score: " << computerScore << endl;
//		}
//		else if (userInput ==  computerAnswer)
//		{
//			cout << "It's a tie" << endl;
//			cout << "Your Score : " << userScore << endl;
//			cout << "Computer Score: " << computerScore << endl;
//			
//		}
//		
//		else
//		{
//			userScore++;
//			cout << "Congratulations: You win" << endl;
//			cout << "User Score: " << userScore << endl;
//		}
//
//
//		userScoreRemaining = total - userScore;
//		cout << "You Need: " << userScoreRemaining << " to complete the game" << endl;
//		compScoreRemaining = total - computerScore;
//		cout << "Computer needs: " << compScoreRemaining<< " to complete the game" << endl;
//		if (userScore == 3)
//		{
//			cout << "Congrats you have won the game" << endl;
//		}
//		else if (computerScore == 3)
//		{
//			cout << "Game Over" << endl;
//		}
//
//
//
//#pragma endregion
//	}
//
//	/*if (userScore == 3)
//	{
//		cout << "Congrats you have won the game" << endl;
//	}
//	else if (computerScore == 3)
//	{
//		cout << "Game Over" << endl;
//	}*/
//	
//
//	
//
//
//}
