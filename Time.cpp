#pragma once
#include<iostream>
#include "Time.h"

Time::Time(int add_Year = 0 , int add_Month = 0 , int add_Day = 0)
{
    m_Year = add_Year;
    m_Month = add_Month;
    m_Day = add_Day;
}