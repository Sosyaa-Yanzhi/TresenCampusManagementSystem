#pragma once
#include<iostream>
#include<vector>
#include "PersonList.h"

#pragma region 显示主菜单
extern void PrintMenu()
{
    std::cout << " ====== 特雷森校园管理器 ====== " << std::endl;
    std::cout << "<输入 1> 学校介绍" << std::endl;
    std::cout << "<输入 2> 显示在校人员信息" << std::endl;
    std::cout << "<输入 3> 增加人员信息" << std::endl;
    std::cout << "<输入 4> 查询人员信息" << std::endl;
    std::cout << "<输入 5> 删除人员信息" << std::endl;
    std::cout << "<输入 0> 退出程序" << std::endl;
}
#pragma endregion

#pragma region 用户输入数字操作
extern void GetUserOperation(int &UserInputNumber)
{
    std::cout << "输入对应数字以进行相应操作：" << std::endl;
    std::cin >> UserInputNumber;
}
#pragma endregion

#pragma region 用户添加人员信息
void AddPersonInfo()
{
    int add_PersonType = 0;
    int add_Age , add_Height , add_Weight , add_PersonalID;
    std::string add_Name , add_ID , add_Team;
    std::cout << "输入要添加的人员身份（0 - 训练员；1 - 学生）：" << std::endl;
    std::cin >> add_PersonType;

    // 添加训练员信息
    if (add_PersonType == 0)
    {
        std::cout << "按照以下格式输入：" << std::endl;
        std::cout << "姓名 年龄 体重 身高 身份证号 工号 队伍名" << std::endl;
        std::cin >> add_Name >> add_Age >> add_Weight >> add_Height >> add_PersonalID >> add_ID >> add_Team;
        Trainer newTrainer(add_ID , add_Team , add_Name , add_Age , add_Weight , add_Height , add_PersonalID);
        AddToPersonList(newTrainer);
    }

    // 添加学生信息
    if (add_PersonType == 1)
    {
        std::cout << "按照以下格式输入：" << std::endl;
        std::cout << "姓名 年龄 体重 身高 身份证号 学生号 队伍名" << std::endl;
        std::cin >> add_Name >> add_Age >> add_Weight >> add_Height >> add_PersonalID >> add_ID >> add_Team;
        Student newStudent(add_Team , add_ID , add_Name , add_Age , add_Weight , add_Height , add_PersonalID);
        AddToPersonList(newStudent);
    }
}
#pragma endregion

#pragma region 用户删除人员信息
void DeletePersonInfo()
{
    std::string delete_PersonName;
    int delete_PersonType = 0;
    std::cout << "请输入要删除的人员身份（0 - 训练员；1 - 学生）：" << std::endl;
    std::cin >> delete_PersonType;
    
    bool isPersonInList = false;

    // 删除训练员信息
    if (delete_PersonType == 0)
    {
        std::cout << "请输入要删除的人员的姓名：" << std::endl;
        std::cin >> delete_PersonName;
        for (int i = 0 ; i < TrainerList.size() ; i++)
        {
            if (TrainerList[i].m_Name == delete_PersonName)
            {
                isPersonInList = true;
                RemoveFromPersonList(TrainerList[i]);
                break;
            }
        }
        if (!isPersonInList)
        {
            std::cout << "未查询到人员信息！" << std::endl;
        }
    }

    // 删除学生信息
    if (delete_PersonType == 1)
    {
        std::cout << "请输入要删除的人员的姓名：" << std::endl;
        std::cin >> delete_PersonName;
        for (int i = 0 ; i < StudentList.size() ; i++)
        {
            if (StudentList[i].m_Name == delete_PersonName)
            {
                isPersonInList = true;
                RemoveFromPersonList(StudentList[i]);
                break;
            }
        }
        if (!isPersonInList)
        {
            std::cout << "未查询到人员信息！" << std::endl;
        }
    }
}
#pragma endregion

#pragma region 用户查询人员信息
void CheckPersonInfo()
{
    int check_PersonType = 0;
    std::string check_PersonName;
    std::cout << "请输入要查询的人员的身份（0 - 训练员；1 - 学生）：" << std::endl;
    std::cin >> check_PersonType;
    std::cout << "请输入要查询的人员的姓名：" << std::endl;
    std::cin >> check_PersonName;

    bool isPersonInList = false;

    // 查询并显示训练员信息
    if (check_PersonType == 0)
    {
        for (int i = 0 ; i < TrainerList.size() ; i++)
        {
            if (TrainerList[i].m_Name == check_PersonName)
            {
                isPersonInList = true;
                TrainerList[i].ShowInfo();
                break;
            }
        }
        if (!isPersonInList)
        {
            std::cout << "未查询到人员信息！" << std::endl;
        }
    }

    // 查询并显示学生信息
    if (check_PersonType == 1)
    {
        for (int i = 0 ; i < StudentList.size() ; i++)
        {
            if (StudentList[i].m_Name == check_PersonName)
            {
                isPersonInList = true;
                StudentList[i].ShowInfo();
                break;
            }
        }
        if (!isPersonInList)
        {
            std::cout << "未查询到人员信息！" << std::endl;
        }
    }
}
#pragma endregion