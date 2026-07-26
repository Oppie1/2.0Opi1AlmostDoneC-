#include <iostream>
#include <string>
using namespace std;




int main() {

	//Instantiate s1 object of string class with a string data type "I am initialization for s1 var/obj"
	//CODE:

	cout << "I am the parameter for the s1 variable/object." << endl;
	cout << "What index number is 'am' in the word parameter in the sentence?" << endl;
	cout << "Using find() function:" << endl;

	//Output call find() with "am" as its argument on the s1 object. From left number.
	//CODE:

	//In the instance of using the "r" find -> rfind() function it starts from the right looking for the
	//first instance of "am" from that direction. The index value of "am" from the right is 21.
	cout << "\nUsing rfind() function:" << endl;

	//Output call rfind() on s1 object with "am" as the parameter.
	//Second am from right number.
	//CODE:

	cout << "\nThis is an example of swapping (swap() function) one sentence with another." << endl;

	//Instantiate obj sentenceOne of string class with string as arg. Output: "This is a var/obj
	//sentence/string that will be swapped with string/sentence two"
	//CODE:

	//Instantiate obj named sentenceTwo of string class with arg "This is the variable/object that will 
	//be swapped with sentenceOne
	//CODE:

	//Add a cout statement that displays sentence one and two (objects) on different lines.
	//CODE:

	//This is the swap() (located in string library) that we can use to perform swap.
	//Call the swap() function on the sentenceOne object with object two as the argument.
	//CODE:

	//Add a cout statement to print sentences one and two (also objects) to the screen.
	//CODE:

	cout << "\nThis is an example of taking a sentence and pulling part of sentence out (sub string)" << endl;
	cout << "This sentence will be used to pull out substring from it.\n" << endl;


	//Instantiate obj named s2 of string class with arg of "This sentence will be used to pull 
	//out substring from it.
	//CODE:

	//Output call substr() with arguments 14 and 12 on the s2 object
	//CODE:

}