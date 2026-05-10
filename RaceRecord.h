#pragma once
#include<iostream>
#include "Time.h"

class RaceRecord : public Time
{
public:
    std::string m_RaceName;
    int m_RaceRank;
    Time m_RaceTime;

    RaceRecord(std::string add_RaceName = "No Race Name" , int add_RaceRank , int add_RaceYear = 0 , int add_RaceMonth = 0 , int add_RaceDay = 0) : Time (add_RaceYear , add_RaceMonth , add_RaceDay)
    {
        // 构造函数
    }

    void ShowRaceRecord()
    {
        // 显示比赛记录
    }

    friend std::ostream& operator << (std::ostream& os , const RaceRecord& raceRecord)
    {
        // 重载操作符
    }
};