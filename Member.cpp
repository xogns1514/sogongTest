#include <iostream>
#include "Member.h"

Member::Member(const string& id, const string& password) : id(id), password(password), status(false){};


string Member::getID() const { return id; }

string Member::getPassword() const { return password; }

bool Member::getStatus() const { return status; }
void Member::setStatus(bool status) { this->status = status; }

bool Member::validate(vector<Member>& members, const std::string &inputId, const std::string &inputPassword) {
    for(Member i : members){
        if(i.getID() == inputId){
            return false;
        }
    }
    return true;
}

void Member::saveMember(int i) {

}

void Member::deleteMember() {

}
