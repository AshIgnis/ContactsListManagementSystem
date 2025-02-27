#include "modifying.h"
#include <iostream>
#include "addressBooks.h"
#include "deleting.h"
using namespace std;

void modifyPerson(AddressBooks* abs){
    cout << "请输入您要修改的联系人的姓名：" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);
    if(ret == -1){
        cout << "查无此人" << endl;
    }else{
        cout << "请输入新的姓名：" << endl;
        string newName;
        cin >> newName;
        abs->personArray[ret].m_Name = newName;

        cout << "请输入新的性别：" << endl;
        string newSex;
        cin >> newSex;
        abs->personArray[ret].m_Sex = newSex;

        cout << "请输入新的年龄：" << endl;
        int newAge;
        cin >> newAge;
        abs->personArray[ret].m_Age = newAge;

        cout << "请输入新的电话：" << endl;
        string newPhone;
        cin >> newPhone;
        abs->personArray[ret].m_Phone = newPhone;

        cout << "请输入新的地址：" << endl;
        string newAddr;
        cin >> newAddr;
        abs->personArray[ret].m_Addr = newAddr;

        cout << "修改成功" << endl;
    }
    system("pause");
    system("cls");
}