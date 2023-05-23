#include "SignUpUI.h"

SignUpUI::SignUpUI() : signUp(){}

/*
 * 회원탈퇴 boundary class
 */

void SignUpUI::putUserDetails(vector<Member>& member, int devideMemberType, string name, int number, string id, string password)
{
    cout << "1.1. 회원가입" << endl;

    SignUp::putUserDetails(member, devideMemberType, name, number, id, password);
}