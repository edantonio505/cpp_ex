#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	int range;
	if(argc < 2){
		cout << "Mising arguments" << endl;
	} else {
		range = atoi(argv[1]);

		for(int a = 0; a <= range; a++)
		{
			cout << "Testing " << a << " times ..." << endl;
		}		
	}	
	return 0;
}
