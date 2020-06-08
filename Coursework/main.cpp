//Code created by Brandon Brock
#include <iostream>
#include <bitset>
#include <string>
#include <bitset>
#include <time.h>

using namespace std;

string index2code(int i)
{
    return bitset<9>(i).to_string();
}

    void breakyourcode() //Computer guesses code
{

    int compGuess = rand() % rand() % 512 - 1;

    string computerGuess = index2code(compGuess);
    srand(time(NULL));
    int guess;

    cout << "Please enter your number (e.g. 101010101): ";
    cin >> guess;

    unsigned int countTries = 8;

    for (unsigned int i = 1; i < countTries; ++i)
    {
        cout << "Trial " << i << "/7. Computers guess? " << compGuess << endl;

        cout << "Press ENTER to continue..." << endl;
        cin.get();
    }

}

    void breakmycode() //user guesses computers code
    {
        cout << "You have picked break my code" << endl;
        string code;

        srand(time(NULL));
        int index = rand() % 512 - 1;

        string cCode = index2code(index);

        unsigned int countTries = 8;

        for (unsigned int i = 1; i < countTries; ++i) 
        {
            cout << "Trial " << i << "/7. Your guess? ", code;
            cin >> code;

            if (code == cCode) 
            {
                cout << "Moo!!! you found the secret code." << endl;
                cin.ignore();
                system("PAUSE");
                break;
            }
        }

        cout << "The correct code was " << cCode << endl;
        system("PAUSE");
    }

    void menu() //menu for program
    {
        cout << "---------------Main Menu---------------" << endl;
        cout << "---Starting the BULLS and COWS game---" << endl;
        cout << "" << endl;
    }

    void userchoice() //user gets to pick which mode to play or quit
    {
        cout << "Enter 1 for you to break my code." << endl;
        cout << "Enter 2 for computer to break your code." << endl;
        cout << "Enter anything else to quit." << endl;
        int choice;
        cin >> choice;
        {
            if (choice == 1) {
                breakmycode();
            }
            else if (choice == 2) {
                breakyourcode();
            }
            else {
                exit(0);
            }
        }
    }

    int main() //main executes the whole program
    {
        menu();
        userchoice();
        return 0;
    }
