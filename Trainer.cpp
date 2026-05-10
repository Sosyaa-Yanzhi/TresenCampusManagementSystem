#pragma once
#include<iostream>
#include "Trainer.h"

Trainer::Trainer(std::string add_WorkID , std::string add_Team , std::string add_Name , int add_Age , int add_Weight , int add_Height , int add_ID) : Person(add_Name , add_Age , add_Weight , add_Height , add_ID)
{
    m_WorkID = add_WorkID;
    m_Team = add_Team;
}

void Trainer::AddStudent()
{
    
}

std::ostream& operator << (std::ostream& os , const Trainer& trainer)
{
    os << trainer.m_Name << " " << trainer.m_WorkID << " " << trainer.m_Team << std::endl;
    return os;
}

void Trainer::ShowInfo()
{
    std::cout << "姓名：" << m_Name << std::endl;
    std::cout << "工号：" << m_WorkID << std::endl;
    std::cout << "所属队伍：" << m_Team << std::endl;
}