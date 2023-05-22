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
        cout << "<회사회원 가입 완료>" << "이름: " <<companyMember.getName() << " " <<
        "번호: " << companyMember.getNumber() << " " <<
        "id: " << companyMember.getID() << " " <<
        "password:" << companyMember.getPassword() << endl;
    }
        // 일반회원 가입
    else if (devideMemberType == 1)
    {
        Member generalMember = GeneralMember(name, number, id, password);
        generalMember.saveMember(devideMemberType);
        member.push_back(generalMember);
        cout << "<회사회원 가입 완료>" << "이름: " <<generalMember.getName() << " " <<
             "번호: " << generalMember.getNumber() << " " <<
             "id: " << generalMember.getID() << " " <<
             "password:" << generalMember.getPassword() << endl;
    }
}

