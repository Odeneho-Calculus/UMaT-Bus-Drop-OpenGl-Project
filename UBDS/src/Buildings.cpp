/*
PROJECT TITLE:: UMaT BUS DROP [UBDS]
INTRODUCED IN OOP BY KALCULUS GUY
==========================
ANTWI THOMAS
SRI.41.008.038.22
CE200[B]
OPENGL PROJECT
*/

#include "Buildings.h"
#include <stdlib.h>
#include <GL/glut.h>
#include<string.h>
#include<stdio.h>
#include <iostream>

using namespace std;

#define maxx 10
#define maxy 12
#define dx 27.7
#define dy 12



Buildings::Buildings()
{
    //ctor
}
void Buildings::buildingd(){

    double winLen2=30;
    double winThick2=30;
    double doorLen2=60;
    double doorThick2=40;
//b1
//FrontView
  glBegin(GL_POLYGON);
  glColor3ub(255,70,20);
  glVertex2i(770,630);//topLeft
  glVertex2i(930,630);//topRight
  glVertex2i(930,385);//bottomRight
  glVertex2i(770,385);//bottomLeft
  glEnd();

  //sideview
 glBegin(GL_POLYGON);
glColor3ub (92, 145, 214);
  glVertex2i(930,630);//topLeft
  glVertex2i(1110,700);//topRight
  glVertex2i(1110,450);//bottomRight
  glVertex2i(930,385);//bottomLeft
  glEnd();

//topView as roof
 glBegin(GL_POLYGON);
glColor3ub (28, 102, 127);
  glVertex2i(890,700);//topLeft
  glVertex2i(1120,700);//topRight
  glVertex2i(940,630);//bottomRight
  glVertex2i(770,630);//bottomLeft
  glEnd();

  //drawLine to separate the roof and mainbody
 glBegin(GL_POLYGON);
  glColor3ub(0,0,0);
  glVertex2i(770,630);//topLeft
  glVertex2i(930,630);//topRight
  glVertex2i(930,625);//bottomRight
  glVertex2i(770,625);//bottomLeft
  glEnd();

  //window left



    glColor3ub(95,6,5);
	glPushMatrix();
	glTranslatef(800,560,0.0);
    glScalef(winThick2,winLen2,winThick2);
	glutSolidCube(1.0);
	glPopMatrix();

	//inner
	glColor3f (0, 66, 101);
	glPushMatrix();
	glTranslatef(800,560,0.0);
    glScalef(winThick2,winLen2,winThick2);
	glutSolidCube(.8);
	glPopMatrix();


//window right

    //outer
    glColor3ub(95,6,5);
	glPushMatrix();
	glTranslatef(900,560,0.0);
    glScalef(winThick2,winLen2,winThick2);
	glutSolidCube(1.0);
	glPopMatrix();

	//inner
	glColor3f (0, 66, 101);
	glPushMatrix();
	glTranslatef(900,560,0.0);
    glScalef(winThick2,winLen2,winThick2);
	glutSolidCube(.8);
	glPopMatrix();

//left door
glColor3ub(95,6,5);
	glPushMatrix();
	glTranslatef(825,430,0.0);
    glScalef(doorThick2,doorLen2,doorThick2);
	glutSolidCube(1.0);
	glPopMatrix();

//door separator
glColor3ub(0,0,0);
	glPushMatrix();
	glTranslatef(848,422,0.0);
    glScalef(5,75,5);
	glutSolidCube(1.0);
	glPopMatrix();


    //right door
glColor3ub(95,6,5);
	glPushMatrix();
	glTranslatef(870,430,0.0);
    glScalef(doorThick2,doorLen2,doorThick2);
	glutSolidCube(1.0);
	glPopMatrix();




//building Middle

//Roof
glBegin(GL_POLYGON);

glColor3ub (28, 102, 127);
  glVertex2i(569,810);//topRight
  glVertex2i(669,810);//topLeft
  glVertex2i(758,610);//bottomRight
  glVertex2i(458+10,610);//bottomLeft

glEnd();



//FrontView
  glBegin(GL_POLYGON);
  glColor3ub(255,70,20);
  glVertex2i(458+10,610);//topLeft
  glVertex2i(758,610);//topRight
  glVertex2i(758,450);//bottomRight
  glVertex2i(458+10,450);//bottomLeft
  glEnd();

//drawLine to separate the roof and mainbody
 glBegin(GL_POLYGON);
  glColor3ub(0,0,0);
  glVertex2i(468,615);//topLeft
  glVertex2i(758,615);//topRight
  glVertex2i(758,610);//bottomRight
  glVertex2i(458+10,610);//bottomLeft
  glEnd();


//TOPFLOOR

  //drawLine to rep topFloor
glBegin(GL_POLYGON);
	glColor3ub(95,6,5);
  glVertex2i(468+20,535);//topLeft
  glVertex2i(758-20,535);//topRight
  glVertex2i(758-20,525);//bottomRight
  glVertex2i(468+20,525);//bottomLeft
  glEnd();

  //space for topfloor
glColor3f(0, .7, 2.1);
	glPushMatrix();
	glTranslatef(600+13,565,0.0);
    glScalef(250,65,250);
	glutSolidCube(1.0);
	glPopMatrix();

//left door for topfloor
glColor3ub(95,6,5);
	glPushMatrix();
	glTranslatef(500+13,560,0.0);
    glScalef(doorThick2,60,doorThick2);
	glutSolidCube(1.0);
	glPopMatrix();


//right window1 for topfloor [far right]
    //outer
    glColor3ub(95,6,5);
	glPushMatrix();
	glTranslatef(700,575,0.0);
    glScalef(doorThick2,30,doorThick2);
	glutSolidCube(1.0);
	glPopMatrix();

	//inner
    glColor3f (0, 66, 101);
	glPushMatrix();
	glTranslatef(700,575,0.0);
    glScalef(doorThick2,30,doorThick2);
	glutSolidCube(.8);
	glPopMatrix();

//right window2 for topfloor [left]
    //outer
    glColor3ub(95,6,5);
	glPushMatrix();
	glTranslatef(650,575,0.0);
    glScalef(doorThick2,30,doorThick2);
	glutSolidCube(1.0);
	glPopMatrix();


	//inner
    glColor3f (0, 66, 101);
	glPushMatrix();
	glTranslatef(650,575,0.0);
    glScalef(doorThick2,30,doorThick2);
	glutSolidCube(.8);
	glPopMatrix();

//transparent glass
glColor4f(0.0, 0.0, 0.0, 0.2);
	glPushMatrix();
	glTranslatef(600+13,550,0.0);
    glScalef(250,40,250);
	glutSolidCube(1.0);
	glPopMatrix();


	//DOWN FLOOR

  //drawLine to rep downFloor
glBegin(GL_POLYGON);
	glColor3ub(95,6,5);
  glVertex2i(468+20,460);//topLeft
  glVertex2i(758-20,460);//topRight
  glVertex2i(758-20,450);//bottomRight
  glVertex2i(468+20,450);//bottomLeft
  glEnd();

  //space for downfloor
glColor3f(0, .7, 2.1);
	glPushMatrix();
	glTranslatef(600+13,485,0.0);
    glScalef(250,55,250);
	glutSolidCube(1.0);
	glPopMatrix();


	//left door for downfloor
glColor3ub(95,6,5);
	glPushMatrix();
	glTranslatef(500+13,480,0.0);
    glScalef(doorThick2,50,doorThick2);
	glutSolidCube(1.0);
	glPopMatrix();


//right window1 for downfloor [far right]

    //outer
    glColor3ub(95,6,5);
	glPushMatrix();
	glTranslatef(700,490,0.0);
    glScalef(doorThick2,30,doorThick2);
	glutSolidCube(1.0);
	glPopMatrix();

	//inner
	glColor3f (0, 66, 101);
	glPushMatrix();
	glTranslatef(700,490,0.0);
    glScalef(doorThick2,30,doorThick2);
	glutSolidCube(.8);
	glPopMatrix();

//right window2 for downfloor [left]

    //outer
    glColor3ub(95,6,5);
	glPushMatrix();
	glTranslatef(650,490,0.0);
    glScalef(doorThick2,30,doorThick2);
	glutSolidCube(1.0);
	glPopMatrix();

    //inner
	glColor3f (0, 66, 101);
	glPushMatrix();
	glTranslatef(650,490,0.0);
    glScalef(doorThick2,30,doorThick2);
	glutSolidCube(.8);
	glPopMatrix();


//transparent glass
glColor4f(0.0, 0.0, 0.0, 0.2);
	glPushMatrix();
	glTranslatef(600+13,470,0.0);
    glScalef(250,35,250);
	glutSolidCube(1.0);
	glPopMatrix();



//b2 is the building at the far left

//Roof
glBegin(GL_TRIANGLE_FAN);

glColor3ub (28, 102, 127);
  glVertex2i(369,710);//topLeft
  glVertex2i(458,610);//bottomRight
  glVertex2i(300,610);//bottomLeft

glEnd();
//FrontView
  glBegin(GL_POLYGON);
  glColor3ub(255,70,20);
  glVertex2i(300,610);//topLeft
  glVertex2i(458,610);//topRight
  glVertex2i(458,450);//bottomRight
  glVertex2i(300,450);//bottomLeft
  glEnd();

//drawLine to separate the roof and mainbody
 glBegin(GL_POLYGON);
  glColor3ub(0,0,0);
  glVertex2i(300,615);//topLeft
  glVertex2i(458,615);//topRight
  glVertex2i(458,610);//bottomRight
  glVertex2i(300,610);//bottomLeft
  glEnd();

  //window left

    //outer
    glColor3ub(95,6,5);
	glPushMatrix();
	glTranslatef(330,560,0.0);
    glScalef(winThick2,winLen2,winThick2);
	glutSolidCube(1.0);
	glPopMatrix();

	//inner
	glColor3f (0, 66, 101);
	glPushMatrix();
	glTranslatef(330,560,0.0);
    glScalef(winThick2,winLen2,winThick2);
	glutSolidCube(.8);
	glPopMatrix();


//window right
    //outer
    glColor3ub(95,6,5);
	glPushMatrix();
	glTranslatef(420,560,0.0);
    glScalef(winThick2,winLen2,winThick2);
	glutSolidCube(1.0);
	glPopMatrix();

	//inner
	glColor3f (0, 66, 101);
	glPushMatrix();
	glTranslatef(420,560,0.0);
    glScalef(winThick2,winLen2,winThick2);
	glutSolidCube(.8);
	glPopMatrix();

//left door
glColor3ub(95,6,5);
	glPushMatrix();
	glTranslatef(370,480,0.0);
    glScalef(doorThick2,doorLen2,doorThick2);
	glutSolidCube(1.0);
	glPopMatrix();


}


