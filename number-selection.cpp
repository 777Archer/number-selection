//David Archer
//Number Selection


#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

void menu(char selection)
{
    int answer = 0;
    int num;

    if(selection == 0)
        cout << "\nYou have chosen to quit the program."
        " Thank you and please come back again.\n";

    else if(selection == 'A' || selection == 'a')
    {
        cout << "Input number: ";
        cin >> num;
        answer = answer + num;

        cout << "Ans = " << answer << endl;
    }
    else if(selection == 'S' || selection == 's')
    {
        cout << "Input number: ";
        cin >> num;
        answer = answer - num;

        cout << "Ans = " << answer << endl;
    }
    else if(selection == 'N' || selection == 'n')
    {
        answer = -answer;
        cout << "Ans =\n " << answer << "\n" << endl;
    }
    else
    {
        cout << "\nNot a valid selection. Please try again." << endl;
    }
}
int main()
{
    int number, answer = 0;
    char selection;

    do
    {
        cout << "MENU\n-------" << endl;
        cout << "A - ADD" << endl;
        cout << "S - SUB" << endl;
        cout << "N - NEG" << endl;
        cout << "Q - Quit" << endl;
        cout << "Please make a selection" << endl;
        cin >> selection;

        if(!cin)
        {
            cout << "\nNot a valid input. Please input numbers only." << "\n" << endl;
            cin.clear();
            cin.ignore(1);
        }
        else
        {
            menu(selection);
            cout << "\n";
        }

    } while(selection != 0);

    //system("PAUSE");
    return 0;
}