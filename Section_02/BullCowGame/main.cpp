#include <iostream>
#include <string>
using namespace std;

int main() {
	constexpr int WORLD_LENGTH = 5;

	// introduce the game
	cout << "Welcome to Bulls and Cows" << endl;
	cout << "Can you guess the " << WORLD_LENGTH << " letter isogram I'm thinking of?\n";

	// get a guess from the player
	string Guess = "";
	// cin >> Guess;
	getline(cin, Guess);

	// repeat the guess back to them
	cout << "your guess was: ";
	cout << Guess;


	return 0;
}