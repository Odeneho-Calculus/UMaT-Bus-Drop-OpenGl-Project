/*
PROJECT TITLE:: UMaT BUS DROP [UBD]
DEVELOPED BY KALCULUS GUY
==========================
ANTWI THOMAS
SRI.41.008.038.22
CE200[B]
OPENGL PROJECT
*/

#ifndef BUS_H
#define BUS_H
#include <stdlib.h>
#include <GL/glut.h>
#include<string.h>
#include<stdio.h>

class Bus
{
    public:
        Bus();

        void Wheel1();
        void Wheel1d();
        void Wheel2();
        void Wheel2d();
        void busStop();
        void Flines();
        void Flinesd();

    protected:

    private:
};

#endif // BUS_H
