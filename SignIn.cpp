#include "SignIn.h"
/*
 * 로그인 함수
 */
Member SignIn::putUserDetails(string id, string password)
{
    // 로그인
    Member member = *new Member(id, password);
    string memberId = member.validate();
    return memberId;
}
