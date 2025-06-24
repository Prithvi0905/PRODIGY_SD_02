# PRODIGY_SD_02
# Number Guessing Game (C++)

## Overview

This is a simple console-based number guessing game implemented in C++. The program generates a random number between 1 and 100, and the player tries to guess it. After each guess, the game provides feedback whether the guess is too low, too high, or correct. It also tracks the number of attempts taken to guess the number.

## Features

- Generates a random number between 1 and 100 each round.
- Accepts user input for guesses with validation to ensure valid whole numbers.
- Provides real-time feedback: "Too low", "Too high", or "Correct".
- Counts and displays the number of attempts made for each game.
- Allows the player to play multiple rounds until they decide to quit.
- Handles invalid inputs gracefully, prompting the user to enter a valid number.

## How it Works

1. The program initializes a random number between 1 and 100.
2. The player enters guesses, which the program validates.
3. After each guess, the program tells the player if the guess is too low, too high, or correct.
4. When the player guesses correctly, the program displays the number of attempts taken.
5. The player is then prompted to play again or exit.

## Code Structure

- `playGame` function: Encapsulates the core game logic, including random number generation, input validation, and feedback.
- `main` function: Controls the game loop, allowing repeated plays and handling user choice.

## Example Interaction

Guess a number between 1 and 100:
Enter your guess: 50
Too low! Try again.
Enter your guess: 75
Too high! Try again.
Enter your guess: 62
Correct! You guessed the number in 3 attempts.
Play again? (y/n): n
Thanks for playing!
