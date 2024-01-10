#include "Header.h"


void Hangman::dictionary() {

	map <string, string> dictionary;

	for (auto pair : dictionary) {
		cout << pair.first;
		cout << pair.second;
	}
	

	

}


char Hangman::displayguesses() {
	char guess;

	cin >> guess;

	cout << endl;

	cout << guess << endl << endl;

	return guess;
}

int Hangman::returnRandomNumber() {
	srand(time(0));

	return (1 + rand() % 852);
}


void Hangman::displayMenu() {
	cout << "Menu: " << endl
		<< "The hangman will generate a random word." << endl
		<< "Type in one letter at a time to guess." << endl << endl;


	cout << "   ____" << endl
		<< "  |    |" << endl
		<< "  ()   |" << endl
		<< " /--/  |" << endl
		<< "  ||   |" << endl
		<< "  --   |" << endl
		<< " ______|" << endl;

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

void Hangman::displayHangman(int butter) {
	int count = butter;

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
