#include "Student.h"

using namespace std;

Student::Student():max_period(30),max_copies(5) {
    this->username = "Default student";
    this->password = "abc@123";
}

Student::Student(const string &username, const string &password, int maxCopies, int maxPeriod) : username(username),
                                                                                                 password(password),
                                                                                                 max_copies(maxCopies),
                                                                                                 max_period(
                                                                                                         maxPeriod) {}

const string &Student::getUsername() const {
    return username;
}

void Student::setUsername(const string &username) {
    this->username = username;
}

const string &Student::getPassword() const {
    return password;
}

void Student::setPassword(const string &password) {
    this->password = password;
}

int Student::getMaxCopies() const {
    return max_copies;
}

void Student::setMaxCopies(int maxCopies) {
    max_copies = maxCopies;
}

int Student::getMaxPeriod() const {
    return max_period;
}

void Student::setMaxPeriod(int maxPeriod) {
    max_period = maxPeriod;
}

const vector<Book> &Student::getCopyList() const {
    return copy_list;
}

void Student::setCopyList(const vector<Book> &copyList) {
    copy_list = copyList;
}
