# Guess number game.


Now before I start, I know that we have not studied these two libraries yet, but I asked ChatGPT about them and it taught me how to use them.

The idea of the program is that the computer generates a random number from 1 to 100, and the player tries to guess it within only 5 attempts.





# Libraries Used

At the beginning, I included three libraries:

iostream for input and output
cstdlib for random number generation
ctime to change the random number each time the program runs



# Code Explanation

I created a struct Player to store the player’s name and attempts used.
Also, I made a function called checkGuess to compare the player’s input with the secret number and display:




Correct if the guess is right
Higher if the guess is too small
Lower if the guess is too large


The program uses a while loop to repeat until the player guesses correctly or runs out of attempts.
All guesses are stored in an array and displayed at the end with the player’s information.







