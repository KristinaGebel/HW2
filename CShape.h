// Filename:CShape.H
// Description: An Abstract class to encapsulate the Shape properties 
// Author: Kristina Gebel
// Date Modified: November 20, 2020
//
#include "Cpoint.h"
#include "CColor.h"

#pragma once 
#if !defined(_CSHAPE_H_)
#define _CSHAPE_H_

class CShape 
{
public:
    // Default Constructor
    CShape(void);
    // Default Destructor 
    ~CShape(void);

public:
    // Calculate the area of this Shape
    double calcArea();
    // Stub that would normally draw this Shape 
    bool draw();

public:
    CPoint m_center;
    CColor m_color;
    double m_rotation;
};

#endif      // _CSHAPE_H_