/*
PROJECT TITLE:: UMaT BUS DROP [UBD]
DEVELOPED BY KALCULUS GUY
==========================
ANTWI THOMAS
SRI.41.008.038.22
CE200[B]
OPENGL PROJECT
*/

#ifndef KALTEXT_H
#define KALTEXT_H
#include <stdlib.h>
#include <GL/glut.h>
#include<string.h>
#include<stdio.h>



class kalText
{
    public:
        kalText();
        void outputTitle(int, int, char *);
        void outputNorm(int, int, char *);
        void starterPage();
        void missionPletePage();
        void text();
        void textd();
        void text1();
        void text1d();
        void text2();
        void text2d();
        void text3();
        void text3d();
        void text4d();
        void text5d();

    protected:

    private:
};

#endif // KALTEXT_H
