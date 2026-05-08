Guess number game!!
Now before I start, I know that we have not studied these two libraries yet, but I asked ChatGPT about them and it taught me how to use them.

The idea of the program is that the computer generates a random number from 1 to 100, and the player tries to guess it within only 5 attempts.

At the beginning, I included three libraries:

The iostream library to use input and output commands such as cin and cout,
the cstdlib library because it contains random number functions such as rand,
and also the ctime library to get the current time and use it to generate a different number every time I run the program.

After that, I used:

using namespace std;

so I can write commands in a shorter way without using std.
Then I created a struct called Player.

I made this struct to store the player’s information in one place, such as the player’s name and the number of attempts used.

Inside the struct I have:

•	name stores the player’s name. 
•	attemptsUsed stores the number of attempts used. 

After that, I created a function called checkGuess.

The job of this function is to compare the number entered by the player with the secret number.

If the player guesses the correct number, it prints:
Correct

If the number is greater than required, it prints:
Lower

which means the player needs to choose a smaller number.
But if the number is smaller, it prints:
Higher

which means the player needs to choose a larger number.
Then we move to the main function main, which is the place where the execution of the program starts.

The first thing I used is:
srand(time(0));

This is used to make the random number change every time the program runs so it does not stay the same.

After that, I created the secret number:
int secret = rand() % 100 + 1;

This means the computer generates a random number from 1 to 100 and stores it inside a variable called secret.
After that, I defined a variable guess to store the player’s number,
and a variable attempts and set it to 5 because the player only has five attempts.

Then I created an object from the struct:
Player player;

to store the player’s data.
Here the program asks the player to enter their name:

cout << "Enter your name: ";
cin >> player.name;

After that, I set the number of attempts used to zero at the beginning because the player has not played yet:

player.attemptsUsed = 0;

Then I created an array called guesses with size 5.
Its purpose is to store all the numbers entered by the player so I can display them at the end.

After that, I print the start message of the game:
Guess the number (1-100)

Here I used a while loop,
and as long as the number of attempts is greater than zero, the game continues.

Inside the loop:
First, I print the remaining attempts, then the player enters a number.

After every input, I store the number inside the array:
guesses[player.attemptsUsed] = guess;

Then I increase the number of attempts used by one.
After that, I call the function checkGuess to compare the entered number with the correct number and print the result.
If the player guesses correctly:
break;

This means the loop stops directly because the game has ended.
But if the player is wrong, I decrease the number of attempts by one.
If all attempts are finished and the player did not guess the number, it prints:
You lost
and displays the correct number.
At the end, I print all the guesses entered by the player using a for loop.
Finally, I print the player’s name and the number of attempts used.
And in the last line:
return 0;
This means the program ended successfully.
In summary:
The program is a number guessing game that uses a random number, a loop for repetition, a function for comparison, a struct to store player data, and an array to save guesses.



