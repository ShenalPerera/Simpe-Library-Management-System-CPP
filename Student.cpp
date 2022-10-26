#include "Student.h"

// Initialize the const variable while object is creating and call the super constructor of people
Student::Student(string stu_name,string stu_password):max_copies(5),max_period(30), People(stu_name,stu_password){}

// Override the function to that returns false if process snot success and false otherwise
bool Student::addIdToList(string ID) {
    if (getIDListSize() < max_copies){
        getIdList().push_back(ID);
        return true;
    }
    return false;
}