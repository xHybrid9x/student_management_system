#ifndef COURSE_H
#define COURSE_H
#endif
#include <iostream>
#include "set"
using namespace std;

class Course{
    string title;
    int id {0};
    //Instructor* instructor;
    //Department* department;
    set<string> days;

    public:
        Course(string title, set<string> days);
        //Course(string title, Instructor* instructor, Department* dep, set<string> days);
        string get_title();
        //Instructor* get_professor();
        set<string> get_days();
        //Department* get_department();
};