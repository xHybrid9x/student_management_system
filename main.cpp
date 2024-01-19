#include <iostream>
#include "list"
#include "department.h"
#include "instructor.h"
#include "course.h"

void main_menu_selection();
list<Department> add_departments();
string convertArrayToString(set<string> stringArray);

list<Department> new_deps = add_departments();
list<Instructor> instructors = {};
list<Course> courses = {};

int main() {
    bool displayMenu = true;
    while (displayMenu) {
         main_menu_selection();
    }
    return 0;
}

list<Department> add_departments(){
    std::list<std::string> deps {"Computer Science", "Business", "Math", "Physics"};
    list<Department> new_deps {};
    for(string dep : deps){
        Department department(dep);
        new_deps.push_front(department);
    }
    return new_deps;
}

void create_new_department(string input){
    bool departmentExists = false;
    for (Department dep : new_deps) {
        if (dep.get_title() == input){
            cout << "Department " << dep.get_title() << " already exists" << endl;
            departmentExists = true;
            break;
        }
    }
    if (!departmentExists) {
        Department newDep(input);
        cout << "New Department " << newDep.get_title() << " was created." << endl;
    }
}

void create_new_instructor(string f_name, string l_name) {
    bool instructorExists = false;
    for (Instructor instructor : instructors) {
        if (instructor.get_name() == l_name + ", " + f_name) {
            cout << "Instructor name : " << l_name + ", " + f_name << " already exists." << endl;
            instructorExists = true;
            break;
        }
    }
    if (!instructorExists) {
        Instructor new_instructor(f_name, l_name);
        cout << "New Instructor " << new_instructor.get_name() << " was created." << endl;
        instructors.push_front(new_instructor);
    }
}

void create_new_course(string course_title) {
    bool courseExists = false;
    set<string> days;
    string first_day;
    string additional_days;

    for (Course course : courses) {
        if (course.get_title() == course_title) {
            cout << "Course : " << course_title << " already exists." << endl;
            courseExists = true;
            break;
        }
    }
    if (!courseExists){
        cout << "Enter a day for the course." << endl;
        cin >> first_day;
        days.insert(first_day);
        while(additional_days != "end") {
            cout << "Enter another day for the course or type end to finish entering." << endl;
            cin >> additional_days;
            if (additional_days != "end"){
                cout << "Adding " << additional_days << " to the list of days";
                days.insert(additional_days);
            }
        }
        Course new_course(course_title, days);
        courses.push_front(new_course);
        cout << "New course was created " << new_course.get_title() << " on days : " << convertArrayToString(new_course.get_days()) << endl;
    }
}

void main_menu_selection() {
    list<string> options {"Choose your selection", "Create Deparment : Press 0", "Create Instructor: Press 1", "Create Course: Press 2", "Create Student: Press 3"};
    for(string choice : options){
        cout << choice << endl;
    }
    int selected {};
    cin >> selected;
    switch (selected) {
        case 0: {
            string input;
            cout << "Enter a department title: " << endl;
            cin >> input;
            create_new_department(input);
            break;
        }
        case 1: {
            string f_name;
            string l_name;
            cout << "Enter the instructor's first name: " << endl;
            cin >> f_name;
            cout << "Enter the instructor's last_name name: " << endl;
            cin >> l_name;
            create_new_instructor(f_name, l_name);
            break;
        }
        case 2: {
            string course_title;
            cout << "Enter the course title: " << endl;
            cin >> course_title;
            create_new_course(course_title);
            break;
        }
        default:
            break;
    }
}

string convertArrayToString(set<string> stringArray) {
    string finalString;
    for(string item : stringArray) {
        finalString = finalString + " " + item;
    }
    return finalString;
}