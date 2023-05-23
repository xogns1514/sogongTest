#include "ShowApplyInformationUI.h"

ShowApplyInformationUI::ShowApplyInformationUI(vector<Apply>& apply, vector<Recruitment>& recruitment) {
    this->showApplyInformation = ShowApplyInformation(apply, recruitment);
}

// 4.3 지원 정보 조회
void ShowApplyInformationUI::inquireApply(string memberID, vector<Apply>& apply) {
    cout << "4.3. 지원 정보 조회" << endl;
    vector<tuple<string, int, string, int, string, string>> saveApply;
    saveApply = showApplyInformation.showApply(memberID, apply);

    for (int i = 0; i < saveApply.size(); i++)
    {
        tuple<string, int, string, int, string, string> a = saveApply[i];
        cout << "> " << get<0>(a) << " " << get<1>(a) << " " << get<2>(a) << " " << get<3>(a) << " " << get<4>(a) << endl;
    }
}

/*
* 4.4 지원 취소 입력
*/
void ShowApplyInformationUI::cancelApply(int companyNumber, string applierID) {
    cout << "4.4. 지원 취소" << endl;
    showApplyInformation.cancelApply(companyNumber, applierID);
}

/*
* 5.1 지원 정보 통계 입력
*/
void ShowApplyInformationUI::showWorkApply(Member member, string ID) {
    cout << "5.1. 지원 정보 통계" << endl;
    map<string, int> countByWork = showApplyInformation.showWorkApply(member, ID);

    for (map<string, int>::iterator it = countByWork.begin(); it != countByWork.end(); it++) {
        cout << "< " << it->first << " " << it->second << endl;
    }
}
