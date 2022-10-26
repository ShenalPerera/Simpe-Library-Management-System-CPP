#ifndef LMS_STUDENT_H
#define LMS_STUDENT_H

#include "People.h"

#include <string>

using namespace std;

// Class that represents the student entity of the system

class Student : public People{
private:
    const int max_copies;
    const int max_period;

public:
    Student(string stu_name,string stu_password);
    bool addIdToList(std::string ID) override;
};


#endif //LMS_STUDENT_H
