#include "Apply.h"

string Apply::getCompanyName() const{
    return companyName;
}

int Apply::getCompanyNumber() {
    return companyNumber;
}

string Apply::getWork() {
    return work;
}


string Apply::getApplierID() {
    return applierID;
}


string Apply::getWriterID() {
    return writerID;
}


void Apply::setApply(string _companyName, int _companyNumber, string _work, int _TO, string _deadlineDate, string _applier) {
    this->companyName = _companyName;
    this->companyNumber = _companyNumber;
    this->work = _work;
    this->TO = _TO;
    this->deadlineDate = _deadlineDate;
    this->applierID = _applier;
}

tuple<string, int, string, int, string, string> Apply::getApply() {
    return make_tuple(companyName, companyNumber, work, TO, deadlineDate, applierID);
}

/*
* ���� ��� ���
* �Ϲ� ȸ���� ���� �������� ä�� ������ ���� ���� ���
* �ش� ��ü ����
*/
void Apply::cancelApply() {
    delete this;
}