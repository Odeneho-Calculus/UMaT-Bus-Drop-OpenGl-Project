/*
PROJECT TITLE:: UMaT BUS DROP [UBD]
DEVELOPED BY KALCULUS GUY
==========================
ANTWI THOMAS
SRI.41.008.038.22
CE200[B]
OPENGL PROJECT
*/

#include "Compound.h"
#include <stdlib.h>
#include <GL/glut.h>
#include<string.h>
#include<stdio.h>

Compound::Compound()
{
    //ctor
}


void Compound::Road2(){
/************** left part of road  *********/
int x,y;
glColor3ub(7,255,13);
glBegin(GL_POLYGON);
      	glVertex2i(0,650);
	  	glVertex2i(1000,650);
      	glVertex2i(1000,0);
      glVertex2i(0,0);
glEnd();

glColor3ub(30,40,50);
glBegin(GL_POLYGON);
      glVertex2i(0,420);
	      glVertex2i(1000,420);
      glVertex2i(1000,300);
      	glVertex2i(0,300);
glEnd();

glBegin(GL_POLYGON);
glVertex2i(750,650);
glVertex2i(900,650);
glVertex2i(1000,0);
glVertex2i(650,0);
glEnd();


/************  STRIPES  ************/

glColor3f(1.0,0.9,0.0);
for(x=0;x<1000;x=x+60)
{
glBegin(GL_POLYGON);
      		glVertex2f(x,352.5+19);
			glVertex2f(x,357.5+19);
		  	glVertex2f(x+30,357.5+19);
	  		glVertex2f(x+30,352.5+19);
glEnd();
}

for(y=650;y>0;y=y-60)
{
glBegin(GL_POLYGON);
			glVertex2f(822,y);
	  		glVertex2f(826,y);
	  		glVertex2f(826,y-30);
	  		glVertex2f(822,y-30);
glEnd();
}

}


void Compound::Road2d(){
	/************** left part of road  *********/
int x;
glColor3ub(7,255,130);
glBegin(GL_POLYGON);
      	glVertex2i(0,650);
	  	glVertex2i(1000,650);
      	glVertex2i(1000,0);
      glVertex2i(0,0);
glEnd();

glColor3ub(30,40,50);
glBegin(GL_POLYGON);
      glVertex2i(0,420-175);
	      glVertex2i(1000,420-175);
      glVertex2i(1000,300-175);
      	glVertex2i(0,300-175);
glEnd();



/************  STRIPES  ************/

glColor3f(1.0,0.9,0.0);
for(x=0;x<1000;x=x+60)
{
glBegin(GL_POLYGON);
      		glVertex2f(x,352.5+19-175);
			glVertex2f(x,357.5+19-175);
		  	glVertex2f(x+30,357.5+19-175);
	  		glVertex2f(x+30,352.5+19-175);
glEnd();
}
}





void Compound::Tree1(){
//trunk1
	glColor3ub(95,6,5);
	double len=100;
    double thick=20;
	glPushMatrix();
	glTranslated(100,150-48,0.0);
    glScaled(thick,len,thick);
	glutSolidCube(1.0);
	glPopMatrix();

//leaves1


    glColor3f(0.0,0.2,0.0);
	glPushMatrix();
	glLoadIdentity();

    glTranslated(100,235-48,0.0);
    glutSolidCone(70,140,3,2);
    glPopMatrix();

 //leaves2

    glColor3f(0.0,0.2,0.0);
	glPushMatrix();
	glLoadIdentity();
    glTranslated(100,270-48,0.0);
    glutSolidCone(60,120,3,2);
    glPopMatrix();

// leaves3

    glColor3f(0.0,0.2,0.0);
	glPushMatrix();
	glLoadIdentity();
    glTranslated(100,300-48,0);
    glutSolidCone(50,100,3,2);
    glPopMatrix();
}


void Compound::Tree1d(){
 //trunk1
	glColor3ub(95,6,5);
	double len=80;
    double thick=15;
	glPushMatrix();
	glTranslated(100,150+330,0.0);
    glScaled(thick,len,thick);
	glutSolidCube(1.0);
	glPopMatrix();

//leaves1


    glColor3f(0.0,0.2,0.0);
	glPushMatrix();
	glLoadIdentity();

    glTranslated(100,230+290,0.0);
    glutSolidCone(60,120,3,2);
    glPopMatrix();

 //leaves2

    glColor3f(0.0,0.2,0.0);
	glPushMatrix();
	glLoadIdentity();
    glTranslated(100,260+290,0.0);
    glutSolidCone(50,100,3,2);
    glPopMatrix();

// leaves3

    glColor3f(0.0,0.2,0.0);
	glPushMatrix();
	glLoadIdentity();
    glTranslated(100,290+290,0);
    glutSolidCone(40,800,3,2);
    glPopMatrix();
}


