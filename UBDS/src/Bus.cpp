/*
PROJECT TITLE:: UMaT BUS DROP [UBD]
DEVELOPED BY KALCULUS GUY
==========================
ANTWI THOMAS
SRI.41.008.038.22
CE200[B]
OPENGL PROJECT
*/

#include "Bus.h"
#include <stdlib.h>
#include <GL/glut.h>
#include<string.h>
#include<stdio.h>

Bus::Bus()
{
    //ctor
}

void Bus::Wheel1(){
	glColor3f(0,0,0);

	glPushMatrix();
	glTranslatef(345,377,-70);
	glutSolidTorus(5,15,100,90);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(190,377,-70);
	glutSolidTorus(5,15,100,90);//front two wheels tyre
	glPopMatrix();

	glColor3ub(100,100,100);

	glPushMatrix();
	glTranslatef(345,377,-70);
	glutSolidTorus(5,5,10,69);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(190,377,-70);
	glutSolidTorus(5,5,10,69);
	glPopMatrix();// front two wheels
}

void Bus::Wheel1d(){
    glColor3f(0,0,0);

	glPushMatrix();
	glTranslatef(345,377-175,-70);
	glutSolidTorus(5,15,100,90);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(190,377-175,-70);
	glutSolidTorus(5,15,100,90);
	glPopMatrix();

	glColor3ub(100,100,100);

	glPushMatrix();
	glTranslatef(345,377-175,-70);
	glutSolidTorus(5,5,10,69);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(190,377-175,-70);
	glutSolidTorus(5,5,10,69);
	glPopMatrix();

}


void Bus::Wheel2(){
glColor3f(0,0,0);

	glPushMatrix();
	glTranslatef(180,370,70);
	glutSolidTorus(5,15,100,90);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(335,370,70);
	glutSolidTorus(5,15,100,90);
	glPopMatrix();            //back two wheels tyre

	glColor3ub(100,100,100);

	glPushMatrix();
	glTranslatef(335,370,70);
	glutSolidTorus(5,5,10,69);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(180,370,70);
	glutSolidTorus(5,5,10,69);
	glPopMatrix();      //back two wheels
}

void Bus::Wheel2d(){
glColor3f(0,0,0);

	glPushMatrix();
	glTranslatef(180,370-175,70);
	glutSolidTorus(5,15,100,90);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(335,370-175,70);
	glutSolidTorus(5,15,100,90);
	glPopMatrix();

	glColor3ub(100,100,100);

	glPushMatrix();
	glTranslatef(335,370-175,70);
	glutSolidTorus(5,5,10,69);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(180,370-175,70);
	glutSolidTorus(5,5,10,69);
	glPopMatrix();
}


void Bus::busStop(){
/***********  ground   ***********/

glColor3ub(100,100,100);
glBegin(GL_POLYGON);
      glVertex3i(340-200,470,-110);
	glVertex3i(680-200,470,-110);
      glVertex3i(710-200,500,-240);
	glVertex3i(370-200,500,-240);
glEnd();
glColor3ub(100,100,100);
glBegin(GL_POLYGON);
      glVertex3i(340-200,470,-110);
	glVertex3i(680-200,470,-110);
	glVertex3i(680-200,450,-110);
	glVertex3i(340-200,450,-110);
glEnd();
glBegin(GL_POLYGON);
 	glVertex3i(680-200,470,-110);
      glVertex3i(710-200,500,-240);
	glVertex3i(710-200,480,-240);
	glVertex3i(680-200,450,-110);
glEnd();
glBegin(GL_POLYGON);
 	  glVertex3i(710-200,500,-240);
	  glVertex3i(710-200,480,-240);
	  glVertex3i(370-200,480,-240);
	  glVertex3i(370-200,500,-240);
glEnd();
glBegin(GL_POLYGON);
 	  glVertex3i(370-200,480,-240);
	  glVertex3i(370-200,500,-240);
 	  glVertex3i(340-200,470,-110);
	  glVertex3i(340-200,450,-110);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_LINE_STRIP);
   glVertex3i(340-200,470,-110);
   glVertex3i(680-200,470,-110);
   glVertex3i(710-200,500,-240);
glEnd();

glColor3f(1.0,1.0,1.0);
glBegin(GL_LINE_STRIP);
   glVertex3i(680-200,470,-110);
   glVertex3i(680-200,450,-110);
glEnd();


/************* left  ************/
glColor3ub(10,50,80);
glBegin(GL_POLYGON);
      glVertex3i(370-200,610,-140);
	glVertex3i(400-200,625,-200);
      glVertex3i(400-200,490,-200);
      glVertex3i(370-200,480,-140);
glEnd();
/************* mid  ************/

glColor3ub(10,170,80);
glBegin(GL_POLYGON);
      glVertex3i(395-200,580,-200);
	glVertex3i(690-200,580,-200);
      glVertex3i(690-200,520,-200);
	glVertex3i(395-200,520,-200);
glEnd();

