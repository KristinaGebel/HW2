// Filename:CShape.cpp
// Description: See Header File for structural information 
// Author: Kristina Gebel
// Date Modified: November 20, 2020
//

#include <iostream>
using namespace std;

#include "CShape.H"

CShape::CShape(void)
{
    cout << "Shape class created" << endl;
}

CShape::CShape(void)
{
    cout << "Shape class destroyed" << endl;
}

double CShape::calcArea()
{
    return 0.0;
}
 bool CShape::draw()
{
    cout << "Drawing Shape" << endl;
     return true;
}