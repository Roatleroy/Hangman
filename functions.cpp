#include "Header.h"


//string Hangman::dictionary() {

//}
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
void Hangman::GenerateWord() {

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