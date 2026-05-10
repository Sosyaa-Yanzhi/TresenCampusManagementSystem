#pragma once
#include<iostream>

class Person
{
private:
    int m_Age;
    float m_Weight;
    float m_Height;
    int m_ID;

    void ShowPrivateInfo()
    {
        // 显示私人信息
    }
public:
    std::string m_Name;
    
    Person(std::string add_Name = "No Name" , int add_Age = 0 , int add_Weight = 0 , int add_Height = 0 , int add_ID = 0)
    {
        // 构造函数
    }

    ~Person()
    {
        // 析构函数
    }
};