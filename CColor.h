// Filename:CColor.H
// Description: An Abstract class to encapsulate the Color properties 
// Author: Kristina Gebel
// Date Modified: November 20, 2020
//

#pragma once 
#if !defined(_CCOLOR_H_)
#define _CCOLOR_H_

class CColor 
{
public:
    // Default Constructor
    CColor(void);
    // Default Destructor 
    ~CColor(void);

public:

public:
    int m_red;
    int m_green;
    int m_blue;
};

#endif      // _CCOLOR_H_