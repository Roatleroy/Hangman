#include "iostream"
#include <vector>
#include <string>
#include <fstream>
#include "iomanip"
#include <map>
#include <cstdlib>

using namespace std;

class Hangman {
public:

	// Holds values retrieved from the words text folder
	void dictionary();

	// Displays on screen the instructions for the hangman game
	void displayMenu();

	// Retrieves a random word from the text file and generates its equvilent in ULI's
	void GenerateWord(ifstream &file);

	// Displays the hangman and adds body parts as user guesses wrong
	void displayHangman(int count);

	// Displays the users to the side when guessed wrong and on the ULI's when right
	char displayguesses();

	// Returns Random number based on time for random word retrieval 
	int returnRandomNumber();



private:
	string Man[10] = {"(", ")", "/", "-", "-", "/", "|", "|", "-", "-"};
	char charArray[13];
	char charEmpty[13];
	string line;
};
