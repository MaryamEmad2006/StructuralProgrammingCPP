#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


struct Player {
    string name;
    int attemptsUsed;
};


void checkGuess(int guess, int secret) {
    if (guess == secret) {
        cout << "Correct"<<endl;
    }
    else if (guess > secret) {
        cout << "Choose Lower"<<endl;
    }
    else {
        cout << "Choose Higher"<<endl;
    }
}

int main() {
    srand(time(0));

    int secret = rand() % 100 + 1;
    int guess;
    int attempts = 5;


    Player player;
    cout << "Enter your name: ";
    cin >> player.name;
    player.attemptsUsed = 0;


    int guesses[5];

    cout << "Guess the number (1 - 100)"<<endl;

    while (attempts > 0) {
        cout << "Attempts left: " << attempts << endl;
        cin >> guess;

        guesses[player.attemptsUsed] = guess;
        player.attemptsUsed++;

        checkGuess(guess, secret);

        if (guess == secret) {
            break;
        }

        attempts--;
    }

    if (guess != secret) {
        cout << "You lost! The number was : " << secret << endl;
    }


    cout <<endl<< "Your guesses were: ";
    for (int i = 0; i < player.attemptsUsed; i++) {
        cout << guesses[i] << " ";
    }

    cout <<endl<< "Player: " << player.name << endl;
    cout << "Attempts used: " << player.attemptsUsed << endl;

    return 0;
}

