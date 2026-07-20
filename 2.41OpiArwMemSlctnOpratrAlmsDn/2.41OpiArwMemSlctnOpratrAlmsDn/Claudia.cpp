#include<iostream>
#include "claudia.h"
using namespace std;



//Define the default constructor with no parameters.
//CODE:
Claudia::Claudia() {


}

//Define the void member function with no parameters outputs it is printing from the .cpp file
//CODE:
void Claudia::iAmMemberFunction() {

	//Output descriptive message to screen
	//CODE:
	cout << "I am being printed from the .cpp file from the function prototype in .h" << endl;
}