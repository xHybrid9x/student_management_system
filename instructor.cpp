#include <iostream>
#include "list"
#include "instructor.h"
using namespace std;

Instructor::Instructor(string first, string last){
    f_name = first;
    l_name = last;
}

string Instructor::get_name(){
    return l_name + ", " + f_name;
}
int Instructor::get_id(){
    return id;
}

/*list<Course*> Instructor::get_course_list(){
   Courses course_list;
   courses = course_list.get_instructor_courses(id);
   return courses;
}*/
