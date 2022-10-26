#ifndef LMS_TEACHER_H
#define LMS_TEACHER_H

#include "Student.h"
using namespace std;

class Teacher: public Student{
public:
    Teacher();

    Teacher(const string &username, const string &password, int maxCopies, int maxPeriod);
};


#endif //LMS_TEACHER_H
