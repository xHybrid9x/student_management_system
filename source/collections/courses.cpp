        #include "header/collections/courses.h"
        #include "list"
        
        Courses::list<Course*> get_courses(){
            return courses;
        }

        Courses::list<Course*> get_instructor_courses(int id){
            list<Course*> courses_found;
            for(Course* course : get_courses()){
                Instructor* inst = course->get_professor();
                if (inst->get_id() == id){
                    courses_found.push_front(course);
                }
            }
        }