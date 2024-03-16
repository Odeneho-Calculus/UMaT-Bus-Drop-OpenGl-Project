/*
PROJECT TITLE:: UMaT BUS DROP [UBD]
DEVELOPED BY KALCULUS GUY
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


#define maxx 10
#define maxy 12
#define dx 27.7
#define dy 12



Buildings::Buildings()
{
    //ctor
}
/*
void Buildings::buildingd(){
//buliding
	glColor3ub(255,70,20);
	double len=300;
    double thick=380;
	glPushMatrix();
	glTranslatef(650+55,520,70.0);
    glScalef(thick,len,thick);
	glutSolidCube(1.0);
	glPopMatrix();
    //door
    glColor3f(0.0,0.6,0.7);
	double len1=50;
    double thick1=80;
	glPushMatrix();
	glTranslatef(650+55,520-125,70.0);
    glScalef(thick1,len1,thick1);
	glutSolidCube(1.0);
	glPopMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_LINE_LOOP);
	glVertex2i(550+115,550-130);
	glVertex2i(630+115,550-130);
    glVertex2i(630+115,520-150);
    glVertex2i(550+115,520-150);
    glEnd();
    glBegin(GL_LINES);
	glVertex2i(704,550-130);
	glVertex2i(704,520-150);
	glEnd();

    //windows

    glColor3f(0.0,0.6,0.7);
	double len2=30;
    double thick2=30;
	glPushMatrix();
	glTranslatef(650-100,520,70.0);
    glScalef(thick2,len2,thick2);
	glutSolidCube(1.0);
	glPopMatrix();

     glColor3f(0.0,0.6,0.7);
	double len3=30;
    double thick3=30;
	glPushMatrix();
	glTranslatef(650,520,70.0);
    glScalef(thick3,len3,thick3);
	glutSolidCube(1.0);
	glPopMatrix();

	glColor3f(0.0,0.6,0.7);
	double len4=30;
    double thick4=30;
	glPushMatrix();
	glTranslatef(650+100,520,70.0);
    glScalef(thick4,len4,thick4);
	glutSolidCube(1.0);
	glPopMatrix();

   glColor3f(0.0,0.6,0.7);
	double len5=30;
    double thick5=30;
	glPushMatrix();
	glTranslatef(650+200,520,70.0);
    glScalef(thick5,len5,thick5);
	glutSolidCube(1.0);
	glPopMatrix();

    glColor3f(0.0,0.6,0.7);
	double len6=30;
    double thick6=30;
	glPushMatrix();
	glTranslatef(650-100,520+100,70.0);
    glScalef(thick6,len6,thick6);
	glutSolidCube(1.0);
	glPopMatrix();

    glColor3f(0.0,0.6,0.7);
	double len7=30;
    double thick7=30;
	glPushMatrix();
	glTranslatef(650,520+100,70.0);
    glScalef(thick7,len7,thick7);
	glutSolidCube(1.0);
	glPopMatrix();

    glColor3f(0.0,0.6,0.7);
	double len8=30;
    double thick8=30;
	glPushMatrix();
	glTranslatef(650+100,520+100,70.0);
    glScalef(thick8,len8,thick8);
	glutSolidCube(1.0);
	glPopMatrix();

	glColor3f(0.0,0.6,0.7);
	double len9=30;
    double thick9=30;
	glPushMatrix();
	glTranslatef(650+200,520+100,70.0);
    glScalef(thick9,len9,thick9);
	glutSolidCube(1.0);
	glPopMatrix();

}
*/

