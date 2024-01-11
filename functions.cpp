#include "Header.h"


void Hangman::dictionary() {

	map <string, string> dictionary;

	for (auto pair : dictionary) {
		cout << pair.first;
		cout << pair.second;
	}
	
}


void Hangman::Compare(char guess) {
	int I = 0;

	for (int i = 0; i < line.length(); i++) {
		if (guess == charArray[i]) {
			charEmpty[i] = guess;
			I++;
		}
	}


	if (I == 0) {
		displayGuessArray[count] = guess;
		count++;
	}
	

}

void Hangman::reset() {

	count = 0;

	for (int i = 0; i < sizeof(charArray); ++i) {
		displayGuessArray[i] = ' ';
	}

}

bool Hangman::CheckWin() {

	int n = sizeof(charEmpty);

	for (int i = 0; i < n; ++i) {
		if (charEmpty[i] == '-') {
			return true;
		}
	}

	if (count == 10) {
		return false;
	}

		return false;

}


void Hangman::displayguesses() {

	int n = sizeof(displayGuessArray);

	for (int i = 0; i < n; ++i) {
		cout << displayGuessArray[i] << " ";
	}

}

int Hangman::returnRandomNumber() {
	srand(time(0));

	return (1 + rand() % 852);
}


void Hangman::displayMenu() {
	cout << "Menu: " << endl
		<< "The hangman will generate a random word." << endl
		<< "Type in one letter at a time to guess." << endl << endl;

}

void Hangman::GenerateWord(ifstream &file) {

	for (int i = 0; i < returnRandomNumber(); ++i) {
		getline(file, line);
	}

	strcpy_s(charArray, line.c_str());

	for (int i = 0; i < line.length(); i++) {
		charEmpty[i] = '-';
	}
}

void Hangman::displayWord() {

	cout << "       ";

	for (int i = 0; i < line.length(); i++) {
		cout << charEmpty[i];
	}
}

void Hangman::displayHangman() {
	

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
