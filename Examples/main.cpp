#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>

void fibonacci(int Count)
{
    long int value = 1;  // Initializing variables
    long int previous = 1;
    long int prePrevious = 0;

    for(int i = 0; i < Count; i++)  // Looping the number of numbers we want to print
    {
        std::cout << value << std::endl;  // Printing the current number
        value = prePrevious +  previous;  // Generating the next number
        prePrevious = previous;  // Shifting the value of the previous-previous variable to the previous variable
        previous = value;  // Shifting the value of the value variable to the previous variable
    }
}

void dicium(int Count)
{
    srand(time(NULL));  // Seeding the rand() function

    int diceLeft = Count;  // Setting the number of dice left to the original number of dice

    std::cout << diceLeft << std::endl;  // printing how many dice we start out with to the console

    while(diceLeft > 10)  // We will continue to simulate dicium decay while there are more than 10 dice left
    {
        int NumberRolls = diceLeft;  // It is necessary to know how many times we need to roll a die

        for(int i = 0; i < NumberRolls; i++)
        {
            int dice_dotts = (rand() % 6) + 1;  // Simulating the dice roll. Will return 1, 2, 3, 4, 5 or 6
            if(dice_dotts == 5)  // Dicium decays if it shows 5 so we check if it is a five
            {
                // It was a five
                diceLeft --;  // Remove one die from the pile of dice
            }
        }
        std::cout << diceLeft << std::endl;  // Printing the number of dice left
    }
}

void coinToss()
{
    srand(time(NULL));  // Seeding the rand() function

    if(rand() % 2)  // The rand() % 2 will return true or false at random
    {
        // It turned out to be true which could be mapped to heads
        std::cout << "Heads" << std::endl;  // Printing Heads to the console
    }
    else
    {
        // It was not true, therefore it must be false. If true is mapped to heads, false must be mapped to tails
        std::cout << "Tails" << std::endl;  // Printing Heads to the console
    }
}

void coinTossAdvanced(int Count)
{
    srand(time(NULL));  // Seeding the rand() function

    for(int i = 0; i < Count; i++)  // Setting up a for-loop to run as many times as the number of coins to be tossed
    {
        if(rand() % 2)  // The rand() % 2 will return true or false at random
        {
            // It turned out to be true which could be mapped to heads
            std::cout << "Heads" << std::endl;  // Printing Heads to the console
        }
        else
        {
            // It was not true, therefore it must be false. If true is mapped to heads, false must be mapped to tails
            std::cout << "Tails" << std::endl;  // Printing Heads to the console
        }
    }

}

void guessTheNumber()
{
    srand(time(NULL));  // Seeding the rand() function

    int Number = rand() % 11;  // Randomizing the secret number, will return an integer between 0 and 10
    int tries_left = 4;  // Setting how many times the user is allowed to try
    int Guess;  // Declaring a variable to hold the users guess

    std::cout << "Guess an integer between 0 and 10." << std::endl;  // Prompting the user to enter a number

    while(tries_left > 0)  // While the user has at least one try they get to try again
    {
        while(!(std::cin >> Guess))  // We try to insert what the user typed into an integer variable. If it fails we want the user to be able to try again. Therefore if the input is not valid we let the user try again
        {
            std::cout << "That's an invalid input! Try again." << std::endl;  // informing the user that the input was invalid and prompt them to try again
            std::cin.clear();  // In case the user enters something invalid the stream error flag will be removed for the next input
            std::cin.ignore(INT_MAX, '\n');  // Making sure there is nothing left in the buffer
        }

        if(Guess == Number)  // Checking if the user guessed correctly
        {
            // The user guessed correct
            std::cout << Guess << " is correct! You have learned some neat programming." << std::endl;  // Congratulate the user
            return;  // Exit the function
        }
        else
        {
            // The user guessed incorrect
            if (--tries_left == 0)  // checking if it was the users last guess
            {
                // It was the users last guess
                std::cout << "You lose! The number was " << Number << std::endl;  // Telling the user that they lost and revealing the seeked integer
            }
            else
            {
                // The user has at least another try
                if(Number < Guess)  // checking if the seeked integer is smaller than the guess
                {
                    // The number was smaller than the guess
                    std::cout << "The number is smaller than " << Guess << "." << std::endl;  // Informing the user that the seeked number is smaller than their guess
                }
                else
                {
                    // The number was greater than the guess
                    std::cout << "The number is greater than " << Guess << "." << std::endl;  // Informing the user that the seeked number is greater than their guess
                }
                std::cout << tries_left << " tries left." << std::endl;  // Informing the user of how many tries they have left
            }
        }
    }
}

void hello()
{
    std::cout << "Hello World!" << std::endl;  // Printing Hello World! to the console
}


using namespace std;

int main()
{
// Skriver Hello World! i konsolen
cout << "Hello Rosendal!" << endl;
// Dessa kommentarer verkar bara
// på en linje i taget.

/*
Om man vill temporärt undvika att kod körs kan man göra det till en kommentar som denna som markerar flera linjer som kommentar.
cout << "Hello World!" << endl;
cout << "Skyrim" << endl;
*/
}
