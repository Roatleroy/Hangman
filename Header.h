#include "iostream"
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <stdlib.h> 
#include <algorithm>
#include <cctype>
#include <locale>

using namespace std;

class returns {
public: 
	
	// Retrieves a random word from the text file and generates its equvilent in ULI's
	string WordReturn(ifstream& file);
	
	// Returns Random number based on time for random word retrieval 
	int returnRandomNumber();
};

class Hangman {
public:

	// Displays on screen the instructions for the hangman game
	void displayMenu();

	// Displays the hangman and adds body parts as user guesses wrong
	void displayHangman();

	// Displays the users to the side when guessed wrong and on the ULI's when right
	void displayguesses();

	// Displays empty slots to user on screen
	void displayWord();

	// Checks if user imput matches any position in the string and replaces
	// The same position on the empty array with the guess
	void Compare(char guess);

	// Checks if users count is more than ten or if any postion in the string has a ULI.
	// If neither its a win
	bool CheckWin();


	Hangman (const string& word) 
		: charArray(word), charEmpty(charArray.size(), '-') {

		for (int i = 0; i < 10; ++i) {
			displayGuessArray[i] = '0';
		}
		count = 0;
	}

private:
	string charArray;
	string charEmpty;

	char displayGuessArray[10];
	int count = 0;
};
