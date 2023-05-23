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
        Member companyMember =  CompanyMember(name, number, id, password);
        companyMember.saveMember(devideMemberType);
        member.push_back(companyMember);
    }
        // 일반회원 가입
    else if (devideMemberType == 1)
    {
        Member generalMember = GeneralMember(name, number, id, password);
        generalMember.saveMember(devideMemberType);
        member.push_back(generalMember);
    }
}

