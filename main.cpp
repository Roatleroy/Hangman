#include "Header.h"



int main() {
	

	ifstream in("Words.txt");

	char guess;
	string repeat = "Y";


	while (repeat == "y" || repeat == "Y") {

		Hangman Man;
		Man.GenerateWord(in);

		while (Man.CheckWin()) {

			Man.displayMenu();
			cout << endl;
			Man.displayHangman();
			cout << endl;
			Man.displayWord();
			cout << endl;
			cout << endl;
			Man.displayguesses();
			cout << endl;
			cout << endl;
			cout << "   ";
			cin >> guess;
			Man.Compare(guess);
			system("CLS");
		}

		cout << "Would you like to play again?: (Type y or Y for yes)" << endl;
		cin >> repeat;
		system("CLS");
	}

	in.close();

	return 0;
}