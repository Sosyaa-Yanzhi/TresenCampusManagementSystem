#pragma once
#include<iostream>
#include<vector>
#include "Person.h"
#include "RaceRecord.h"
class Trainer;
class Student : public Person
{
public:
    std::string m_SchoolID;
    Trainer *m_Trainer;
    std::string m_Team;
    std::vector<RaceRecord> m_RaceRecord;

    Student(std::string add_TeamName , std::string add_SchoolID , std::string add_Name = "No Name" , int add_Age = 0 , int add_Weight = 0 , int add_Height = 0 , int add_ID = 0) : Person(add_Name , add_Age , add_Weight , add_Height , add_ID)
    {
        // 构造函数
    }

    void ShowRaceRecord()
    {
        // 显示比赛记录
    }

    void AddRaceRecord()
    {
        // 添加比赛记录
    }

    void DeleteRaceRecord()
    {
        // 删除比赛记录
    }

    void ChangeTrainer()
    {
        // 更换训练员信息
    }

    friend std::ostream& operator << (std::ostream& os , const Student& student)
    {
        // 重载操作符
    }

    void ShowInfo()
    {
        // 显示详细信息
    }
};