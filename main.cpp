#include <iostream>
#include <string>
using namespace std;

int main() {

    int repeat = 1;

    while (repeat == 1) {

        string name;
        int color1;
        int color2;

        cout << "Hello what is your name? (first name only) ";
        cin >> name;

        cout << endl;
        cout << "Hello " << name << "!" << endl;

        cout << endl;
        cout << "Which colors do you find confusing?" << endl;
        cout << "Choose one color first." << endl;

        cout << "1. Red" << endl;
        cout << "2. Green" << endl;
        cout << "3. Brown" << endl;
        cout << "4. Blue" << endl;
        cout << "5. Purple" << endl;
        cout << "6. Yellow" << endl;
        cout << "7. I know all these colors" << endl;

        cout << "Enter choice: ";
        cin >> color1;

        while (color1 < 1 || color1 > 7) {
            cout << "Invalid answer. Enter a number from 1 to 7: ";
            cin >> color1;
        }

        if (color1 == 7) {
            cout << endl;
            cout << "You said that you can identify all of these colors." << endl;
            cout << "You did not report any color confusion." << endl;
        }

        else {

            cout << endl;
            cout << "Choose another color you sometimes confuse." << endl;
            cout << "If you only have trouble with one color, enter the same color again." << endl;

            cout << "1. Red" << endl;
            cout << "2. Green" << endl;
            cout << "3. Brown" << endl;
            cout << "4. Blue" << endl;
            cout << "5. Purple" << endl;
            cout << "6. Yellow" << endl;

            cout << "Enter choice: ";
            cin >> color2;

            while (color2 < 1 || color2 > 6) {
                cout << "Invalid answer. Enter a number from 1 to 6: ";
                cin >> color2;
            }

            cout << endl;
            cout << "Results for " << name << ":" << endl;

            if ((color1 == 1 && color2 == 2) ||
                (color1 == 2 && color2 == 1)) {

                cout << "You reported difficulty with Red and Green." << endl;
                cout << "This may be similar to red-green color vision deficiency." << endl;
                cout << "You may have difficulty telling some reds and greens apart." << endl;
            }

            else if ((color1 == 4 && color2 == 6) ||
                     (color1 == 6 && color2 == 4)) {

                cout << "You reported difficulty with Blue and Yellow." << endl;
                cout << "This may be similar to blue-yellow color vision deficiency." << endl;
                cout << "You may have difficulty telling some blues and yellows apart." << endl;
            }

            else if ((color1 == 4 && color2 == 5) ||
                     (color1 == 5 && color2 == 4)) {

                cout << "You reported difficulty with Blue and Purple." << endl;
                cout << "Some people with color vision differences can confuse these colors." << endl;
            }

            else if ((color1 == 1 && color2 == 3) ||
                     (color1 == 3 && color2 == 1)) {

                cout << "You reported difficulty with Red and Brown." << endl;
                cout << "Some red-green color vision differences can make these colors harder to tell apart." << endl;
            }

            else if (color1 == color2) {

                cout << "You mainly reported difficulty with one color." << endl;
                cout << "This test cannot determine a specific color vision deficiency from one color alone." << endl;
            }

            else {

                cout << "You reported difficulty with two colors." << endl;
                cout << "Your answers do not strongly match the main color combinations in this assessment." << endl;
            }
        }

        cout << endl;
        cout << "This program is only an educational assessment." << endl;
        cout << "It is not a medical diagnosis." << endl;

        // Ask the user if they want to repeat
        cout << endl;
        cout << "Would you like to take the assessment again? (ONLY 1 or 2)" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cout << "Enter choice: ";
        cin >> repeat;

        // Make sure the answer is valid
        while (repeat != 1 && repeat != 2) {
            cout << "Invalid answer. Enter 1 for Yes or 2 for No: ";
            cin >> repeat;
        }

        cout << endl;
    }

    cout << "Thank you for using the Color Vision Assessment!" << endl;

    return 0;
}