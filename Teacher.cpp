#include "Teacher.h"


Teacher::Teacher() {
    setUsername("Default teacher");
    setMaxCopies(10);
    setMaxPeriod(50);
}

Teacher::Teacher(const string &username, const string &password, int maxCopies, int maxPeriod) : Student(username,
                                                                                                         password,
                                                                                                         maxCopies,
                                                                                                         maxPeriod) {}
