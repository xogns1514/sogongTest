#include "SignUp.h"
#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"
/*
 * 회원가입 함수
 */
void SignUp::putUserDetails(vector<Member>& member, int devideMemberType, string name, int number, string id, string password)
{
    // 회사회원 가입
    if (devideMemberType == 0)
    {
        Member companyMember =  CompanyMember(id, password, name, number);
        companyMember.saveMember(devideMemberType);
        member.push_back(companyMember);
        cout << "회사회원 가입 완료" << companyMember.getName() << companyMember.getNumber() << companyMember.getID() << " " << companyMember.getPassword() << endl;
    }
        // 일반회원 가입
    else if (devideMemberType == 1)
    {
        Member generalMember = GeneralMember(id, password, name, number);
        generalMember.saveMember(devideMemberType);
        member.push_back(generalMember);
    }
}
