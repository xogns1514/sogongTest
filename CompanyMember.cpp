#include "CompanyMember.h"

//CompanyMember::CompanyMember(const string &id, const string &password, const string &name, int number)
//        : Member("CompanyMember", companyName, companyNumber, id, password){}


CompanyMember::CompanyMember(const std::string &id, const std::string &password, const std::string &name, int number):
Member("CompanyMember", name, number, id, password){}

//string CompanyMember::getName() const { return companyName; }
//
//int CompanyMember::getNumber() const { return companyNumber; }
//
//int CompanyMember::getCompanyNumber() const { return companyNumber; }

string CompanyMember::getType() const { return "CompanyMember"; }