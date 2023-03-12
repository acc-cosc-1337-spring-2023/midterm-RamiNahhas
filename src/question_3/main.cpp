#include "question3.h"

using std:: cin;    using std::cout;

int main()
{
     int num1, num2;
    char choice = 'y';

    while (choice == 'y') {
        cout << "Enter two positive integers between 0 and 200: ";
        cin >> num1 >> num2;

        // Ensure input values are within range
        while (num1 < 0 || num1 > 200 || num2 < 0 || num2 > 200) {
            cout << "Invalid input. Please enter two positive integers between 0 and 200: ";
            cin >> num1 >> num1;
        }

        int result = find_gcd(num1, num2);
        cout << "The greatest common divisor of " << num1 << " and " << num2 << " is " << result << "\n";

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    }
    
    return 0;
}