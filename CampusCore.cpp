// 核心程序
#include<iostream>
#include "Menu.cpp"
#include "ShowSchoolIntroduction.cpp"
#include "ShowPersonsInformations.cpp"
#include "PersonList.h"

int userInputNumber = 0;
int main()
{
    PrintMenu();
    GetUserOperation(userInputNumber);
    while (userInputNumber != 0)
    {
        switch (userInputNumber)
        {
            case 1:
            {
                ShowSchoolIntroduction();
                GetUserOperation(userInputNumber);
                break;
            }
            case 2:
            {
                ShowSchoolIntroduction();
                GetUserOperation(userInputNumber);
                break;
            }
            case 3:
            {
                AddPersonInfo();
                GetUserOperation(userInputNumber);
                break;
            }
            case 4:
            {
                CheckPersonInfo();
                GetUserOperation(userInputNumber);
                break;
            }
            case 5:
            {
                DeletePersonInfo();
                GetUserOperation(userInputNumber);
                break;
            }
            case 0:
            {
                std::cout << "感谢使用！正在退出程序..." << std::endl;
                return 0; // 退出程序
            }
        }
    }
}