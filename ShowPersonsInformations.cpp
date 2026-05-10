#pragma once
#include<iostream>
#include<vector>
#include "PersonList.h"

#pragma region 显示在校人员信息
void ShowPersonInfo()
{
    std::cout << "训练员：" << std::endl;
    for (size_t i = 0 ; i < TrainerList.size() ; i++)
    {
        std::cout << TrainerList[i] << std::endl;
    }
    std::cout << "学生：" << std::endl;
    for (size_t i = 0 ; i < StudentList.size() ; i++)
    {
        std::cout << StudentList[i] << std::endl;
    }
}
#pragma endregion