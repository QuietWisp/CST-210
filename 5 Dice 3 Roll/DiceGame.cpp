
#include <iostream>
#include <ctime>
#include "Die.h"
using namespace std;

void startRoll(Dice*);
void showRoll(Dice*);
void getHelp(Dice*);
void showTotal(Dice* h);


int main()
{
    srand(time(NULL));
    Dice roll[5];
    startRoll(roll);
    showRoll(roll);
    getHelp(roll);
    showRoll(roll);
    showTotal(roll);
}

void startRoll(Dice* h) //Starts dice roll
{
    for (int i = 0; i < 5; i++) //for loop runs five times for the five dices
    {
        h[i].Die(); //rolls the dice
    }
}

void showRoll(Dice* h) //Shows the results of dice rolls
{
    int total = 0; //sets total of each dice as 0

    for (int i = 0; i < 5; i++) //for loop runs five times for the five dices
    {
        cout << "Dice: " << i + 1 << "| "; //Dice: #|
        cout << h[i].getValue(); //Gets dice value and puts it at the end of the dice number
        cout << endl;
    }
}

void getHelp(Dice* h)//Re-rolls three dices
{
    for (int i = 0; i < 3; i++) //for loop runs three times for the three re-roll options
    {
        int gH; //sets gH integer for which dice value
        cout << endl << "Who needs help? "; //prompts the user for dice number
        cin >> gH; //sets dice number from prompt
        h[gH - 1].Die(); //re-roll's the given dice number
    }
}

void showTotal(Dice* h) //Adds the total dice value
{
    int total = 0; //sets total as 0

    for (int i = 0; i < 5; i++) //for loop runs the program five times for the number of dices
    {
        cout << endl;
        total += h[i].getValue(); //equates total with getValue function
    }

    cout << "Total: " << total << endl; //prints total
}
