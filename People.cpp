#include "People.h"

using namespace std;

// In the default constructor default values will be set
People::People() {
    name = "Default user";
    password = "123@abc";
}

People::People(string user_name, string user_password) {
    this->name = user_name;
    this->password = user_password;
}

string People::getName() const {
    return name;
}


vector<string>& People::getIdList(){
    return borrowed_id_list;
}

void People::setName(std::string new_name) {
    this->name = new_name;
}


bool People::checkPassword(string &check_password) {
    return check_password == password;
}

bool People::addIdToList(string ID) {
    borrowed_id_list.push_back(ID);
    return true;
}


unsigned int People::getIDListSize() const {
    return borrowed_id_list.size();
}