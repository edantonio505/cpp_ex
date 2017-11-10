#include <iostream>

using namespace std;

class Critter 
{
    public:
        static int s_Total; //static member declaration
                            // total number of critters in existence.

        Critter(int hunger = 0); //Constructor function 
        static int GetTotal();

    private:
        int m_Hunger;
};



int Critter::s_Total = 0; //static member variable initialization

Critter::Critter(int hunger): m_Hunger(hunger)
{
   cout << "A critter has been born!" << endl;
   ++s_Total;
}


int Critter::GetTotal()
{
    return s_Total;
}





// main function 
int main()
{
    cout << "The total number of critters is: ";
    cout << Critter::s_Total << "\n\n";

    Critter crit1,crit2,crit3; //instatiate 3 critters

    cout << "\nThe total number of critters is: ";
    cout << Critter::GetTotal() << "\n";

    return 0;
}