void Compound::Tree2(){
    //trunk1
	glColor3ub(95,6,5);
	double len=100;
    double thick=20;
	glPushMatrix();
	glTranslated(100+450,150+330,0.0);
    glScaled(thick,len,thick);
	glutSolidCube(1.0);
	glPopMatrix();

//leaves1


    glColor3f(0.0,0.2,0.0);
	glPushMatrix();
	glLoadIdentity();

    glTranslated(100+450,230+310,0.0);
    glutSolidCone(70,140,3,2);
    glPopMatrix();

 //leaves2

    glColor3f(0.0,0.2,0.0);
	glPushMatrix();
	glLoadIdentity();
    glTranslated(100+450,260+310,0.0);
    glutSolidCone(60,120,3,2);
    glPopMatrix();

// leaves3

    glColor3f(0.0,0.2,0.0);
	glPushMatrix();
	glLoadIdentity();
    glTranslated(100+450,290+310,0);
    glutSolidCone(50,100,3,2);
    glPopMatrix();
}

void Compound::Tree2d(){
 //trunk1
	glColor3ub(95,6,5);
	double len=80;
    double thick=15;
	glPushMatrix();
	glTranslated(200,150+330,0.0);
    glScaled(thick,len,thick);
	glutSolidCube(1.0);
	glPopMatrix();

//leaves1


    glColor3f(0.0,0.2,0.0);
	glPushMatrix();
	glLoadIdentity();

    glTranslated(200,230+290,0.0);
    glutSolidCone(60,120,3,2);
    glPopMatrix();

 //leaves2

    glColor3f(0.0,0.2,0.0);
	glPushMatrix();
	glLoadIdentity();
    glTranslated(200,260+290,0.0);
    glutSolidCone(50,100,3,2);
    glPopMatrix();

// leaves3

    glColor3f(0.0,0.2,0.0);
	glPushMatrix();
	glLoadIdentity();
    glTranslated(200,290+290,0);
    glutSolidCone(40,800,3,2);
    glPopMatrix();
}

void Compound::Treed(){
//trunk1
	glColor3ub(95,6,5);
	double len=80;
    double thick=15;
	glPushMatrix();
	glTranslated(100+850,150+330,0.0);
    glScaled(thick,len,thick);
	glutSolidCube(1.0);
	glPopMatrix();

//leaves1


    glColor3f(0.0,0.2,0.0);
	glPushMatrix();
	glLoadIdentity();

    glTranslated(100+850,230+290,0.0);
    glutSolidCone(60,120,3,2);
    glPopMatrix();

 //leaves2

    glColor3f(0.0,0.2,0.0);
	glPushMatrix();
	glLoadIdentity();
    glTranslated(100+850,260+290,0.0);
    glutSolidCone(50,100,3,2);
    glPopMatrix();

// leaves3

    glColor3f(0.0,0.2,0.0);
	glPushMatrix();
	glLoadIdentity();
    glTranslated(100+850,290+290,0);
    glutSolidCone(40,800,3,2);
    glPopMatrix();
}