void Buildings::buildingd(){
//buliding

glBegin(GL_POLYGON);
	glColor3ub(255,70,20);
  glVertex2i(530,650);
  glVertex2i(870,650);
  glVertex2i(870,385);
  glVertex2i(530,385);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(255,70,20);
  glVertex2i(870,650);

  glVertex2i(970,750);
  glVertex2i(970,450);

  glVertex2i(870,385);
  glEnd();

  // building edge line
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
  glVertex2i(870,650);

  glVertex2i(872,652);
  glVertex2i(872,387);

  glVertex2i(870,385);
  glEnd();

    //door
   /* glColor3f(0.0,0.6,0.7);
	double len1=50;
    double thick1=80;
	glPushMatrix();
	glTranslatef(650+55,520-125,70.0);
    glScalef(thick1,len1,thick1);
	glutSolidCube(1.0);
	glPopMatrix();
    glColor3ub(0,0,0);
    glBegin(GL_LINE_LOOP);
	glVertex2i(550+115,550-130);
	glVertex2i(630+115,550-130);
    glVertex2i(630+115,520-150);
    glVertex2i(550+115,520-150);
    glEnd();
    glBegin(GL_LINES);
	glVertex2i(704,550-130);
	glVertex2i(704,520-150);
	glEnd();*/

    //windows

    glColor3f(0.0,0.6,0.7);
	double len2=30;
    double thick2=30;
	glPushMatrix();
	glTranslatef(650-100,520,70.0);
    glScalef(thick2,len2,thick2);
	glutSolidCube(1.0);
	glPopMatrix();

     glColor3f(0.0,0.6,0.7);
	double len3=30;
    double thick3=30;
	glPushMatrix();
	glTranslatef(650,520,70.0);
    glScalef(thick3,len3,thick3);
	glutSolidCube(1.0);
	glPopMatrix();

	glColor3f(0.0,0.6,0.7);
	double len4=30;
    double thick4=30;
	glPushMatrix();
	glTranslatef(650+100,520,70.0);
    glScalef(thick4,len4,thick4);
	glutSolidCube(1.0);
	glPopMatrix();

   glColor3f(0.0,0.6,0.7);
	double len5=30;
    double thick5=30;
	glPushMatrix();
	glTranslatef(650+200,520,70.0);
    glScalef(thick5,len5,thick5);
	glutSolidCube(1.0);
	glPopMatrix();

    glColor3f(0.0,0.6,0.7);
	double len6=30;
    double thick6=30;
	glPushMatrix();
	glTranslatef(650-100,520+100,70.0);
    glScalef(thick6,len6,thick6);
	glutSolidCube(1.0);
	glPopMatrix();

    glColor3f(0.0,0.6,0.7);
	double len7=30;
    double thick7=30;
	glPushMatrix();
	glTranslatef(650,520+100,70.0);
    glScalef(thick7,len7,thick7);
	glutSolidCube(1.0);
	glPopMatrix();

    glColor3f(0.0,0.6,0.7);
	double len8=30;
    double thick8=30;
	glPushMatrix();
	glTranslatef(650+100,520+100,70.0);
    glScalef(thick8,len8,thick8);
	glutSolidCube(1.0);
	glPopMatrix();

	glColor3f(0.0,0.6,0.7);
	double len9=30;
    double thick9=30;
	glPushMatrix();
	glTranslatef(650+200,520+100,70.0);
    glScalef(thick9,len9,thick9);
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
	glColor3ub(0,0,0);
	glVertex2i(750,300);
	glVertex2i(600,300);
	glVertex2i(600,303);
	glVertex2i(750,303);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2i(600,300);
	glVertex2i(600,450);
	glVertex2i(597,450);
	glVertex2i(597,303);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2i(600,450);
	glVertex2i(750,433);
	glVertex2i(750,430);
	glVertex2i(600,447);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2i(650,300);
	glVertex2i(650,442);
	glVertex2i(653,442);
	glVertex2i(653,300);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2i(711,300);
	glVertex2i(711,437);
	glVertex2i(714,437);
	glVertex2i(714,300);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2i(600,350);
	glVertex2i(750,350);
	glVertex2i(750,345);
	glVertex2i(600,345);
	glEnd();

   //gate left

    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2i(380,300);
	glVertex2i(500,340);
	glVertex2i(500,343);
	glVertex2i(380,303);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2i(380,433);
	glVertex2i(500,473);
	glVertex2i(500,476);
	glVertex2i(380,436);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2i(500-1,340);
	glVertex2i(500-1,473);
	glVertex2i(503-1,476);
	glVertex2i(503-1,343);
	glEnd();


    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2i(500-41,340-15);
	glVertex2i(500-41,473-15);
	glVertex2i(503-41,476-15);
	glVertex2i(503-41,343-15);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2i(500-81,340-25);
	glVertex2i(500-81,473-25);
	glVertex2i(503-81,476-25);
	glVertex2i(503-81,343-25);
	glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2i(380,433-90);
	glVertex2i(500,473-90);
	glVertex2i(500,478-90);
	glVertex2i(380,438-90);
	glEnd();

}
