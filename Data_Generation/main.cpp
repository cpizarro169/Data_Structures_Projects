// Christian Pizarro

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <iomanip>
#include <cassert>
#include <cstdlib>
#include <string>
#include <cmath>
#include <iomanip>
#include "ssid.h"

using namespace std;

int main()
{
    srand(time(NULL)); // so that every time code runs it won't use the same random numbers
    ssid student_database; // created the object based on the class in the header file
    int k;
    cout << "Hello, enter how many students you want generated." << endl;
    cin >> k; // the amount of students the user wants to generate

    student_database.set_students_ssn_and_tests(k); //generates data based on the amount of students the user wants
    student_database.set_students_major(k); //generates data based on the amount of students the user wants
    student_database.set_fname(k); // failed attempt to use the fname vector in the implementation file
    student_database.set_lname(k);

    for (int i = 0; i < k; i++)
    {
        if ((i % 20) == 0) // prints out header for every 20 students
        {
            cout << endl << endl << endl << endl << endl;
            cout << setw(13) << left << "SSN";
            cout << setw(15) << left << "First Name";
            cout << setw(15) << left << "Last Name";
            cout << setw(8) << left << "Major";
            cout << setw(8) << left << "Mid 1" << setw(8) << left << "Mid 2" << setw(8) << left << "Final" << endl;
            //formatting the data to know which column the data generates corresponds to
        }
        student_database.return_student(i);
        cout << student_database.get_ssn_1() << student_database.get_ssn_2() <<
             student_database.get_ssn_3() << "-" << student_database.get_ssn_4() <<
             student_database.get_ssn_5() << "-" << student_database.get_ssn_6() <<
             student_database.get_ssn_7() << student_database.get_ssn_8() << setw(3) <<
             left << student_database.get_ssn_9() << setw(3) << left;
        cout << setw(15) << left << student_database.get_fname();
        cout << setw(15) << left << student_database.get_lname();
        cout << setw(8) << left << student_database.get_major();
        cout << setw(8) << left << student_database.get_test_1() << setw(8) << left <<
             student_database.get_test_2() << setw(8) << left << student_database.get_test_3() << endl;
        // using get to retrieve the data generated and stored in the header file under private variables
    }
    system("pause");
}