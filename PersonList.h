#pragma once
#include<iostream>
#include<vector>
#include "Trainer.h"
#include "Student.h"

static std::vector<Trainer> TrainerList;

static std::vector<Student> StudentList;

#pragma region 内部方法：查找人员于容器中的位置
template<class PersonType>
bool isPersonInList(PersonType target_Person , int &target_index = 0)
{
    bool isPersonFound = false;
    if (typeid(PersonType) == typeid(Student))
    {
        for (size_t i = 0 ; i < StudentList.size() ; i++)
        {
            if (target_Person == StudentList[i])
            {
                isPersonFound = true;
                target_index = i;
                break;
            }
        }
    }
    else if (typeid(PersonType) == typeid(Trainer))
    {
        for (size_t i = 0 ; i < TrainerList.size() ; i++)
        {
            if (target_Person == TrainerList[i])
            {
                isPersonFound = true;
                target_index = i;
                break;
            }
        }
    }
    return isPersonFound;
}
#pragma endregion

#pragma region 添加人员到名单中
template <class PersonType>
void AddToPersonList(PersonType add_Person)
{
    if (typeid(PersonType) == typeid(Student))
    {
        StudentList.push_back(add_Person);
    }
    if (typeid(PersonType) == typeid(Trainer))
    {
        TrainerList.push_back(add_Person);
    }
}
#pragma endregion

#pragma region 从名单中移除人员
template <class PersonType>
void RemoveFromPersonList(PersonType remove_Person)
{
    int target_index = 0;
    if (isPersonInList(remove_Person , target_index))
    {
        if (typeid(PersonType) == typeid(Student))
        {
            StudentList.erase(StudentList.begin() + target_index);
            remove_Person.delete();
        }
        else if (typeid(PersonType) == typeid(Trainer))
        {
            TrainerList.erase(Trainer.begin() + target_index);
        }
    }
    else
    {
        target_index = 0;
        std::cout << "人员不在名单中！" << std::endl;
    }
}
#pragma endregion