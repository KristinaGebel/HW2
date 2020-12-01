// Filename:CPoint.cpp
// Description: See Header File for structural information 
// Author: Kristina Gebel
// Date Modified: November 20, 2020
//

#include <iostream>
using namespace std;

#include "CPoint.h"

CPoint::CPoint(void)
{
    m_xLocation = 0.0;
    m_yLocation = 0.0;
    cout << "Point class created (" << m_xLocation << ", " << m_yLocation << ")" << endl;
}

CPoint::CPoint(void)
{
    cout << "Point class destroyed" << endl;
}

double CPoint::calculateDistance(CPoint p)
{
    return 0.0;
}