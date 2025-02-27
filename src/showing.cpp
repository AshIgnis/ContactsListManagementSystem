#include "showing.h"
#include <iostream>
#include "addressbooks.h"
#include <string>

using namespace std;

void showPerson(AddressBooks *abs) {
    if (abs->m_Size == 0) {
        cout << "当前记录为空" << endl;
    } else {
        for (int i = 0; i < abs->m_Size; i++) {
            cout << "姓名: " << abs->personArray[i].m_Name << "\t" << endl;
            cout << "性别: " << abs->personArray[i].m_Sex << "\t" << endl;
            cout << "年龄: " << abs->personArray[i].m_Age << "\t" << endl;
            cout << "电话: " << abs->personArray[i].m_Phone << "\t" << endl;
            cout << "住址: " << abs->personArray[i].m_Addr << "\t" << endl;
        }
    }
    system("pause");
    system("cls");
}