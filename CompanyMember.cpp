#include "CompanyMember.h"

CompanyMember::CompanyMember(const string &id, const string &password, const string &companyName, int companyNumber)
        : Member("CompanyMember",id, password), companyName(companyName), companyNumber(companyNumber) {}

string CompanyMember::getName() const { return companyName; }

int CompanyMember::getNumber() const { return companyNumber; }

int CompanyMember::getCompanyNumber() const { return companyNumber; }

string CompanyMember::getType() const { return "CompanyMember"; }