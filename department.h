#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#endif
#include <iostream>
#include <list>
//#include "instructor.h"
using namespace std;


class Department{
    string title;
    //Instructor* dep_chair;

    public:
        Department(string title);
        string  get_title();
       // void add_dep_chair(Instructor* dep);
       // Instructor* get_dep_chair();
};
