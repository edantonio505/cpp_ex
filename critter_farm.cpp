#include <iostream>
#include <string>
#include <vector>

using namespace std;


// Critter Class
class Critter
{
public:
	Critter(const string& name = ""); //declare constructor function
	string GetName() const; //Declare member function or method GetName
private:
	string m_Name;
};


// initialize ccontructor function
Critter::Critter(const string& name):
	m_Name(name)
{}


//initialize GetName
inline string Critter::GetName() const // return a const so that the name is immutable
{
	return m_Name;
}
// end Critter class







// Farm Class
class Farm
{
public:
	Farm(int spaces = 1);//constructor function
	void Add(const Critter& aCritter);
	void RollCall() const;


private:
	vector<Critter> m_Critters;
};


// Initialize constructor function
Farm::Farm(int spaces)
{
	m_Critters.reserve(spaces); //the reserve method comes from the vector, it reserve the number of memory blocks.
}


void Farm::Add(const Critter& aCritter)
{
	m_Critters.push_back(aCritter);
}


void Farm::RollCall() const
{
	for (vector<Critter>::const_iterator iter = m_Critters.begin(); iter != m_Critters.end(); ++iter)
	{
		cout << iter->GetName() << " here.\n";
	}
}
/// end farm Class










//main function 
int main()
{
	Critter crit("Poochie");


	cout << "My critter's name is " << crit.GetName() << endl;

	cout << "\nCreating critter farm.\n";

	Farm myFarm(3);

	cout << "\nAdding three critters to the farm.\n";
	myFarm.Add(Critter("Moe"));
	myFarm.Add(Critter("Larry"));
	myFarm.Add(Critter("Curly"));

	cout << "\nCalling Roll...\n";
	myFarm.RollCall();
 	return 0; 
}



