#include "AddRecruitmentUI.h"
#include "ManageRecruitment.h"
#include <iostream>

using namespace std;

void AddRecruitmentUI::createNewRecruitment(vector<Recruitment>& recruitments, Member& company){

    string companyName = company.getName();

    cout << "회사이름" << company.getName() << endl;

    int companyNumber = company.getNumber();

    cout << "회사 번호" << company.getNumber() << endl;

    //채용 정보 입력 받기
    string work;
    int numOfPeople;
    string dueDate;

    cout << "채용정보 등록 [업무] [인원수] [마감일]" << endl;
    cin >> work >> numOfPeople >> dueDate;

    ManageRecruitment::addNewRecruitment(recruitments, companyName, companyNumber, work, numOfPeople, dueDate);
};
