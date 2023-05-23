#ifndef SEARCHRECRUITMENTUI_H
#define SEARCHRECRUITMENTUI_H

#pragma once
#include "SearchRecruitment.h"

// ä�� ����(Recruitment)�� ȭ�鿡 ����ϴ� boundary class
class SearchRecruitmentUI {
private:
    SearchRecruitment searchRecruitment;
public:
    SearchRecruitmentUI();
    static void SearchByCompanyName(string companyName, vector<Recruitment>& recruitment); // 4.1 ä�� ���� �˻�
    void ApplyEmployment(int companyNumber, string applierID, vector<Recruitment>& recruitment, vector<Apply>& apply); // 4.2 ä�� ����
};


#endif
