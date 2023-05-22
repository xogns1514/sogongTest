#include "SignUpUI.h"

SignUpUI::SignUpUI() : signUp(){}

/*
 * 회원탈퇴 boundary class
 */

void SignUpUI::putUserDetails(vector<Member>& member, int devideMemberType, string name, int number, string id, string password)
{
    SignUp::putUserDetails(member, devideMemberType, name, number, id, password);
}