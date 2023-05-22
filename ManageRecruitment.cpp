#include <iostream>
#include "ManageRecruitment.h"
#include <vector>

using namespace std;

void ManageRecruitment::addNewRecruitment(vector<Recruitment> &recruitments, const string &companyName,
                                          const int &companyNumber, const string &work, const int &numOfPeople,
                                          const string &dueDate) {
    Recruitment newRecruitment(companyName, companyNumber, work, numOfPeople, dueDate);
    recruitments.push_back(newRecruitment);
}

void ManageRecruitment::showRecruitmentDetail(vector<Recruitment>& recruitments){
    if(recruitments.empty()){
        cout << "등록된 채용 정보가 없습니다. " << endl;
    }
    else {
        for(Recruitment i : recruitments){
            cout 
            << "{ "
            << "[회사이름: " << i.getCompanyName() << "]"
            <<  "[" <<i.getWork() << "] "
            << "["<<i.getNumOfPeople() << "] "
            << "[" << i.getDueDate() << "] "
            << "}" << endl;
        }
    }
}
