/*
PROJECT TITLE:: UMaT BUS DROP [UBD]
DEVELOPED BY KALCULUS GUY
==========================
ANTWI THOMAS
SRI.41.008.038.22
CE200[B]
OPENGL PROJECT
*/

#include "kalText.h"
#include <stdlib.h>
#include <GL/glut.h>
#include<string.h>
#include<stdio.h>

float p=0.0,q=0.0;

kalText::kalText()
{

    //ctor
}

void kalText::outputTitle(int x, int y, char *string){
    void *font=GLUT_BITMAP_TIMES_ROMAN_24;
      int len, i;

           glRasterPos2f(x,y);
           len=(int) strlen(string);
           for (i = 0; i < len; i++)
			{
             glutBitmapCharacter(font,string[i]);
			}
}

void kalText::outputNorm(int x, int y, char *string){
    void *font=GLUT_BITMAP_HELVETICA_18;
      int len, i;

           glRasterPos2f(x,y);
           len=(int) strlen(string);
           for (i = 0; i < len; i++)
			{
             glutBitmapCharacter(font,string[i]);
			}
}


void kalText::starterPage(){

glColor3f(1.0,0.0,0.0);
outputTitle(200, 600, "UNIVERSITY OF MINES AND TECHNOLOGY - SRID");

glColor3f(0.0,1.0,0.0);
outputTitle(150, 530, "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");

glColor3f(0.0,1.0,0.0);
outputTitle(370, 430, "By Kalculus Guy");


glColor3f(0.0,1.0,0.0);
outputNorm(60, 100, "Under The Guidance Of ");

glColor3f(0.0,1.0,0.0);
outputNorm(60, 80, "Dr. Ezekiel Martey");


glColor3f(0.0,1.0,0.0);
outputNorm(60, 60, "Lecturer @UMaT - SRID");


glColor3f(1.0,0.0,0.0);
outputNorm(670, 160, "Click anywhere to Start");
}


//Mission Complete
void kalText::missionPletePage(){

glColor3f(0.0,1.0,0.0);
outputTitle(300, 430, "Mission Complete");

glColor3f(1.0,0.0,0.0);
outputNorm(670, 160, "Click anywhere to Start");
}

void kalText::text(){
glColor3f(1.0,1.0,1.0);
outputTitle(280,602, "BUS STOP");
}

void kalText::textd(){
outputTitle(420,602-175, "");
}

void kalText::text1(){
glColor3f(0.0,0.0,0.0);
outputTitle(200+p,400, "UMaT SRID");
}

void kalText::text1d(){
glColor3f(0.0,0.0,0.0);
outputTitle(200+p,400-175, "UMaT SRID");
}


void kalText::text2(){
  glBegin(GL_POLYGON);
  glColor3f(0.0,0.0,1.0);
  glVertex2i(830-600,120+150);
    //glColor3f(0.0,1.0,0.0);
  glVertex2i(1000-600+40,120+150);
    glColor3f(0.0,0.0,0.0);
  glVertex2i(1000-600+40,35+150);
    glColor3f(0.0,0.0,0.0);
  glVertex2i(830-600,35+150);
  glEnd();

glColor3f(1.0,1.0,1.0);
outputTitle(830-600+20,100+150, "Pick up Kalculus");

glColor3f(1.0,1.0,1.0);
outputTitle(830-600+20,80+150, "at the bus stop");

glColor3f(1.0,1.0,1.0);
outputTitle(830-600+20,60+150, "using the arrow ");

glColor3f(1.0,1.0,1.0);
outputTitle(830-600+20,40+150, " keys ");


}

void kalText::text2d(){
   glColor3f(0.0,0.0,0.0);
   outputTitle(200,400, "UMaT School Of");


      glColor3f(0.0,0.0,0.0);
   outputTitle(230,380, "Railways & ");


         glColor3f(0.0,0.0,0.0);
   outputTitle(215,360, "Infrastructure ");

            glColor3f(0.0,0.0,0.0);
   outputTitle(220,340, "Development");

               glColor3f(0.0,0.0,0.0);
   outputTitle(225+6,315, "@Essikado");

}

void kalText::text3(){
  glBegin(GL_POLYGON);
  glColor3f(0.0,0.0,0.1);
  glVertex2i(830-600,120+150);
  glVertex2i(1000-500+40,120+150);
  glVertex2i(1000-500+40,35+150);
  glVertex2i(830-600,35+150);
  glEnd();

  glColor3ub(240,0,0);
  outputTitle(832-600+20,100+150, "Good! Now get Kalculus");

    glColor3ub(240,0,0);
  outputTitle(832-600+20,100+130, "to UMaT SRID Campus");

    glColor3ub(240,0,0);
  outputTitle(834-600+20,100+110, "just straight ahead.");
}

void kalText::text3d(){
   glColor3f(0.0,0.0,0.0);
  outputTitle(230+140,400+65, "STOP");

}

void kalText::text4d(){
     glBegin(GL_POLYGON);
     glColor3ub(150,150,250);
     glVertex2i(830-500,120-50);
     glVertex2i(1020-500,120-50);
     glVertex2i(1020-500,35-50);
     glVertex2i(830-500,35-50);
     glEnd();


  glColor3ub(0,0,0);
  outputTitle(832-500+7,100-50, "Drop him at the");

  glColor3ub(0,0,0);
  outputTitle(832-500+7,100-70, "Stop sign");

}


void kalText::text5d(){
     glBegin(GL_POLYGON);
     glColor3ub(20,3,5);
     glVertex2i(830-500,120-50);
     glVertex2i(1060-500,120-50);
     glVertex2i(1060-500,35-50);
     glVertex2i(830-500,35-50);
     glEnd();

glColor3ub(255,255,255);
  outputTitle(832-500,100-50, "Mission Accomplished!");

  glColor3ub(255,255,255);
  outputTitle(832-500,100-70, "Parking is right ahead");

}