void Buildings::Walld(){
    int i,j;
    float x0={750.0},y01={300.0};
    float x[maxx]={40.0},y[maxy]={20.0};
	float xc={0.0},yc={300.0};
	//wall left
	glColor3ub(200,50,50);
	glBegin(GL_POLYGON);
	glVertex2i(600+150,433);
	glVertex2i(900+150,433);
	glVertex2i(900+150,300);
	glVertex2i(600+150,300);
	glEnd();




	//brick left

	for(i=0;i<maxx;i++)
		x[i]=x0+i*dx;
	for(j=0;j<maxy;j++)
		y[j]=y01+j*dy;

	for(i=0;i<maxx-1;i++)
		for(j=0;j<maxy-1;j++)
		{
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_LINE_LOOP);
			glVertex2f(x[i],y[j]);
			glVertex2f(x[i+1],y[j]);
			glVertex2f(x[i+1],y[j+1]);
			glVertex2f(x[i],y[j+1]);
			glEnd();
		}

     //wall right
     glColor3ub(200,50,50);
	glBegin(GL_POLYGON);
	glVertex2i(0-50,433);
	glVertex2i(300-50,433);
	glVertex2i(300-50,300);
	glVertex2i(0-50,300);
	glEnd();




	//brick right

	for(i=0;i<maxx;i++)
		x[i]=xc+i*dx;
	for(j=0;j<maxy;j++)
		y[j]=yc+j*dy;

	for(i=0;i<maxx-1;i++)
		for(j=0;j<maxy-1;j++)
		{
			glColor3f(0.0,0.0,0.0);
			glBegin(GL_LINE_LOOP);
			glVertex2f(x[i],y[j]);
			glVertex2f(x[i+1],y[j]);
			glVertex2f(x[i+1],y[j+1]);
			glVertex2f(x[i],y[j+1]);
			glEnd();
		}



     //wall middle "UMaT SRID"

    glColor3ub(250,220,220);
	glBegin(GL_POLYGON);
	glVertex2i(0+190,433);
	glVertex2i(300+80,433);
	glVertex2i(300+80,300);
	glVertex2i(0+190,300);
	glEnd();

    glColor3ub(255,200,200);
	glBegin(GL_POLYGON);
	glVertex2i(0+200,423);
	glVertex2i(300+70,423);
	glVertex2i(300+70,310);
	glVertex2i(0+200,310);
	glEnd();

}


