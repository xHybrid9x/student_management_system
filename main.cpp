#include <iostream>
#include "list"
#include "department.h"

int main() {
    std::list<std::string> deps {"Computer Science", "Business", "Math", "Physics"};
    std::list<Department> new_deps {};
    for(string dep : deps){
        Department department(dep);
        new_deps.push_front(department);
    }

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
            for(Department dep : new_deps){
                if (dep.get_title() == input){
                    cout << "Department " << dep.get_title() << " already exists" << endl;
                    break;
                }
            }
            Department newDep(input);
            
            cout << "New Department " << newDep.get_title() << " was created." << endl;
            break;
        }
        case 1:
            break;
        case 2:
            break;
        default:
            break;

    }

    return 0;
}