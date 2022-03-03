#include <iostream>


void GuessingGame(){
    int numberToGuess, guessedNumber, guessedTimes = 0;

    srand (time(NULL));

    numberToGuess = rand() % 100 + 1;

    do {

        std::cout << "Guess the number (1 to 100): " << std::endl;
        scanf ("%d",&guessedNumber);
        guessedTimes++;

        if (numberToGuess < guessedNumber){
            std::cout << "The number you are guessing is lower, please try again" << std::endl;

        }
        else if (numberToGuess > guessedNumber){
            std::cout << "The number you are guessing is higher, please try again" << std::endl;
        }

    }while(numberToGuess != guessedNumber);

    std::cout << "Congratulations you where right with the number: " << guessedNumber << " it took you " << guessedTimes <<
    " to guess the number" << std::endl;

}

int main() {

    GuessingGame();

    return 0;
}