glColor3f(0,0,0);
glBegin(GL_LINES);
	glVertex3i(395-200,580,-200);
	glVertex3i(690-200,580,-200);
      glVertex3i(690-200,520,-200);
	glVertex3i(395-200,520,-200);
glEnd();
/************* right  ************/

glColor3ub(10,50,80);
glBegin(GL_POLYGON);
      glVertex3i(690-200,625,-200);
	glVertex3i(670-200,610,-140);
      glVertex3i(670-200,475,-140);
      glVertex3i(690-200,490,-200);
glEnd();


/***************** chair ******************/

glColor3ub(0,0,0);
glBegin(GL_POLYGON);
      glVertex3i(425-200,530,-180);
	glVertex3i(520-200,530,-180);
      glVertex3i(500-200,515,-150);
	glVertex3i(405-200,515,-150);
glEnd();

glColor3ub(0,0,0);
glBegin(GL_LINES);
      glVertex3i(425-200,515,-160);
	glVertex3i(425-200,480,-160);
      glVertex3i(437-200,515,-170);
	glVertex3i(437-200,487,-170);
glEnd();

glColor3ub(0,0,0);
glBegin(GL_LINES);
      glVertex3i(485-200,515,-163);
	glVertex3i(485-200,480,-163);
      glVertex3i(495-200,515,-170);
	glVertex3i(495-200,487,-170);
glEnd();

 /* *************   2nd  chair    *************** */

glColor3ub(0,10,20);
glBegin(GL_POLYGON);
      glVertex3i(560-200,530,-180);
	glVertex3i(655-200,530,-180);
      glVertex3i(635-200,515,-150);
	glVertex3i(540-200,515,-150);
glEnd();

glColor3ub(0,0,0);
glBegin(GL_LINES);
      glVertex3i(560-200,515,-160);
	glVertex3i(560-200,480,-160);
      glVertex3i(572-200,515,-170);
	glVertex3i(572-200,487,-170);
glEnd();

glColor3ub(0,0,0);
glBegin(GL_LINES);
      glVertex3i(620-200,515,-163);
	glVertex3i(620-200,480,-163);
      glVertex3i(630-200,515,-170);
	glVertex3i(630-200,487,-170);
glEnd();
/********       upper       ********/
glColor3ub(10,50,80);
glBegin(GL_POLYGON);
      glVertex3i(350-200,620,-120);
	glVertex3i(700-200,620,-120);
      glVertex3i(700-200,600,-120);
      glVertex3i(350-200,600,-120);
glEnd();

glBegin(GL_POLYGON);
      glVertex3i(350-200,620,-120);
	glVertex3i(700-200,620,-120);
   	glVertex3i(720-200,640,-240);
      glVertex3i(380-200,640,-240);
glEnd();

glBegin(GL_POLYGON);
      glVertex3i(700-200,620,-120);
   	glVertex3i(720-200,640,-240);
      glVertex3i(720-200,620,-240);
      glVertex3i(700-200,600,-120);
glEnd();

glBegin(GL_POLYGON);
 	  glVertex3i(350-200,600,-120);
	  glVertex3i(350-200,620,-120);
 	  glVertex3i(380-200,640,-240);
	  glVertex3i(380-200,620,-240);
glEnd();


glColor3f(1.0,1.0,1.0);
glBegin(GL_LINES);
      glVertex3i(350-200,620,-120);
	glVertex3i(700-200,620,-120);
	glVertex3i(700-200,620,-120);
   	glVertex3i(720-200,640,-240);
	glVertex3i(700-200,620,-120);
	glVertex3i(700-200,600,-120);
glEnd();
}


void Bus::Flines(){
// lines on d front face
glBegin(GL_POLYGON);
 		glColor3ub(0,0,0);
 		glVertex3i(400,390,70);
 		glVertex3i(425,410,-70);
 		glVertex3i(425,407,-70);
 		glVertex3i(400,387,70);
 		glVertex3i(393,393,70);
 		glVertex3i(393,390,70);
glEnd();
	glBegin(GL_LINES);
		glColor3ub(0,0,0);
		glVertex3f(408,405,20);
		glVertex3f(418,412,-20);
		glVertex3f(405,410,40);
		glVertex3f(420,420,-40);
		glVertex3f(402,415,60);
		glVertex3f(422,429,-60);
	glEnd();
}

void Bus::Flinesd(){
// lines on d front face
glBegin(GL_POLYGON);
 		glColor3ub(0,0,0);
 		glVertex3i(400,390-175,70);
 		glVertex3i(425,410-175,-70);
 		glVertex3i(425,407-175,-70);
 		glVertex3i(400,387-175,70);
 		glVertex3i(393,393-175,70);
 		glVertex3i(393,390-175,70);
glEnd();
	glBegin(GL_LINES);
		glColor3ub(0,0,0);
		glVertex3f(408,405-175,20);
		glVertex3f(418,412-175,-20);
		glVertex3f(405,410-175,40);
		glVertex3f(420,420-175,-40);
		glVertex3f(402,415-175,60);
		glVertex3f(422,429-175,-60);
	glEnd();
}
