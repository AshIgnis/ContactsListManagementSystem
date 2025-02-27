#include "clearing.h"
#include <iostream>
#include "addressBooks.h"
using namespace std;

void clearPerson(AddressBooks* abs){
    abs->m_Size = 0;
    cout << "通讯录已清空" << endl;
    system("pause");
    system("cls");
}