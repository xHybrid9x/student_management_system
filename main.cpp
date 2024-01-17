#include <iostream>
#include "list"
#include "department.h"

void main_menu_selection();
list<Department> add_departments();

list<Department> new_deps = add_departments();

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
            break;
        case 2:
            break;
        default:
            break;

    }

}