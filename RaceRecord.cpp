#pragma once
#include<iostream>
#include "RaceRecord.h"

RaceRecord::RaceRecord(std::string add_RaceName = "No Race Name" , int add_RaceRank , int add_RaceYear = 0 , int add_RaceMonth = 0 , int add_RaceDay = 0) : Time (add_RaceYear , add_RaceMonth , add_RaceDay)
{
    m_RaceName = add_RaceName;
    m_RaceRank = add_RaceRank;
}

void RaceRecord::ShowRaceRecord()
{
    std::cout << m_RaceName << " - " << m_Year << "年" << m_Month << "月" << m_Day << "日 " << "第" << m_RaceRank << "着" << std::endl;
}

std::ostream& operator << (std::ostream& os , const RaceRecord& raceRecord)
{
    os << raceRecord.m_RaceName << " " << raceRecord.m_Year << " " << raceRecord.m_Month << " " << raceRecord.m_Day << " " << "第" << raceRecord.m_RaceRank << "着" << std::endl;
    return os;
}