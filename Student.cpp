#include "Student.h"

using namespace std;

// In the default constructor default values will be set
Student::Student() {
    name = "Default user";
    password = "123@abc";
    maximum_copies = 5;         // This values can not be changed
    maximum_period = 30;        // This value can not be changed
}

Student::Student(string user_name, string user_password) {
    this->name = user_name;
    this->password = user_password;
    this->maximum_copies = 5;
    this->maximum_period = 30;
}

string Student::getName() const {
    return name;
}

int Student::getMaxCopies() const {
    return maximum_copies;
}

int Student::getMaxPeriod() const {
    return maximum_period;
}

vector<string> Student::getIdList() const {
    return borrowed_id_list;
}

void Student::setName(std::string new_name) {
    this->name = new_name;
}

bool Student::addIdToList(string ID) {
    if (borrowed_id_list.size() < maximum_copies){
        borrowed_id_list.push_back(ID);
        return true;
    }
    return false;
}

bool Student::checkPassword(string check_password) {
    return check_password == password;
}