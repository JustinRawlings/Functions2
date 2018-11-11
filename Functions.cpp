//Functions
//Justin Rawlings
//11/2/2018
//CSC215


#include "pch.h"
#include <string>
#include <iostream>
#include "Functions.h"

using namespace std;

int main() //Main program.
{
	cout << "Welcome to a test of functions in C++. \n\n";
	cout << "Enter the text and numbers asked. \n";

	string name = getTextFromUser("Please tell my your name: "); //User Name.
	string noun = getTextFromUser("Please enter a city name: "); //City name.
	int number = getNumbersFromUser("Enter a number: "); //Number for the story.
	string element = getTextFromUser("Enter an element from the 5 elements of myth:"); //Elements from the 5 elements. (Water, Earth, Air, Fire, and Metal.)

	tellStory(name, noun, number, element); //Initiates the tellStory function.

	return 0;
}