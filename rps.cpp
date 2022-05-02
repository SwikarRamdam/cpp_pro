#include <iostream>
#include <cstdlib> //Random number generation, dynamic memory management,searching,sorting,converting etc
using namespace std;
int main()
{
    string player;
    cout << "Enter Your Name" << endl;
    cin >> player;
    int rounds;
    cout << player << ", enter the number of rounds you want to play " << endl;
    cin >> rounds;
    int playerScore = 0, compScore = 0;
    for (int i = 1; i <= rounds; i++)
    {
        int playerPick, compPick;
        cout << "Round : " << i << "/" << rounds << endl;
        cout << player << "'s Score =" << playerScore << endl;
        cout << "Computer's Score = " << compScore << endl;
        do
        {
            cout << "Take your Pick :" << endl;
            cout << "Rock(1), Paper(2) or Scissors(3)\n";
            cin >> playerPick;
        } while (playerPick != 1 && playerPick != 2 && playerPick != 3);

        srand(time(0));

        // inbiult function in C++ Standard Template Library (STL) defined under cstdlib, used to initialize random number generators
        // rand() would generate the same number again and again so srand is used to bring back the initial value to 0 so that another random number can be picked w.r.t zero.

        compPick = (rand() % 3) + 1; //+1, as choices should start from 1
        if (playerPick == 1 && compPick == 3)
        {
            cout << player << " wins !" << endl;
            playerScore++;
        }
        else if (playerPick == 1 && compPick == 2)
        {
            cout << "Computer wins !" << endl;
            compScore++;
        }
        else if (playerPick == 1 && compPick == 1)
        {
            cout << "Tie !" << endl;
        }
        else if (playerPick == 2 && compPick == 3)
        {
            cout << "Computer wins !" << endl;
            compScore++;
        }
        else if (playerPick == 2 && compPick == 2)
        {
            cout << "Tie !" << endl;
        }
        else if (playerPick == 2 && compPick == 1)
        {
            cout << player << " wins !" << endl;
            playerScore++;
        }
        else if (playerPick == 3 && compPick == 3)
        {
            cout << "Tie !" << endl;
        }
        else if (playerPick == 3 && compPick == 2)
        {
            cout << player << " wins !" << endl;
            playerScore++;
        }
        else if (playerPick == 3 && compPick == 1)
        {
            cout << "Computer wins !" << endl;
            compScore++;
        }

        cout << "-----------------------------------------------------" << endl;
    }
    if (compScore == playerScore)
    {
        cout << "Tie";
    }
    else if (compScore > playerScore)
    {
        cout << "Computer Won The Game ! \n";
        cout << "\nFinal Score :\n";
        cout << "Computer Score = " << compScore << "/" << rounds << endl;
        cout << player << "'s Score = " << playerScore << "/" << rounds << endl;
        cout << "-----------------------------------------------------" << endl;
    }
    else if (compScore < playerScore)
    {
        cout << player << " Won The Game ! \n";
        cout << "\nFinal Score :\n";
        cout << "Computer Score = " << compScore << "/" << rounds << endl;
        cout << player << "'s Score = " << playerScore << "/" << rounds << endl;
        cout << "-----------------------------------------------------" << endl;
    }
    return 0;
}
