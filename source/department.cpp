#include <iostream>
#include "list"
#include "department.h"
#include "instructor.h"

Department::Department(string dep_title, Instructor* chair){
    title = dep_title;
    dep_chair = chair;
}

string Department::get_title(){
    return title;
}

list<Instructor*> Department::get_instructors(){
    return instructors;
}

Instructor* Department::get_dep_chair(){
    return dep_chair;
}