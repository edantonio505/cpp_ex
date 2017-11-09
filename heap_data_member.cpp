#include <iostream>
#include <string>

using namespace std;

class Critter 
{
public:
	Critter(const string& name = "", int age = 0);//constructor function
	~Critter(); // destructor prototype
	Critter(const Critter& c); //copy constructor prototype
	Critter& operator=(const Critter& c);  //overloaded assignment op

	//doesnt need the Critter::

    void Greet() const; 

private:
	string* m_pName; //pointer to a memory location
	int m_Age;	
};


Critter::Critter(const string& name, int age) //call constructor function normaly
{
	cout << "Constructor called\n";

	m_pName = new string(name); //asigned to heap memory alocated memory
 	m_Age = age;
}



Critter::~Critter() //define destructor
{
	cout << "Destructor called\n";
	delete m_pName; //destroys memory alocation
}	



Critter::Critter(const Critter& c) //copy constructor definition //This happebns in case another object of the same type is provided during construction
{	
	cout << "Copy Constructor called\n";
	m_pName = new string(*(c.m_pName)); //copies the value of the heap memory location for m_pName and creates a new memmory alocatin oin heap with the same value
	m_Age = c.m_Age;
}



Critter& Critter::operator= (const Critter& c) //overloadd asignment operator op def
{
	cout << "Overloaded assignment operator called\n";


	if(this != &c)
	{
		delete m_pName;
		m_pName = new string(*(c.m_pName)); //copies teh value of the heap memory location type string and saves it in a new locationin heap memory type string
		m_Age = c.m_Age;
	}
	return *this;
}	


void Critter::Greet() const
{
	cout << "I'm " << *m_pName << " and I'm " << m_Age << " years old. ";
	cout << "&m_pName: " << &m_pName << endl; //returns a memory address reference
}









/// declare new functions here
void testDestructor();
void testCopyConstructor(Critter aCopy);
void testAssignmentOp();



// execute
int main()
{
	testDestructor();
	cout << endl;

	Critter crit("Poochie", 5);

	crit.Greet();

	testCopyConstructor(crit);
	crit.Greet();
	cout << endl;


	testAssignmentOp();
	return 0;
}







void testDestructor()
{
	Critter toDestroy("Rover", 3); //instantiate a new critter called toDestroy with name Rover and age 3
	toDestroy.Greet();
	//This Critter gets destroyed at the end of this function's scope
}





void testCopyConstructor(Critter aCopy)
{	

	// This critter is copied because it is being passed to the function and the function copies it instead of referencing the old critter

	aCopy.Greet();
}



void testAssignmentOp()
{
	Critter crit1("crit1", 7);
	Critter crit2("crit2", 9);
	crit1 = crit2;
	crit1.Greet();
	crit2.Greet();

	cout << endl;

	Critter crit3("crit", 11);
	crit3 = crit3;
	crit3.Greet();
}