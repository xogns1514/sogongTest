#pragma once
#include <iostream>
#include <vector>
#include <tuple>
#include "Member.h"
using namespace std;

class Apply {
private:
    string companyName;         // ȸ�� �̸�
    int companyNumber;         // ����� ��ȣ
    string work;            // ����
    int TO;                  // �ο� �� (ä�� �ο���)
    string deadlineDate;      // ��û ������
    string applierID;         // ä�� ��û�� ID
    string writerID;         // ä�� ����� ȸ�� ȸ�� ID

public:
    string getCompanyName() const;
    string getWork();
    int getCompanyNumber();
    string getApplierID();
    string getWriterID();

    void setApply(string companyName, int companyNumber, string work, int TO, string deadlineDate, string applier);   // ä�� ���� ����
    tuple<string, int, string, int, string, string> getApply();

    void cancelApply();      // ���� ���

};