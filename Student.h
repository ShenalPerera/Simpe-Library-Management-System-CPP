#ifndef LMS_STUDENT_H
#define LMS_STUDENT_H

#include <string>
#include <vector>

#include "Book.h"

using namespace std;

// Class that represents the student entity of the system

class Student{

private:
    string username;
    string password;
    int max_copies;
    int max_period;
    vector<Book> copy_list;

public:
    Student();

    Student(const string &username, const string &password, int maxCopies, int maxPeriod);

    // Getters and setters

    const string &getUsername() const;

    void setUsername(const string &username);

    const string &getPassword() const;

    void setPassword(const string &password);

    int getMaxCopies() const;

    void setMaxCopies(int maxCopies);

    int getMaxPeriod() const;

    void setMaxPeriod(int maxPeriod);

    const vector<Book> &getCopyList() const;

    void setCopyList(const vector<Book> &copyList);


};


#endif //LMS_STUDENT_H
