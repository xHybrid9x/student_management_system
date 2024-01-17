#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include "department.h"
#include "instructor.h"
#include "student.h"
#include "set"
using namespace std;

class Course{
    string title;
    int id {0};
    Instructor* instructor;
    Department* department;
    set<int> days;

    public:
        Course(string title, Instructor* instructor, Department* dep, set<int> days);
        string get_title();
        Instructor* get_professor();
        set<int> get_days();
        Department* get_department();
};
#endif COURSE_H