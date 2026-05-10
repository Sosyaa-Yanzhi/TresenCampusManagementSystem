#pragma once
#include<iostream>
#include "Person.h"

void Person::ShowPrivateInfo()
{
    std::cout << " - 年龄：" << m_Age << std::endl;
    std::cout << " - 身份证号：" << m_ID << std::endl;
    std::cout << " - 体重：" << m_Weight << std::endl;
    std::cout << " - 身高：" << m_Height << std::endl;
}

Person::Person(std::string add_Name = "No Name" , int add_Age = 0 , int add_Weight = 0 , int add_Height = 0 , int add_ID = 0)
{
    m_Name = add_Name;
    m_Age = add_Age;
    m_Weight = add_Weight;
    m_Height = add_Height;
    m_ID = add_ID;
}

Person::~Person()
{
    std::cout << "已删除人员信息：" << m_Name << std::endl;
}