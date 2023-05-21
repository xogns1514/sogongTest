#include <iostream>
#include "Member.h"

Member::Member(const string& id, const string& password) : id(id), password(password), status(false){};

bool Member::ValidateMember(const string& inputId, const string& inputPassword){
    return (id == inputId && password == inputPassword);
}

string Member::validate() {
    return std::string();
}

void Member::saveMember(int i) {

}

void Member::deleteMember() {

}
