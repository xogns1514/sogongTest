#include "SignIn.h"
#include <typeinfo>
/*
 * 로그인 함수
 */
void SignIn::putUserDetails(vector<Member> &members, Member &currentMember, std::string id, std::string password) {
    // 로그인

    for(Member i : members){
        //회원가입 되어있음
        if(i.getID().compare(id) == 0){
            if(i.getType() == "CompanyMember"){
                currentMember = i;
                currentMember.setStatus(true);
                cout << i.getID() << " " << i.getPassword() << endl;
                cout << "현재 로그인 회원: " <<
                "이름:" << currentMember.getName() <<" "
                "id: " << currentMember.getID() << endl;
                return;
            }

        }
    }
    cout << "등록된 회원 없음" << endl;
}
