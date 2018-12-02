#include <iostream>
#include <string>
using namespace std;

int main();

void PlayGame();
void PrintIntro();
string GetGuess();
void PrintGuess(string);

// the entry point for our app
int main() {

	PrintIntro();
	PlayGame();

	return 0;
}

// main game loop
void PlayGame()
{
	string Guess = "";
	constexpr int TURNS = 5;
	for (int i = 0; i < TURNS; i++)
	{
		Guess = GetGuess();
		PrintGuess(Guess);
	}
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
