#include "question4.h"

using std:: cin; using std:: cout;


int main()
{
 double gpa;
    char choice = 'y';

    while (choice == 'y')
     {
        do {
            cout << "Enter your GPA value (between 0 and 4): ";
            cin >> gpa;

        } while (gpa < 0 || gpa > 4);

        string letter_grade = gpa_to_letter_grade(gpa);
        cout << "Your letter grade is: " << letter_grade << "\n";

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    }
    return 0;
}