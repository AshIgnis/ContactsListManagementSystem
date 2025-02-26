#ifndef ADDRESSBOOKS_H
#define ADDRESSBOOKS_H

#include <string>

#define MAX 1000

struct Person {
    std::string m_Name; // 姓名
    std::string m_Sex;  // 性别
    int m_Age;          // 年龄
    std::string m_Phone;// 电话
    std::string m_Addr; // 住址
};

struct AddressBooks {
    Person personArray[MAX]; // 联系人数组
    int m_Size;              // 联系人个数
};

#endif // ADDRESSBOOKS_H