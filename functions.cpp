#include "Header.h"

//

//________________________________________________________________________________
// ERROR: When player inputs last correct guess into charEmpty it can't push it;
// Runtime error saftey kicks in. FIX!!
void Hangman::Compare(char guess) {
	int I = 0;


	for (size_t i = 0; i < charArray.size(); i++) {
	
		if (charArray[i] == guess) {
			charEmpty[i] = guess;
			I++;
		}
	}


	if (I == 0) {
		displayGuessArray[count] = guess;
		count++;
	}
	
}
//__________________________________________________________________________

bool Hangman::CheckWin() {

	int n = sizeof(charEmpty);

	if (count == 10) {
		cout << "    Fail!!   The word was: " << charArray;
		cin.ignore();
		cin.ignore();
		guessArray();
		return false;
		}

	for (size_t i = 0; i < n; ++i) {
		if (charEmpty[i] == '-') {
			return true;
		}
	}

	cout << "     YOU WIN!!!!   ";
	cin.ignore();
	guessArray();
		return false;

}



void Hangman::displayguesses() {

	int n = sizeof(displayGuessArray);

	cout << "    ";

	for (int i = 0; i < n; ++i) {
		cout << displayGuessArray[i] << " ";
	}

}

int returns::returnRandomNumber() {
	srand(time(0));

	return (1 + rand() % 852);
}

string returns::WordReturn(ifstream& file) {

	int P = returnRandomNumber();

	string carrey;

	for (int i = 0; i < P; ++i) {
		getline(file, carrey);
	}

	return carrey;

}

void Hangman::displayMenu()
{ 
	cout << "Menu: " << endl
		<< "The hangman will generate a random word." << endl
		<< "Type in one letter at a time to guess." << endl << endl;

}

void Hangman::displayWord() {

	cout << "       ";

	for (int i = 0; i < charArray.size(); i++) {
		cout << charEmpty[i];
	}
}



void Hangman::displayHangman() {

	string Man[10] = { "(", ")", "/", "-", "-", "/", "|", "|", "-", "-" };

	if (count == 0) {
		cout << "          ____" << endl
			<< "         |    |" << endl
			<< "         " << "     |" << endl
			<< "        " << "      |" << endl
			<< "         " << "     |" << endl
			<< "         " << "     |" << endl
			<< "        ______|" << endl;
	}
	if (count == 1) {
		cout << "          ____" << endl
			<< "         |    |" << endl
			<< "         " << Man[0] << "    |" << endl
			<< "        " << "      |" << endl
			<< "         " << "     |" << endl
			<< "         " << "     |" << endl
			<< "        ______|" << endl;
	}
	if (count == 2) {
		cout << "          ____" << endl
			<< "         |    |" << endl
			<< "         " << Man[0] << Man [1] << "   |" << endl
			<< "        " << "      |" << endl
			<< "         " << "     |" << endl
			<< "         " << "     |" << endl
			<< "        ______|" << endl;
	}
	if (count == 3) {
		cout << "          ____" << endl
			<< "         |    |" << endl
			<< "         " << Man[0] << Man[1] << "   |" << endl
			<< "        " << Man [2] << "     |" << endl
			<< "         " << "     |" << endl
			<< "         " << "     |" << endl
			<< "        ______|" << endl;
	}
	if (count == 4) {
		cout << "          ____" << endl
			<< "         |    |" << endl
			<< "         " << Man[0] << Man[1] << "   |" << endl
			<< "        " << Man[2] << Man[3] << "    |" << endl
			<< "         " << "     |" << endl
			<< "         " << "     |" << endl
			<< "        ______|" << endl;
	}
	if (count == 5) {
		cout << "          ____" << endl
			<< "         |    |" << endl
			<< "         " << Man[0] << Man[1] << "   |" << endl
			<< "        " << Man[2] << Man[3] << Man[4] << "   |" << endl
			<< "         " << "     |" << endl
			<< "         " << "     |" << endl
			<< "        ______|" << endl;
	}
	if (count == 6) {
		cout << "          ____" << endl
			<< "         |    |" << endl
			<< "         " << Man[0] << Man[1] << "   |" << endl
			<< "        " << Man[2] << Man[3] << Man[4] << Man[5] << "  |" << endl
			<< "         " << "     |" << endl
			<< "         " << "     |" << endl
			<< "        ______|" << endl;
	}
	if (count == 7) {
		cout << "          ____" << endl
			<< "         |    |" << endl
			<< "         " << Man[0] << Man[1] << "   |" << endl
			<< "        " << Man[2] << Man[3] << Man[4] << Man[5] << "  |" << endl
			<< "         " << Man[6] << "    |" << endl
			<< "         " <<  "     |" << endl
			<< "        ______|" << endl;
	}
	if (count == 8) {
		cout << "          ____" << endl
			<< "         |    |" << endl
			<< "         " << Man[0] << Man[1] << "   |" << endl
			<< "        " << Man[2] << Man[3] << Man[4] << Man[5] << "  |" << endl
			<< "         " << Man[6] << Man[7] << "   |" << endl
			<< "         " << "     |" << endl
			<< "        ______|" << endl;
	}
	if (count == 9) {
		cout << "          ____" << endl
			<< "         |    |" << endl
			<< "         " << Man[0] << Man[1] << "   |" << endl
			<< "        " << Man[2] << Man[3] << Man[4] << Man[5] << "  |" << endl
			<< "         " << Man[6] << Man[7] << "   |" << endl
			<< "         " << Man[8] << "    |" << endl
			<< "        ______|" << endl;
	}
	if (count == 10) {
		cout << "          ____" << endl
			<< "         |    |" << endl
			<< "         " << Man[0] << Man[1] << "   |" << endl
			<< "        " << Man[2] << Man[3] << Man[4] << Man[5] << "  |" << endl
			<< "         " << Man[6] << Man[7] << "   |" << endl
			<< "         " << Man[8] << Man[9] << "   |" << endl
			<< "        ______|" << endl;
	}
   
}
