/*
PROJECT TITLE:: UMaT BUS DROP [UBDS]
INTRODUCED IN OOP BY KALCULUS GUY
==========================
ANTWI THOMAS
SRI.41.008.038.22
CE200[B]
OPENGL PROJECT
*/

#ifndef BUILDINGS_H
#define BUILDINGS_H
#include <stdlib.h>
#include <GL/glut.h>
#include<string.h>
#include<stdio.h>


#define maxx 10  // Maximum value for x-coordinate
#define maxy 12  // Maximum value for y-coordinate
#define dx 27.7   // Change in x-coordinate for building placement
#define dy 12     // Change in y-coordinate for building placement



class Buildings
{
    public:
        Buildings();   // Constructor
        void buildingd();   // Function to draw buildings
        void Walld();   // Function to draw walls
        void Gated();   // Function to draw gates


    protected:

    private:
};

#endif // BUILDINGS_H
