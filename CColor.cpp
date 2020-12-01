// Filename:CColor.cpp
// Description: See Header File for structural information 
// Author: Kristina Gebel
// Date Modified: November 20, 2020
//

#include <iostream>
using namespace std;

#include "CColor.h"

CColor::CColor(void)
{
    m_red = 22;
    m_green = 0;
    m_blue = 42;    

    cout << "Color class created (" << m_red << ", "<< m_green << ", " << m_blue << ")" << endl;
}

CColor::CColor(void)
{
    cout << "Color class destroyed" << endl;
}