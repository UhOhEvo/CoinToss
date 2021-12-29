// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: e.g. LAB3_1
Project Name:
File Name: .cpp
Description: (provide a short synopsis of what is accomplished in this particular file)
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: (identify the source of any code obtained from another student or the internet)
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here
int coinToss();

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{

	// Local variable declarations placed here
	int coin; // holds heads or tails
	int tosses; // holds user input for number of tosses
	int count;


	srand(time(0)); // seed for RNG, unique each time

	// Inform user what program does
	cout << "This program will toss a coin however many number of times and tell you the result.\n"
		<< endl;

	// Prompt user to enter data needed by the program
	cout << "How many tosses should I make? ";
	cin >> tosses;

	// A software algorithm would typically be executed after all data has been input
	
	coin = coinToss();
	
	for (count = 0; count < tosses; count++)
	{
		if (coin == 1)
		{
			cout << (count + 1) << "\t\theads\n";
			coin = coinToss();

		}
		else
		{
			cout << (count + 1) << "\t\ttails\n";
			coin = coinToss();

		}

		coin = coinToss();
	}

	// Program output done at end of program


	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// Returns a value to the calling program
	return(0);

}

int coinToss() 
{
	int random;

	random = rand() % 2 + 1; // random number generator

	return random;
}


// PROOF
// Program output copied into the below comment section
/*

*/