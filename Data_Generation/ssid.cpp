// Christian Pizarro

#include <iostream>
#include <vector>
#include <iomanip>
#include <cassert>
#include <cstdlib>
#include <string>
#include <cmath>
#include "ssid.h"
using namespace std;

int uniform(const int a, const int b)
{
    assert(a <= b);
    return a + rand() % (b - a + 1);
}

double Box_Muller(double m, double s) // Box Muller used for getting random variables within
// set standard deviations.(c) Copyright 1994, Everett F. Carter Jr., modified by Akira Kawaguchi.
{
    double x1, x2, w, y1;
    static double y2;
    static bool use_last = 0;

    if (use_last)
    {
        y1 = y2;
        use_last = false;
    }
    else
    {
        do
        {
            x1 = 2.0 * (uniform(0, 9999) / 10000.) - 1.0;
            x2 = 2.0 * (uniform(0, 9999) / 10000.) - 1.0;
            w = x1 * x1 + x2 * x2;
        } while
                (w >= 1.0);
        w = sqrt((-2.0 * log(w)) / w);
        y1 = x1 * w;
        y2 = x2 * w;
        use_last = true;
    }
    return(m + y1 * s);
}

void ssid::set_students_ssn_and_tests(int a)
{
    for (int i = 0; i < a; i++)
    {
        ssn_1.push_back(rand() % 9 + 0); //inserts random number 1-9
        ssn_2.push_back(rand() % 9 + 0); //inserts random number 1-9
        ssn_3.push_back(rand() % 9 + 0); //inserts random number 1-9
        ssn_4.push_back(rand() % 9 + 0); //inserts random number 1-9
        ssn_5.push_back(rand() % 9 + 0); //inserts random number 1-9
        ssn_6.push_back(rand() % 9 + 0); //inserts random number 1-9
        ssn_7.push_back(rand() % 9 + 0); //inserts random number 1-9
        ssn_8.push_back(rand() % 9 + 0); //inserts random number 1-9
        ssn_9.push_back(rand() % 9 + 0); //inserts random number 1-9
        test_1.push_back(nearbyint(Box_Muller(60, 12))); //inserts random number based on mean 60 and standard deviation 12
        test_2.push_back(nearbyint(Box_Muller(55, 13))); //inserts random number based on mean 55 and standard deviation 13
        test_3.push_back(nearbyint(Box_Muller(46, 14))); //inserts random number based on mean 46 and standard deviation 14
    }
};

void::ssid::set_students_major(int a) // inserts random string value to a vector,
// if string CS is less than or equal to half, CS is inserted by default.
{
    int CS_count = 0;
    vector<string> possible_major{ "CS","EE","CE","ME" };
    for (int i = 0; i < a; i++)
    {
        int l = rand() % 3 + 0;
        if (CS_count <= ((i + 1) / 2))
        {
            l = 0;
            CS_count++;
        }
        else if (l == 0)
            CS_count++;

        major.push_back(possible_major[l]);
    }
};

void::ssid::set_fname(int a) // first letter is a random capital letter
// and the rest are random lowercase letters put into a string and pushed into a vector
{
    vector<string> lowercase{ "a","b","c","d","e","f","g","h","i","j","k","l","m",
                              "n","o","p","q","r","s","t","u","v","w","x","y","z" };
    vector<string> uppercase{ "A","B","C","D","E","F","G","H","I","J","K","L","M",
                              "N","O","P","Q","R","S","T","U","V","W","X","Y","Z" };
    string holder;
    int letter;
    for (int i = 0; i < a; i++)
    {
        holder = "";
        int k = rand() % 12 + 1;
        for (int j=0; j<k; j++)
        {
            int l = rand() % 25 + 0;
            if (j == 0)
                holder.insert(j, uppercase[l]);
            else
                holder.insert(j, lowercase[l]);
        }
        fname.push_back(holder);
    }
};

void::ssid::set_lname(int a) //first letter is a random capital letter
// and the rest are random lowercase letters put into a string and pushed into a vector
{
    vector<string> lowercase{ "a","b","c","d","e","f","g","h","i","j","k","l","m",
                              "n","o","p","q","r","s","t","u","v","w","x","y","z" };
    vector<string> uppercase{ "A","B","C","D","E","F","G","H","I","J","K","L","M",
                              "N","O","P","Q","R","S","T","U","V","W","X","Y","Z" };
    string holder;
    int letter;
    for (int i = 0; i < a; i++)
    {
        holder = "";
        int k = rand() % 12 + 1;
        for (int j = 0; j<k; j++)
        {
            int l = rand() % 25 + 0;
            if (j==0)
                holder.insert(j, uppercase[l]);
            else
                holder.insert(j, lowercase[l]);
        }
        lname.push_back(holder);
    }
};

void ssid::return_student(int b) //the current value becomes b;
{
    current = b;
};

int ssid::get_ssn_1() const //returns value based on location
{
    return ssn_1[current];
};

int ssid::get_ssn_2() const //returns value based on location
{
    return ssn_2[current];
};

int ssid::get_ssn_3() const //returns value based on location
{
    return ssn_3[current];
};

int ssid::get_ssn_4() const //returns value based on location
{
    return ssn_4[current];
};

int ssid::get_ssn_5() const //returns value based on location
{
    return ssn_5[current];
};

int ssid::get_ssn_6() const //returns value based on location
{
    return ssn_6[current];
};

int ssid::get_ssn_7() const //returns value based on location
{
    return ssn_7[current];
};

int ssid::get_ssn_8() const //returns value based on location
{
    return ssn_8[current];
};

int ssid::get_ssn_9() const //returns value based on location
{
    return ssn_9[current];
};

int ssid::get_test_1() const //returns value based on location
{
    return test_1[current];
};

int ssid::get_test_2() const //returns value based on location
{
    return test_2[current];
};

int ssid::get_test_3() const //returns value based on location
{
    return test_3[current];
};

string ssid::get_major() const //returns value based on location
{
    return major[current];
};

string ssid::get_fname() const //returns value based on location
{
    return fname[current];
};

string ssid::get_lname() const //returns value based on location
{
    return lname[current];
};




