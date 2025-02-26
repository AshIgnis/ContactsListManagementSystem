#include "adding.h"
#include <iostream>
using namespace std;

void addPerson(AddressBooks *abs) {
    if (abs->m_Size == MAX) {
        cout << "通讯录已满，无法添加" << endl;
        return;
    }

    // 添加联系人
    Person p;
    cout << "请输入姓名：" << endl;
    cin >> p.m_Name;
    cout << "请输入性别：" << endl;
    cin >> p.m_Sex;
    cout << "请输入年龄：" << endl;
    cin >> p.m_Age;
    cout << "请输入电话：" << endl;
    cin >> p.m_Phone;
    cout << "请输入住址：" << endl;
    cin >> p.m_Addr;

    // 将联系人添加到通讯录中
    abs->personArray[abs->m_Size] = p;
    abs->m_Size++;

    cout << "添加成功" << endl;
    system("pause");
    system("cls");
}