#include "CompanyMember.h"

CompanyMember::CompanyMember(const string &id, const string &password, const string &companyName, int companyNumber)
        : Member(id, password), companyName(companyName), companyNumber(companyNumber) {}
