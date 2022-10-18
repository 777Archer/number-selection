//David Archer
//Number Selection

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num, answer = 0;
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

        switch (selection)
        {
        case 'A':
        {
            cout << "Input number: ";
            cin >> num;

            answer = answer + num;
            cout << "Ans = " << answer << "\n" << endl;
            continue;
        }
        case 'S':
        {
            cout << "Input number: ";
            cin >> num;
            answer = answer - num;

            cout << "Ans = " << answer << "\n" << endl;
            continue;
        }
        case'N':
        {
            answer = -answer;
            cout << "Ans = " << answer << "\n" << endl;
            continue;
        }
        case'Q':
        {
            cout << "\nYou have chosen to quit the program."
                " Thank you and please come back again.\n";
            break;
        }
        default:
        {

            cout << "\nNot a valid input. Please input numbers only." << "\n" << endl;
            continue;
        }

        }

    } while (selection != 'Q');

    //system("PAUSE");
    return 0;
}