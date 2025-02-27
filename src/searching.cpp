#include "searching.h"
#include <iostream>
#include "addressBooks.h"
using namespace std;

void findPerson(AddressBooks* abs) {
    string name;
    cout << "请输入您要查找的联系人姓名：" << endl;
    cin >> name;
    bool found = false;
    for (int i = 0; i < abs->m_Size; i++) {
        if (abs->personArray[i].m_Name == name) {
            cout << "姓名：" << abs->personArray[i].m_Name << "\t";
            cout << "性别：" << abs->personArray[i].m_Sex << "\t";
            cout << "年龄: " << abs->personArray[i].m_Age << "\t";
            cout << "电话：" << abs->personArray[i].m_Phone << "\t";
            cout << "住址: " << abs->personArray[i].m_Addr << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "查无此人" << endl;
    }
    system("pause");
    system("cls");
}