#include <iostream>
#include <list>
using namespace std;


class Department{

    string title;
    list<Instructor*> instructors;
    Instructor* dep_chair;
    list<Course*> courses;
};