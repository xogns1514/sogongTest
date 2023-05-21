#include "AddRecruitmentUI.h"
#include "ManageRecruitment.h"
#include <iostream>

using namespace std;

void AddRecruitmentUI::createNewRecruitment(vector<Recruitment>& recruitments){
    //채용 정보 입력 받기
    string work;
    int numOfPeople;
    string dueDate;

    cout << "채용정보 등록 [업무] [인원수] [마감일]" << endl;
    cin >> work >> numOfPeople >> dueDate;

    ManageRecruitment::addNewRecruitment(recruitments, work, numOfPeople, dueDate);
};
