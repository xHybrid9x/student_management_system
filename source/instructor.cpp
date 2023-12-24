#include <iostream>
#include "list"
#include "instructor.h"
#include "department.h"
#include "course.h"
#include "header/collections/courses.h"
using namespace std;

Instructor::Instructor(string first, string last, Department* department){
    f_name = first;
    l_name = last;
    dep = department;
}

string Instructor::get_name(){
    return l_name + ", " + f_name;
}
int Instructor::get_id(){
    return id;
}

Department* Instructor::get_department(){
    return dep;
}

list<Course*> Instructor::get_course_list(){
   Courses course_list;
   courses = course_list.get_instructor_courses(id);
   return courses;
}
