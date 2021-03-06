#pragma once
using namespace std;
#include <iostream>;
class Pet
{
public:
	Pet(int hunger = 0, int boredom = 0);
	
	~Pet();
	virtual void Talk();
	void Feed(int food = 4);
	
	void Play(int fun = 4);
	
private:
	int m_hunger = 0;
	int m_bored = 0;
protected:
	const int GetMood(int m_hunger, int m_bored) { return m_hunger + m_bored; }

	void PassingTime(int time = 1);
	
};

