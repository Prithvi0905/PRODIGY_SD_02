#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

void playGame() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int numberToGuess = std::rand() % 100 + 1;
    int attempts = 0;
    int guess = 0;

    std::cout << "Guess a number between 1 and 100:\n";

    while (true) {
        std::cout << "Enter your guess: ";
        if (!(std::cin >> guess)) {
            std::cout << "Please enter a valid whole number.\n";
            std::cin.clear(); // clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            continue;
        }

        attempts++;

        if (guess < numberToGuess) {
            std::cout << "Too low! Try again.\n";
        }
        else if (guess > numberToGuess) {
            std::cout << "Too high! Try again.\n";
        }
        else {
            std::cout << "Correct! You guessed the number in " << attempts << " attempts.\n";
            break;
        }
    }
}

int main() {
    char choice;

    do {
        playGame();

        std::cout << "Play again? (y/n): ";
        std::cin >> choice;

        // clear input buffer to avoid issues
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Thanks for playing!\n";
    return 0;
}
