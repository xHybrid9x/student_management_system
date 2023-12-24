#include <iostream>
#include "student.h"
using namespace std;

Student::Student(string first_name, string last_name, string email, string pw){
    f_name = first_name;
    l_name = last_name;
    mail = email;
    password = pw;
}

string Student::get_name(){
    return l_name + ", " + f_name;
}

string Student::get_email(){
    return mail;
}