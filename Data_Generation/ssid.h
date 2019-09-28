// Christian Pizarro

#ifndef SSID_H_INCLUDED
#define SSID_H_INCLUDED



class ssid
{

private:
    int current;
    std::vector<int> ssn_1;
    std::vector<int> ssn_2;
    std::vector<int> ssn_3;
    std::vector<int> ssn_4;
    std::vector<int> ssn_5;
    std::vector<int> ssn_6;
    std::vector<int> ssn_7;
    std::vector<int> ssn_8;
    std::vector<int> ssn_9;
    std::vector<int> test_1;
    std::vector<int> test_2;
    std::vector<int> test_3;
    std::vector<std::string> major;
    std::vector<std::string> fname;
    std::vector<std::string> lname;
    // variables that will be stored and used in the implementation file

public:

    void set_students_ssn_and_tests(int a); // generating ssn's and test grades
    void set_students_major(int a); //generating majors
    void set_fname(int a); //To generate names with random characters
    void set_lname(int a); //To generate names with random characters

    void return_student(int b); // keeps count of student generated

    int get_ssn_1() const;
    int get_ssn_2() const;
    int get_ssn_3() const;
    int get_ssn_4() const;
    int get_ssn_5() const;
    int get_ssn_6() const;
    int get_ssn_7() const;
    int get_ssn_8() const;
    int get_ssn_9() const;
    int get_test_1() const;
    int get_test_2() const;
    int get_test_3() const;
    std::string get_major() const;
    // returns the data based on the location of vector/ string according to count

    std::string get_fname() const;
    std::string get_lname() const;


};


#endif



