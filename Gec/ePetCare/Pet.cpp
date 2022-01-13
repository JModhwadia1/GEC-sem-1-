#include "Pet.h"
using namespace std;
#include <iostream>
Pet::Pet(int hunger, int boredom )
{
	cout << "A new pet has arrived " << endl;
	m_hunger = hunger;
	m_bored = boredom;
}

void Pet::Feed(int food )
{
	cout << "The animal has eaten. Burp!" << endl;
	m_hunger -= food;
	if (m_hunger < 0)
	{
		m_hunger = 0;
	}
	PassingTime();
}

void Pet::Play(int fun)
{

	cout << "The animal has been played with." << endl;
	m_bored -= fun;
	if (m_bored < 0)
	{
		m_bored = 0;
	}
	PassingTime();
}
void Pet::Talk()
{
	
	int mood = GetMood(m_hunger, m_bored);
	if (mood >= 6)
	{
		cout << " mad" << endl;
	}
	else if (mood >= 3)
	{
		cout << " frustrated" << endl;
	}
	else
	{
		cout << " happy" << endl;
	}
	PassingTime();
}
void Pet::PassingTime(int time)
{
	m_hunger += time;
	m_bored =+time;
}




