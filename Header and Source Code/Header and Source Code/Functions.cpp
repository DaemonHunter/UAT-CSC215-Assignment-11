#include <iostream>
#include <string>
#include "Functions.h"

using namespace std;

string GetTextFromUser(string prompt) // Declare and initialize the string function GetTextFromUser
{
	string userTextString; // Declare and initialize the string userTextString
	cout << prompt;        // Output the string prompt that has been passed to it 
	cin >> userTextString; // Receive the user input and store it as a variable
	return userTextString; // Return to the main function with the result of running this function
}

int GetNumberFromUser(string prompt)
{
	int userIntegerString;          // Declare and initialize the string userIntegerString
	cout << prompt;                 // Output the string prompt that has been passed to it 
	cin >> userIntegerString;       // Receive the user input and store it as a variable
	return userIntegerString;       // Return to the main function with the result of running this function

}

string GetSpeciesFromUser(string prompt) // Declare and initialize the string function GetSpeciesFromUser
{
	string userFavSpecies; // Declare and initialize the string userTextString
	cout << prompt;        // Output the string prompt that has been passed to it 
	cin >> userFavSpecies; // Receive the user input and store it as a variable
	return userFavSpecies; // Return to the main function with the result of running this function
}