#ifndef COMPANY_MEMBER_H
#define COMPANY_MEMBER_H

#include <iostream>
#include "Member.h"

class CompanyMember : public Member{
private:
    string companyName;
    int companyNumber;

public:

    CompanyMember(const string &id, const string &password, const string &companyName, int companyNumber);

    string getName() const override;
    int getNumber() const override;

    int getCompanyNumber() const;

    string getType() const;
};
#endif