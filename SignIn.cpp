#include "SignIn.h"
#include <typeinfo>
/*
 * 로그인 함수
 */
string SignIn::putUserDetails(vector<Member> &members, Member &currentMember, std::string id, std::string password) {
    // 로그인

    for(Member i : members){
        //회원가입 되어있음
        if(i.getID().compare(id) == 0){
                currentMember = i;
                currentMember.setStatus(true);

                string result = "> " + id + " " + password;
                return result;
        }
    }
    //회원가입 되어있지 않음
    cout << "등록된 회원 없음" << endl;
}