void Buildings::Gated(){
//gate right
	glBegin(GL_POLYGON);
	glColor3ub (145, 178, 235);
	glVertex2i(750,300);
	glVertex2i(600,300);
	glVertex2i(600,303);
	glVertex2i(750,303);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub (145, 178, 235);
	glVertex2i(600,300);
	glVertex2i(600,450);
	glVertex2i(597,450);
	glVertex2i(597,303);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub (145, 178, 235);
	glVertex2i(600,450);
	glVertex2i(750,433);
	glVertex2i(750,430);
	glVertex2i(600,447);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub (145, 178, 235);
	glVertex2i(650,300);
	glVertex2i(650,442);
	glVertex2i(653,442);
	glVertex2i(653,300);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub (145, 178, 235);
	glVertex2i(711,300);
	glVertex2i(711,437);
	glVertex2i(714,437);
	glVertex2i(714,300);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub (145, 178, 235);
	glVertex2i(600,350);
	glVertex2i(750,350);
	glVertex2i(750,345);
	glVertex2i(600,345);
	glEnd();

   //gate left

    glBegin(GL_POLYGON);
	glColor3ub (145, 178, 235);
	glVertex2i(380,300);
	glVertex2i(500,340);
	glVertex2i(500,343);
	glVertex2i(380,303);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub (145, 178, 235);
	glVertex2i(380,433);
	glVertex2i(500,473);
	glVertex2i(500,476);
	glVertex2i(380,436);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub (145, 178, 235);
	glVertex2i(500-1,340);
	glVertex2i(500-1,473);
	glVertex2i(503-1,476);
	glVertex2i(503-1,343);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3ub (145, 178, 235);
	glVertex2i(500-41,340-15);
	glVertex2i(500-41,473-15);
	glVertex2i(503-41,476-15);
	glVertex2i(503-41,343-15);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub (145, 178, 235);
	glVertex2i(500-81,340-25);
	glVertex2i(500-81,473-25);
	glVertex2i(503-81,476-25);
	glVertex2i(503-81,343-25);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub (145, 178, 235);
	glVertex2i(380,433-90);
	glVertex2i(500,473-90);
	glVertex2i(500,478-90);
	glVertex2i(380,438-90);
	glEnd();

}
