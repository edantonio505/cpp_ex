#include <iostream>

using namespace std;


class Creature 
{
public:
	Creature(int health = 100); //constructor function
	virtual void Greet() const = 0; //pure virtual member function
	virtual void DisplayHealth() const;

protected:
	int m_Health;
};



Creature::Creature(int health):
	m_Health(health)
{}


void Creature::DisplayHealth() const
{
	cout << "Health: " << m_Health << endl;
}






class Orc : public Creature
{
public:
	Orc(int health = 120); //constructor function
	virtual void Greet() const;
};


Orc::Orc(int health) : 
	Creature(health) //call the parent as it is the one that has the original function
{}



void Orc::Greet() const 
{
	cout << "The orc grunts hello.\n";
}




// exec
int main ()
{
	Creature* pCreature = new Orc(); //in heap memory
	pCreature->Greet();
	pCreature->DisplayHealth();
	
	return 0;
}