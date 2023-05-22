#include "SignIn.h"
#include <typeinfo>
/*
 * 로그인 함수
 */
void SignIn::putUserDetails(vector<Member> &members, Member &currentMember, std::string id, std::string password) {
    // 로그인
    Member member(id, password);
    member.setStatus(true);

    for(Member i : members){
        //회원가입 되어있음
        if(i.getID().compare(id) == 0){
            currentMember = i;
            currentMember.setStatus(true);
            cout << i.getID() << " " << i.getPassword() << endl;
            cout << "현재 로그인 회원: " << i.getID() << endl;
            break;
        }
        else cout << "등록된 회원 없음" << endl;
    }
}
