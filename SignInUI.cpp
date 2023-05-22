#include "SignInUI.h"

SignInUI::SignInUI() : signIn(){}

/*
 * 로그인 boundary class
 */
void SignInUI::putUserDetails(vector<Member>& member, Member& currentMember, string id, string password)
{
    SignIn::putUserDetails(member,currentMember, id, password);
}