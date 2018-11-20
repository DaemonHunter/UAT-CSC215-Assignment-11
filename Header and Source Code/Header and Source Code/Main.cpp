#include <iostream>
#include <string>
#include "Functions.h"

using namespace std;



int main()
{
	string response_1 = GetTextFromUser("What is your favorite color? \n"); // Save the string response_1 as the result of GetTextFromUser("What is your favorite color? ")
	int response_2 = GetNumberFromUser("What is your favorite number? \n"); // Save the integer response_2 as the result of GetNumberFromUser("What is your favorite number? ")
	string favorite_species = GetSpeciesFromUser("What is your favorite animal species? \n"); // Save the string favorite_species as the result of GetSpeciesFromUser("What is your favorite animal species? ");
	cout << "\nYour favorite color is " << response_1 << ", and your favorite number is " << response_2 << "." << endl;
	cout << "Your favorite species of animals is also " << favorite_species << "." << endl;
	return 0; // Return Statement
}