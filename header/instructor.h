#include <iostream>
#include "list"
using namespace std;

class Instructor {
    int id;
    string f_name;
    string l_name;
    list<Course*> courses;
    Department* dep;

    public:
        Instructor(string first, string last, Department* department);
        string get_name();
        int get_id();
        list<Course*> get_course_list();
        Department* get_department();
};