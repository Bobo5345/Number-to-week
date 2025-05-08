// Copy at your own risk :D

// Preprocessor directive statements
#include <iostream>
using namespace std;

int main()
{

    // Declaring variables
    int week_num;

    // Prompting (asking) user to input a number
    input:
    cout << "This program displays a week day when you input a number";
    cout << "\nEnter a number between 1 to 7:\t";
    cin >> week_num;

    // Switch statement. Output only 1 day according to number
    // The 2nd cout statement from each case can be removed, if you need :)
    switch (week_num)
    {
    case 1:
        // Sunday
        cout << "\nThe day is Sunday";
        cout << "\nYou can relax at home :D";
        break;

    case 2:
        // Monday
        cout << "\nThe day is Monday";
        cout << "\nTake bag and go to school :(";
        break;

    case 3:
        // Tuesday
        cout << "\nThe day is Tuesday";
        cout << "\nAgain, school :(";
        break;

    case 4:
        // Wednesday
        cout << "\nIt's Wednesday";
        cout << "\nHalfway to get holiday";
        break;

    case 5:
        // Thursday
        cout << "\nIt's Thursday";
        cout << "\nNo luck, go to school";
        break;

    case 6:
        // Friday
        cout << "\nFinally, it's Friday";
        cout << "\nOne more day to go!";
        break;

    case 7:
        // Saturday
        cout << "\nIt's Saturday!";
        cout << "\nHave fun at home :D";
        break;

    default:
        cout << "\nnvalid number, try again";
        goto input;
        break;
    }
}