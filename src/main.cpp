#include <iostream>
#include "menu.h"
#include "adding.h"
#include "showing.h"
#include "deleting.h"
#include "searching.h"
#include "modifying.h"
#include "clearing.h"
#include "addressbooks.h"

using namespace std;

int main(){
    AddressBooks abs;
    abs.m_Size = 0;

    int select = 0;

    while(1){
        showMenu();//菜单调用
        cout << "请输入您的选择：";
        cin >> select;
        switch(select){
            case 1: //添加联系人
                addPerson(&abs); //地址传递修改值
                break;
            case 2: //显示联系人
                showPerson(&abs);
                break;
            case 3: //删除联系人
                deletePerson(&abs);
                break;
            case 4: //查找联系人
                findPerson(&abs);
                break;
            case 5: // 修改联系人
                
                break;
            case 6: //清空联系人
                
                break;
            case 0: //退出通讯录
                cout << "欢迎下次使用" << endl;
                system("pause");
                return 0;
                break;
            default:
                break;
        }
    }

    system("pause");
    return 0;
}
