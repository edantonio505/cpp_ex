#include <iostream>
#include <stdlib.h>
#include <string>


using namespace std;


int main(int argc, char* argv[])
{
	if(argc < 4){
		cout << "parameters missing" << endl;
	}
	else {

		int number1 = atoi(argv[1]);
		int number2 = atoi(argv[2]);
		string command = argv[3];
		int result;

		if(command == "add"){
			result = number1 + number2;
		}

		else if (command == "sub"){
			result = number1 - number2;
		}

		else if (command == "mul"){
			result = number1 * number2;
		}

		else if(command == "div"){
			result = number1 / number2;
		}
		cout << "The result is: " << result << endl;
	}

	return 0; 
}