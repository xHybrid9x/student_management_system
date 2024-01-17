#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "department.h"
#include "course.h"
#include "instructor.h"
using namespace std;

class Student
{
    string f_name;
    string l_name;
    string address;
    int phone_number;
    int id_number;
    string mail;
    string password;

    public:
        Student(string first_name, string last_name, string email, string pw);
        string get_name();
        string get_email();
        void add_phone_number();
        void add_address();
        int get_phone_number();    
};
#endif STUDENT_H