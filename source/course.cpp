 #include <iostream>
 #include "header/course.h"
 using namespace std;

Course::Course(string course, Instructor* course_instructor, Department* dep, set<int> course_days){
    title = course;
    instructor = course_instructor;
    department = dep;
    days = course_days;
}
string Course::get_title(){
    return title;
}
Instructor* Course::get_professor(){ 
    return instructor;
}
set<int> Course::get_days(){
    return days;
}