#include "department.h"
#include <iostream>
#include "list"


Department::Department(std::string dep_title){
    title = dep_title;
}

string Department::get_title(){
    return title;
}

/*Instructor* Department::get_dep_chair(){
    return dep_chair;
}

void Department::add_dep_chair(Instructor* chair){
    dep_chair = chair;
}*/