void Compound::Shrubd(){
   glColor3ub(0,160,0);
    double len0=57;
	double thick0=13;
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(115,107,0);
    glScalef(len0,thick0,len0);
	glutSolidCube(1.0);
	glPopMatrix();
	//leaves1
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(100,120,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();
	//leaves2
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(115,145,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();
    //leaves3
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(130,120,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();

    //flower1

    glColor3ub(140,0,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(130,120,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();


    //flower2
    glColor3ub(140,0,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(112,143,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();
}

void Compound::Shrub1d(){
   glColor3ub(0,160,0);
    double len0=57;
	double thick0=13;
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(115+200,107,0);
    glScalef(len0,thick0,len0);
	glutSolidCube(1.0);
	glPopMatrix();
	//leaves1
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(100+200,120,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();
	//leaves2
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(115+200,145,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();
    //leaves3
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(130+200,120,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();

    //flower1

    glColor3ub(200,200,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(130+200,120,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();


    //flower2
    glColor3ub(200,200,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(102+200,133,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();
}


void Compound::Shrub2d(){
glColor3ub(0,160,0);
    double len0=57;
	double thick0=13;
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(115+400,107,0);
    glScalef(len0,thick0,len0);
	glutSolidCube(1.0);
	glPopMatrix();
	//leaves1
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(100+400,120,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();
	//leaves2
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(115+400,145,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();
    //leaves3
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(130+400,120,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();

    //flower1

    glColor3ub(200,0,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(120+400,118,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();


    //flower2
    glColor3ub(200,0,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(125+400,145,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();
}

void Compound::Shrub3d(){
glColor3ub(0,160,0);
    double len0=57;
	double thick0=13;
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(115+600,107,0);
    glScalef(len0,thick0,len0);
	glutSolidCube(1.0);
	glPopMatrix();
	//leaves1
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(100+600,120,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();
	//leaves2
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(115+600,145,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();
    //leaves3
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(130+600,120,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();

    //flower1

    glColor3ub(140,0,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(105+600,125,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();


    //flower2
    glColor3ub(140,0,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(102+600,143,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();
}


void Compound::Shrub4d(){
    glColor3ub(0,160,0);
    double len0=57;
	double thick0=13;
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(115+800,107,0);
    glScalef(len0,thick0,len0);
	glutSolidCube(1.0);
	glPopMatrix();
	//leaves1
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(100+800,120,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();
	//leaves2
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(115+800,145,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();
    //leaves3
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(130+800,120,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();

    //flower1

    glColor3ub(140,50,50);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(105+800,125,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();


    //flower2
    glColor3ub(140,50,50);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(102+800,143,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();
   //flower3
	glColor3ub(140,50,50);
	glPushMatrix();
    glLoadIdentity();
	glTranslatef(132+800,133,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();
}


void Compound::lampPost(){
//post
	glColor3ub(170,170,220);
	double len=180;
    double thick=10;
	glPushMatrix();
	glTranslatef(650+55,520,70.0);
    glScalef(thick,len,thick);
	glutSolidCube(1.0);
	glPopMatrix();
    //lantern  right
   glColor3ub(170,170,220);
	glPushMatrix();
	glLoadIdentity();
      glTranslatef(713+55,569,0);
    glutSolidCone(22,22,3,2);
    glPopMatrix();
    //sphere
    glColor3ub(160,160,210);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(650+55,600,70);
	glutSolidSphere(10,20,20);
	glPopMatrix();
    //bar right

    glColor3ub(155,155,205);
    double len0=60;
	double thick0=5;
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(685+55,590,0);
    glScalef(len0,thick0,len0);
	glutSolidCube(1.0);
	glPopMatrix();
    //bar left

    glColor3ub(155,155,205);
    double len1=60;
    double thick1=5;
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(615+55,590,70);
    glScalef(len1,thick1,len1);
	glutSolidCube(1.0);
	glPopMatrix();

    //lantern left
    glColor3ub(170,170,220);
	glPushMatrix();
	glLoadIdentity();
   glTranslatef(587+55,569,0);
    glutSolidCone(22,22,3,2);
   glPopMatrix();

    //bulb right



 glColor3f(100,100,0.0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(713+55,555,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();
    //bulb left
    glColor3f(100,100,0.0);

	glPushMatrix();
	glLoadIdentity();
	glTranslatef(587+55,555,0);
	glutSolidSphere(5,20,20);
	glPopMatrix();
}

void Compound::lampPost1(){
	glColor3ub(170,170,220);
	double len=180;
    double thick=10;
	glPushMatrix();
	glTranslatef(650,520-300,70.0);
    glScalef(thick,len,thick);
	glutSolidCube(1.0);
	glPopMatrix();
    //lantern  right
   glColor3ub(170,170,220);
	glPushMatrix();
	glLoadIdentity();
      glTranslatef(713,569-300,0);
    glutSolidCone(22,22,3,2);
    glPopMatrix();
    //sphere
    glColor3ub(160,160,210);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(650,600-300,70);
	glutSolidSphere(10,20,20);
	glPopMatrix();
    //bar right

    glColor3ub(155,155,205);
    double len0=60;
	double thick0=5;
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(685,590-300,0);
    glScalef(len0,thick0,len0);
	glutSolidCube(1.0);
	glPopMatrix();
    //bar left

    glColor3ub(155,155,205);
    double len1=60;
    double thick1=5;
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(615,590-300,70);
    glScalef(len1,thick1,len1);
	glutSolidCube(1.0);
	glPopMatrix();

    //lantern left
    glColor3ub(170,170,220);
	glPushMatrix();
	glLoadIdentity();
   glTranslatef(587,569-300,0);
    glutSolidCone(22,22,3,2);
   glPopMatrix();

    //bulb right



 glColor3f(100,100,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(713,555-300,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();
    //bulb left
    glColor3f(100,100,0);

	glPushMatrix();
	glLoadIdentity();
	glTranslatef(587,555-300,0);
	glutSolidSphere(5,20,20);
	glPopMatrix();

}

void Compound::lampPost2(){
glColor3ub(170,170,220);
	double len=180;
    double thick=10;
	glPushMatrix();
	glTranslatef(650+293,520,70.0);
    glScalef(thick,len,thick);
	glutSolidCube(1.0);
	glPopMatrix();
    //lantern  right
   glColor3ub(170,170,220);
	glPushMatrix();
	glLoadIdentity();
      glTranslatef(713+293,569,0);
    glutSolidCone(22,22,3,2);
    glPopMatrix();
    //sphere
    glColor3ub(160,160,210);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(650+293,600,70);
	glutSolidSphere(10,20,20);
	glPopMatrix();
    //bar right

    glColor3ub(155,155,205);
    double len0=60;
	double thick0=5;
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(685+293,590,0);
    glScalef(len0,thick0,len0);
	glutSolidCube(1.0);
	glPopMatrix();
    //bar left

    glColor3ub(155,155,205);
    double len1=60;
    double thick1=5;
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(615+293,590,70);
    glScalef(len1,thick1,len1);
	glutSolidCube(1.0);
	glPopMatrix();

    //lantern left
    glColor3ub(170,170,220);
	glPushMatrix();
	glLoadIdentity();
   glTranslatef(587+293,569,0);
    glutSolidCone(22,22,3,2);
   glPopMatrix();

    //bulb right



 glColor3f(100,100,0.0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(713+293,555,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();
    //bulb left
    glColor3f(100,100,0.0);

	glPushMatrix();
	glLoadIdentity();
	glTranslatef(587+293,555,0);
	glutSolidSphere(5,20,20);
	glPopMatrix();

}


void Compound::lampPost4(){
glColor3ub(170,170,220);
	double len=180;
    double thick=10;
	glPushMatrix();
	glTranslatef(650+338,520-300,70.0);
    glScalef(thick,len,thick);
	glutSolidCube(1.0);
	glPopMatrix();
    //lantern  right
   glColor3ub(170,170,220);
	glPushMatrix();
	glLoadIdentity();
      glTranslatef(713+338,569-300,0);
    glutSolidCone(22,22,3,2);
    glPopMatrix();
    //sphere
    glColor3ub(160,160,210);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(650+338,600-300,70);
	glutSolidSphere(10,20,20);
	glPopMatrix();
    //bar right

    glColor3ub(155,155,205);
    double len0=60;
	double thick0=5;
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(685+338,590-300,0);
    glScalef(len0,thick0,len0);
	glutSolidCube(1.0);
	glPopMatrix();
    //bar left

    glColor3ub(155,155,205);
    double len1=60;
    double thick1=5;
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(615+338,590-300,70);
    glScalef(len1,thick1,len1);
	glutSolidCube(1.0);
	glPopMatrix();

    //lantern left
    glColor3ub(170,170,220);
	glPushMatrix();
	glLoadIdentity();
   glTranslatef(587+338,569-300,0);
    glutSolidCone(22,22,3,2);
   glPopMatrix();

    //bulb right



 glColor3f(100,100,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(713+338,555-300,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();
    //bulb left
    glColor3f(100,100,0);

	glPushMatrix();
	glLoadIdentity();
	glTranslatef(587+338,555-300,0);
	glutSolidSphere(5,20,20);
	glPopMatrix();
}


void Compound::Stopd(){
    glColor3ub(100,100,100);
	double len=180;
    double thick=10;
	glPushMatrix();
	glTranslatef(650-250,520-180,70.0);
    glScalef(thick,len,thick);
	glutSolidCube(1.0);
	glPopMatrix();
	glColor3ub(190,0,0);
	glPushMatrix();
	glTranslatef(540-140,495-25,0);
	glutSolidTorus(8,32,100,90);
	glPopMatrix();
     glColor3ub(255,255,255);
	glPushMatrix();
    glLoadIdentity();
	glTranslatef(400,495-25,0);
	glutSolidSphere(32,20,20);
	glPopMatrix();

}
