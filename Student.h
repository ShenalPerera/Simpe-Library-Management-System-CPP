#ifndef LMS_STUDENT_H
#define LMS_STUDENT_H

#include <string>
#include <vector>

using namespace std;

// This class is a general class for the both teachers and the students
class Student {
private:
    string name;
    string password;
    int maximum_copies;
    int maximum_period;
    vector<string> borrowed_id_list;           // Keep the track of IDs of the book. ID is string with length 3

public:

    Student();
    Student(string user_name, string user_password);

    // Getters
    /**
     *In the getter function there is no function to get the password because of the security
     *
     */
    string getName() const;
    int getMaxCopies() const;
    int getMaxPeriod() const;
    vector<string> getIdList() const;

    // Setter
    void setName(string new_name);

    // Mutator for add a ID to a list
    /**
     * This function will add ID's of borrowed books to the list. If process is blocked return false otherwise true
     * @param ID
     * @return bool value represents the status. If successful returns tru false otherwise
     */
    bool addIdToList(string ID);

    // Maximum number of copies and the maximum periods can not be changed for security reasons

    /**
     * Function check the given password is match with real password
     * @param check_password
     * @return return true if passwords are match false otherwise
     */
    bool checkPassword(string check_password);
};


#endif //LMS_STUDENT_H