//Demonstrates dynamically allocating memory

#include <iostream>

using namespace std;


// declaring functions
int* intOnHeap(); //returns an int on the heap
void leak1(); //creates a memopry leak
void leak2(); // creates another memory leak

int main()
{
	int* pHeap = new int; //new operator reserves int type memory on the heap and reutnrs the address to the pointer
	*pHeap = 10; //access the memory address value and assign a value 10
	cout << "*pHeap: " << *pHeap << "\n\n";


	int* pHeap2 = intOnHeap(); //calls the function
	cout << "*pHeap2: " << *pHeap2 << "\n\n";

	cout << "Freeing memory pointed to pHeap.\n\n";
	delete pHeap;


	cout << "Freeing memory pointed to by pHeap2.\n\n";
	delete pHeap2;

	//get rid of dangling pointers
	pHeap = 0; //assigning null values to pointers
	pHeap2 = 0; //assigning nul values to pointers

	return 0;
}





int* intOnHeap()
{
	int* pTemp = new int(10); //create a new int on the heap memory and return the memory addrss
	return pTemp;
}





void leak1()
{
	int* drip1 = new int(30);
}



void leak2()
{
	int* drip2 = new int(50);
	drip2 = new int(100);
	delete drip2;
}


