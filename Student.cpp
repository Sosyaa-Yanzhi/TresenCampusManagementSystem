#include<iostream>
#include<vector>
#include "Student.h"
#include "PersonList.h"
class Trainer;

Student::Student(std::string add_TeamName , std::string add_SchoolID , std::string add_Name , int add_Age , int add_Weight , int add_Height , int add_ID) : Person(add_Name , add_Age , add_Weight , add_Height , add_ID)
{
    m_Team = add_TeamName;
    m_SchoolID = add_SchoolID;
}

void Student::ShowRaceRecord()
{
    for (size_t i = 0 ; i < m_RaceRecord.size() ; i++)
    {
        m_RaceRecord[i].ShowRaceRecord();
    }
}

void Student::AddRaceRecord()
{
    std::cout << "请输入要添加的比赛记录（比赛名 年 月 日 名次数字）：" << std::endl;
    std::string add_RaceName;
    int add_RaceYear , add_RaceMonth , add_RaceDay , add_RaceRank;
    std::cin >> add_RaceName >> add_RaceYear >> add_RaceMonth >> add_RaceDay >> add_RaceRank;
    RaceRecord add_RaceRecord(add_RaceName , add_RaceYear , add_RaceMonth , add_RaceDay , add_RaceRank);
    this->m_RaceRecord.push_back(add_RaceRecord);
}

void Student::DeleteRaceRecord()
{
    std::cout << "请输入要删除的比赛记录（输入比赛名称 比赛年份）：" << std::endl;
    std::string delete_RaceName;
    int delete_RaceYear;
    bool isRecordExist = false;
    std::cin >> delete_RaceName >> delete_RaceYear;
    for (int i = m_RaceRecord.size() - 1 ; i >= 0 ; i--)
    {
        if (m_RaceRecord[i].m_RaceName == delete_RaceName && m_RaceRecord[i].m_Year == delete_RaceYear)
        {
            isRecordExist = true;
            std::cout << "已成功删除记录：" << std::endl;
            std::cout << m_RaceRecord[i] << std::endl;
            m_RaceRecord.erase(m_RaceRecord.begin() + i);
            break;
        }
    }
    if (!isRecordExist)
    {
        std::cout << "比赛记录不存在！" << std::endl;
    }
}

void Student::ChangeTrainer()
{
    std::string new_Trainer_Name;
    std::cout << "输入新的训练员名称:" << std::endl;
    std::cin >> new_Trainer_Name;
    bool isTrainerInList = false;
    while (!isTrainerInList)
    {
        for (size_t i = 0 ; i < TrainerList.size() ; i++)
        {
            if (TrainerList[i].m_Name == new_Trainer_Name)
            {
                isTrainerInList = true;
                m_Trainer = &TrainerList[i];
                std::cout << "成功更新" << m_Name << "的训练员为：" << m_Trainer->m_Name << "！" << std::endl;
                break;
            }
        }
        if (!isTrainerInList)
        {
            std::cout << "未找到训练员！请重新输入训练员名称：" << std::endl;
            std::cin >> new_Trainer_Name;
        }
    }
}

std::ostream& operator << (std::ostream& os , const Student& student)
{
    os << student.m_Name << " " << student.m_SchoolID << " " << student.m_Team << std::endl;
    return os;
}

void Student::ShowInfo()
{
    std::cout << "姓名：" << m_Name << std::endl;
    std::cout << "学生号：" << m_SchoolID << std::endl;
    std::cout << "训练员：" << m_Trainer->m_Name << std::endl;
    std::cout << "所属队伍：" << m_Team << std::endl;
    std::cout << "比赛记录：" << std::endl;
}