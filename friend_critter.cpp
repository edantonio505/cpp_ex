#include <iostream>
#include <string>



using namespace std;



// Class declaration
class Critter
{
	// make following global functions friends of the Critter class
	friend void Peek(const Critter& aCritter);
	friend ostream& operator<<(ostream& os, const Critter& aCritter);

public:
	Critter(const string& name = "");//Constructor function

private:
	string m_Name;
};



//class initilization
// Initialize constructor function 
Critter::Critter(const string& name):
	m_Name(name)
{}

//end of class declaration and initialization








// Global friend functions
// new functions declarations --- not part of the class
void Peek(const Critter& aCritter);
ostream& operator<< (ostream& os, const Critter& aCritter);








int main()
{
	// Object instatiation
	Critter crit("Poochie");

	cout << "Calling Peek() to access crit's private data member, m_Name:\n";
	Peek(crit);

	cout << "\nSending crit object to cout with the << operator:\n";
	cout << crit;

	return 0;
}



//global friend function that can access all of a Critter object's members

// funtinos initialization
void Peek(const Critter& aCritter)
{
	cout << aCritter.m_Name << endl;
}





//global friend function that can access all of Critter object's member
//overloads the  << operator so you can send a Critter object cout 
ostream& operator<<(ostream& os, const Critter& aCritter)
{
	os << "Critter Object - ";
	os << "m_Name: " << aCritter.m_Name << endl;
	return os;
}


