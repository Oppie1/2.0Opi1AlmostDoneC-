#include <iostream>
using namespace std;



//Declare class named Enemy
//CODE:

//Declare protected access specifier.
//CODE:

//Declare uninitialized int var to hold attack power.
//CODE:

//Declare public access specifier.
//CODE:

//Declare constructor of Enemy class that sets attack power to 1 - use member initializer "list" syntax
//CODE:

//Declare void function to SET attack power() with int parameter and var. Assign attack power to that var
//CODE:

//Use virtual keyword with void attack() to output a message that is default attack
//and that displays the attack power damage to the screen.
//CODE:

//Declare a class EnemyZombie
//CODE:

//Declare a public access specifier.
//CODE:

//Declare a virtual void attack() set to 0.
//CODE:

//This is a PURE virtual function (notice the " = 0). It MUST be overwritten by derived class 
//or will get a compile error. 

//Declare derived class of base class Enemy named Ninja.
//CODE:

//Declare public access specifier.
//CODE:

//Declare void attack that will output Ninja attack.
//CODE:

//Declare derived class Monster of base class Enemy
//CODE:

//Declare a public access specifier to the screen.
//CODE:

//Declare void attack() that outputs attack message and damage to the screen.
//CODE:

//Declare derived class Goblin of base class Enemy.
//CODE:

//Declare public access specifier.
//CODE:

//Practice by uncommenting this when you finish program:
//void attack() {
//cout << "Goblin attack! " << attackPower << " damage \n";

//	}

//Declare derived class Orc from Base class EnemyZombie
//CODE:

//Declare public access spec
//CODE:

//Because attack() is PURE virtual function in EnemyZ, we MUST override here. If we don't write 
//this function the program wont compile - we'll get an error.

//Declare a void attack that just outputs Orc attack to screen to do the override.
//CODE:


int main() {

	//Create 5 objects representing the characters (including Enemy) to screen using first letter as objects.
	//CODE:

	//Use Enemy pointers to enemy1 2 and 3, 4,5 with memory locations of each of character objects.
	//Play with concept using Enemy and EnemyZombie pointer enemy 4,5 for the orc object as well.
	//CODE:

	//Use the arrow mem selection operator to provide arguments to the set attack power function for enemy 1 and 2
	//CODE:

	//enemy3->setAttackPower(5);//We commented this out so goblin keeps the default 0 attack power.

	//Use arrow mem selection operator with enemy3 to provide arg setAttackPower() to set DEFAULT attack to 5
	//CODE:
	//enemy3->setAttackPower(5);//We commented this out so goblin keeps the default 1 attack power

	//Use object e to set the default Enemy attack power to a number.
	//CODE:

	//Call all character attacks using their objects.
	//CODE:

	//Goblin will show "I am default attack 0 damage" s we didn't set a custom attack power 
	//Call the goblin attack.
	//CODE:

	//Use pointer var with arrow mem selection operator to call orc attack. Can use o.attack() format as well.
	//CODE:

}