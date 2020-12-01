// Filename:CPoint.H
// Description: An Abstract class to encapsulate the Point properties 
// Author: Kristina Gebel
// Date Modified: November 20, 2020
//

#pragma once 
#if !defined(_CPOINT_H_)
#define _CPOINT_H_

class CPoint 
{
public:
    // Default Constructor
    CPoint(void);
    // Default Destructor 
    ~CPoint(void);

public:
    // Calculate the distance between this and another point 
    double calculateDistance(CPoint p);

public:
    // Member variables of class point defined by x value and y value 
    double m_xLocation;
    double m_yLocation;

};

#endif      // _CPOINT_H_