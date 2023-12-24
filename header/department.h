#include <iostream>
#include <list>
#include "course.h"
using namespace std;


class Department{
    string title;
    list<Instructor*> instructors;
    Instructor* dep_chair;
    list<Course*> courses;

    public:
        Department(string title, Instructor* dep_chair);
        string  get_title();
        list<Instructor*> get_instructors();
        Instructor* get_dep_chair();
        list<Course*> get_courses();
};