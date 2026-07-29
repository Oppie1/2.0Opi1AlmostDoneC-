#include <iostream>
#include <fstream>
using namespace std;


//Declare int function prototype "getWhatTheyWant()" with no parameters that will return user choice.
//Code:

//Declare void function prototype displayItems() with int var as a parameter to the screen.
//CODE:


int main() {

	cout << "Game Items Selection and Their Current Power Value" << endl;
	cout << "Enter your selection 1-3. Enter 4 to quit program\n" << endl;

	//Declare uninitialized int var whatTheyWant that will store selection.
	//CODE:

	//Assign whatTheyWant variable to function call getWhatTheyWant() with no arguments.
	//CODE:

	//Create while loop  with condition whatTheyWant variable DOES NOT equal 4.
	//CODE:

	//Create nested switch statement with condition whatTheyWant as parameter.
	//CODE:

	//Create a case 1: displaying items when the user selects 1. And a break statement to prevent fall through.
	//CODE:

	//Create another case with displayItems() that runs when user selects 2 and a break to prevent fall through.
	//CODE:

	//Create third case that uses displayItems() when user selects 3 and use break to prevent fall through
	//CODE:

	//Assign the same whatTheyWant variable to getWhatTheyWant() call with no arguments. This is within
	//the while loop so will keep running until user selects 4 (sentinel control).
	//CODE:
}


//Define getWhatTheyWant(). It will have an int var of choice. A list displaying to user options choices 1,2 and 3 
//as well as what they are (plain items, helpful items, harmful items. Then cin statement for users choice.
//The return of choice which will return whatever choice is to the function call getWhatTheyWant();
//CODE:


//Add 3 cout statements that display number and corresponding item types to screen (plain, helpful, harmful) to the screen.
//CODE:


//Input user choice and stores it in the local variable.
//CODE:

//Create a return that returns the users choice to main.
//CODE:

//Define the void displayItems() function with an integer variable as the parameter.
//CODE:

		//So here the "objectFile" is the object with parameter (set equal to) Items.txt. 
		//Through that object we can access the name and power that is located in the file.

		//Instantiate an object named objectFile of the ifstream class with "items.txt" as its argument
		//CODE:

		//Declare an uninitialized string var name that will store item names read from file.
		//CODE:

		//Declare uninitialized double var named power that will store item power read from file.
		//CODE:

		//Create if statement with condition user selected 1 x==1. Then nested while loop that will read in
		//name and power from objectFile. Within the while loop with a nested if condition if the power from the 
		//file equals 0. Using if statement output information from file in proper formatting 
		//to match blank spaces in txt file.
		//CODE:

		//Create while loop nested in if condition that takes information from txt file name/power and 
		//stores it in the object objectFile.
		//CODE:

		//Create an if statement that if the power is equal to 0 in the text file then those items will print to screen.
		//CODE:

		//Output statement properly formatted with space in between to display name and power.
		//CODE:

		//Create if condition for when user selects 2. Then nested while loop to extract data name and power from 
		//object objectFile. Then nested if statement within while loop that takes data and test for items that 
		//have more that 0 power. Then add cout statement to display properly formatted information to the screen.

			//Create if condition if the user (x) selects 2.
			//CODE:

			//Create nested while loop with condition of retrieving name and power information from objectFile.
			//CODE:

			//Create a nested if statement to test if power isgreater than 0.
			//CODE:

			//From the file it prints the name of the object and its power value to the screen. This
			//would be a positive item with 1 or greater power. Structure output statement
			//as you want data to be displayed to screen. Here we display a line of code with
			//a name, a space and power to screen

			//Output statement with proper formation to print information to the screen.
			//CODE:

			//Create if condition when user selects 3. Then nested while loop with condition of power and name data
			//from objectFile (Items.txt) bringing it into program. Then with if condition within while loop tests if
			//items power is less than 0. Output formatted information to the screen.
			//CODE:

			//Create while loop that brings power and name data from objectFile into local vars name and power for storage.
			//CODE:

			//Create an if condition that will test of those items brought in how many are less than 0.
			//CODE:

			//Output statement that properly formats for name and power storage variables.
			//CODE:
