 #include <iostream>
 #include "course.h"
 using namespace std;

Course::Course(string course, set<string> course_days){
    title = course;
    days = course_days;
}

/*Course::Course(string course, Instructor* course_instructor, Department* dep, set<string> course_days){
    title = course;
    instructor = course_instructor;
    department = dep;
    days = course_days;
}*/
string Course::get_title(){
    return title;
}

set<string> Course::get_days(){
    return days;
}
/*Department* Course::get_department(){
    return department;
}

Instructor* Course::get_professor(){ 
    return instructor;
}*/