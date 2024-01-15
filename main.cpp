#include "Header.h"



int main() {
	

	ifstream in("Words.txt");

	
	string repeat = "Y";
	string hey;
	returns bob;
	
	while (repeat == "y" || repeat == "Y") {

			hey = bob.WordReturn(in);

			Hangman Man(hey);

			char guess;

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