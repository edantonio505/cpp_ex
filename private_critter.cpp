#include <iostream>

using namespace std;

class Critter
{
	public:
		Critter(int hunger = 0); // constructor function
		int GetHunger() const; // camel case method as it returns a const int the value is immutable
		void SetHunger(int hunger);


	private:
		int m_Hunger; //it is private so the value cannot bet set directly
};//Classes havke to have semicolon



// define the methods
Critter::Critter(int hunger): m_Hunger(hunger) // assign m_hunger value in signature
{
	cout << "A new critter has been born!" << endl;
}

int Critter::GetHunger() const
{
	return m_Hunger;
}


void Critter::SetHunger(int hunger)
{
	if (hunger < 0)
	{
		cout << "You can't set a critter's hunger to a negative number.\n\n";
	} else {
		m_Hunger = hunger;
	}
}



int main()
{
	Critter crit(5);


	cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";

	cout << "Calling SetHunger() with -1.\n";
	crit.SetHunger(-1);

	cout << "Calling SetHunger() with 9.\n";
	crit.SetHunger(9);

	cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";
	return 0;
}