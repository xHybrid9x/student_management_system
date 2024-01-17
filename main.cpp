#include <iostream>
#include "list"
#include "department.h"
#include "instructor.h"

void main_menu_selection();
list<Department> add_departments();

list<Department> new_deps = add_departments();
list<Instructor> instructors = {};

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

void main_menu_selection(){
    list<string> options {"Choose your selection", "Create Deparment : Press 0", "Create Instructor: Press 1", "Create Course: Press 2", "Create Student: Press 3"};
    for(string choice : options){
        cout << choice << endl;
    }
    int selected {};
    cin >> selected;
    switch (selected)
    {
        case 0:
        {
            string input;
            cout << "Enter a department title: " << endl;
            cin >> input;
            create_new_department(input);
            break;
        }
        case 1:
        {
            string f_name;
            string l_name;
            cout << "Enter the instructor's first name: " << endl;
            cin >> f_name;
            cout << "Enter the instructor's last_name name: " << endl;
            cin >> l_name;
            create_new_instructor(f_name, l_name);
            break;
        }
        case 2:
            break;
        default:
            break;

    }

}