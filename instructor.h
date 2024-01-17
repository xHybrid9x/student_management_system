#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <iostream>
#include "list"
using namespace std;

class Instructor {
    int id;
    string f_name;
    string l_name;

    public:
        Instructor(string first, string last);
        string get_name();
        int get_id();

};
#endif