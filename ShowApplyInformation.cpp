#include "ShowApplyInformation.h"
#include "CompanyMember.h"
#include <iterator>

ShowApplyInformation::ShowApplyInformation(vector<Apply>& apply, vector<Recruitment>& recruitment) {
    this->applies = apply;
    this->recruitments = recruitment;
}

bool compareName(const Apply& n1, const Apply& n2) {
    return n1.getCompanyName() < n2.getCompanyName();
};

// �Ϲ� ȸ�� ������ ���� ������ ����ϴ� �Լ�
vector<tuple<string, int, string, int, string, string>> ShowApplyInformation::showApply(string memberID, vector<Apply>& apply) {

    vector<tuple<string, int, string, int, string, string>> saveApply;

    sort(apply.begin(), apply.end(), compareName);
    for (int i = 0; i < apply.size(); i++)
    {
        tuple<string, int, string, int, string, string> a;
        a = apply[i].getApply();
        if (memberID == get<5>(a))
        {
            saveApply.push_back(a);
        }
    }
    return saveApply;
}

/*
* ���� ��� ����� �ϴ� �Լ�
*/
void ShowApplyInformation::cancelApply(int companyNumber, string applierID) {

    for (int i = 0; i < sizeof(applies); i++) {
        // ���� ��� �� ���� �α����� ȸ���� �����Ͽ�����
        // �Է¹��� ����� ��ȣ�� ��ġ�ϴ� ���� ��ü�� ��� �ش� ��ü�� ����
        if (applies[i].getCompanyNumber() == companyNumber && applies[i].getApplierID().compare(applierID)) {
            cout << applies[i].getCompanyName() << " " << companyNumber << " " << applies[i].getWork() << endl;
            applies[i].cancelApply();
        }
    }
}

/*
* ���� ���� ��� ������ �������� �Լ�
*/
map<string, int> ShowApplyInformation::showWorkApply(Member member, string ID) {
    map<string, int> countByWork;   // ������ ���� Ƚ���� �����ϴ� map ����
    map<string, int>::iterator it;   // map�� ��ȸ�ϱ� ���� iterator ����

    // ȸ�� ȸ���� ���
    if (typeid(member) == typeid(CompanyMember)) {

        for (int i = 0; i < sizeof(applies); i++) {
            // ������� ����� ��� ä�� ������ ���� ������ ������ �� ���
            if (applies[i].getWriterID().compare(ID)) {
                it = countByWork.find(applies[i].getWork());
                // �ش� ������ map�� ���� ���
                if (it == countByWork.end()) {
                    countByWork[applies[i].getWork()] = 1;   // map�� �߰�
                }
                    // �ش� ������ map�� �ִ� ���
                else {
                    ++countByWork[applies[i].getWork()];   // ���� value ���� 1 ����
                }
            }
        }
    }

        // �Ϲ� ȸ���� ���
    else {

        for (int i = 0; i < sizeof(applies); i++) {

            // ������ ������ ������ ���� ������ ���� Ƚ�� ���
            if (applies[i].getApplierID().compare(ID)) {
                it = countByWork.find(applies[i].getWork());

                // �ش� ������ map�� ���� ���
                if (it == countByWork.end()) {
                    countByWork[applies[i].getWork()] = 1;   // map�� �߰�
                }
                    // �ش� ������ map�� �ִ� ���
                else {
                    ++countByWork[applies[i].getWork()];   // ���� value ���� 1 ����
                }

            }
        }

        return countByWork;
    }
}