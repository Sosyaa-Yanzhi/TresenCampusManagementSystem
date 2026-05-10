#pragma once
#include "Person.h"
#include<iostream>
#include<vector>

class Student;

class Trainer : public Person
{
public:
    std::string m_WorkID;
    std::string m_Team;
    std::vector<Student*> m_Students;

    Trainer(std::string add_WorkID = "No workID" , std::string add_Team = "No Team" , std::string add_Name = "No Name" , int add_Age = 0 , int add_Weight = 0 , int add_Height = 0 , int add_ID = 0) : Person(add_Name , add_Age , add_Weight , add_Height , add_ID)
    {
        // 构造函数
    }

    void AddStudent()
    {
        // 添加学生函数
    }

    friend std::ostream& operator << (std::ostream& os , const Trainer& trainer)
    {
        // 重载操作符
    }

    void ShowInfo()
    {
        // 显示个人详细信息
    }
};