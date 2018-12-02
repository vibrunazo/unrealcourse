#include <iostream>
#include <string>
using namespace std;

void PrintIntro();
string GetGuess();
void PrintGuess(string);

// the entry point for our app
int main() {

	PrintIntro();
	
	string Guess = "";
	
	Guess = GetGuess();
	PrintGuess(Guess);

	Guess = GetGuess();
	PrintGuess(Guess);

	return 0;
}

// introduce the game
void PrintIntro() {
	constexpr int WORLD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows" << endl;
	cout << "Can you guess the " << WORLD_LENGTH << " letter isogram I'm thinking of?\n\n";
	return;
}

// get a guess from the player
string GetGuess() {
	string Guess = "";
	cout << "Enter your guess\n";
	getline(cin, Guess);
	return Guess;
}

// repeat the guess back to them
void PrintGuess(string guess)
{
	cout << "your guess was: ";
	cout << guess << endl << endl;
}
