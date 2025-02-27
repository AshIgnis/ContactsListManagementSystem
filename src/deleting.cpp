#include "deleting.h"
#include "addressBooks.h"
#include <iostream>
#include <string>
using namespace std;

int isExist(AddressBooks* abs, string name){
    for (int i = 0; i < abs->m_Size; i++){
        if (abs->personArray[i].m_Name == name){
            return i;
            break;
        }
    }
    return -1;
}

void deletePerson(AddressBooks* abs){
    cout << "请输入您要删除的联系人" << endl;

    string name;
    cin >> name;

    int ret = isExist(abs,name);

    if(ret != -1){
        for(int i = ret; i < abs->m_Size; i++){
            abs->personArray[i] = abs->personArray[i+1];
        }
        abs->m_Size--;
        cout << "删除成功" << endl;
    }else{
        cout << "查无此人" << endl;
    }

    system("pause");
    system("cls");
}