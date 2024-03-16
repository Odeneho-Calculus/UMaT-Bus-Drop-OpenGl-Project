/*
PROJECT TITLE:: UMaT BUS DROP [UBD]
DEVELOPED BY KALCULUS GUY
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


#define maxx 10
#define maxy 12
#define dx 27.7
#define dy 12


class Buildings
{
    public:
        Buildings();
        void buildingd();
        void Walld();
        void Gated();

    protected:

    private:
};

#endif // BUILDINGS_H
