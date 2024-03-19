/*
PROJECT TITLE:: UMaT BUS DROP [UBDS]
INTRODUCED IN OOP BY KALCULUS GUY
==========================
ANTWI THOMAS
SRI.41.008.038.22
CE200[B]
OPENGL PROJECT
*/
// Standard Library headers
#include <stdlib.h>    // Standard library functions for memory allocation, randomness, etc.
#include <windows.h>   // Windows-specific functions and macros
#include <cmath>       // Math functions and constants
#include <GL/glut.h>   // OpenGL Utility Toolkit for creating graphical user interfaces
#include <string.h>    // String manipulation functions
#include <stdio.h>     // Standard Input/Output functions
#include <iostream>    // Standard Input/Output stream objects

using namespace std;  // Using the standard namespace for C++ standard library


//classes header files
#include "Students.h"
#include "Bus.h"
#include "Compound.h"
#include "kalText.h"
#include "Buildings.h"

//classes instances declared
Students Studs;
Bus bus;
Compound compound;
kalText kTxt;
Buildings builds;

//VARIABLE DECLARATIONS
int x=-150,o=0,xd=-150;
int x1=0,z=0;
float a=0,a1=0,moving,angle=0;
float z5=0,u=0,flag12=0,begin;
float k=0,y2=0;
int flag=0,flag55=0,var=0,flag1=0,flag551=0,vari=0,vard=0,varid=0,then=0;
GLfloat xangle=0.0,yangle=0.0,zangle=0.0;   /* axis angles */

//DECLARATIONS FOR THE BUS PARTS & COLOR IN PAGE 1
	GLfloat vertices[][3] ={{160,390,-70},{425,390,-70},
					{425,510,-70}, {160,520,-70},

					{135,370,70}, {400,370,70},
					{400,490,70}, {135,500,70},

					{135,447,70},{400,447,70},
					{425,467,-70},{410,520,-70},

					{385,500,70}, {160,467,-70},
					{320,467,-70},{320,520,-70},

                    {380,520,-70},{380,390,-70},{320,390,-70}

                    };


  GLfloat colors[][4] = {
    {0, 66, 101, 1.0}, // navyBlue with no transparency
    {0.0, 0.0, 0.0, 0.5}, // Black with 50% transparency
    {0.3, 0.4, 0.5, 1.0}  // Gray with no transparency
};


	//GLfloat colors[][3] = {{1.0,1.0,0.0},{0.0,0.0,0.0},{.3,.4,.5}};



//DECLARATIONS FOR THE BUS PARTS & COLOR IN PAGE 2
    GLfloat verticesd[][3] ={{160,390-175,-70},{425,390-175,-70},
					{425,510-175,-70}, {160,520-175,-70},

					{135,370-175,70}, {400,370-175,70},
					{400,490-175,70}, {135,500-175,70},

					{135,447-175,70},{400,447-175,70},
					{425,467-175,-70},{410,520-175,-70},

					{385,500-175,70}, {160,467-175,-70},
					{320,467-175,-70},{320,520-175,-70},

                    {380,520-175,-70},{380,390-175,-70},{320,390-175,-70}};

    GLfloat colorsd[][4] = {
    {0, 66, 101, 1.0}, // navyBlue with no transparency
    {0.0, 0.0, 0.0, 0.5}, // Black with 50% transparency
    {0.3, 0.4, 0.5, 1.0}  // Gray with no transparency
};
	//GLfloat colorsd[][3] = {{1.0,1.0,0.0},{0.0,0.6,0.7},{.3,.4,.5}};



/*-------------------------------------------------------------------*/
				//	FUNCTION cube for the bus in page 1
/*-------------------------------------------------------------------*/
void polygon(int a, int b, int c , int d,int E,int f)
{
	glBegin(GL_POLYGON);
		glColor4fv(colors[E]);
		glVertex3fv(vertices[a]);
		glVertex3fv(vertices[b]);
		glVertex3fv(vertices[c]);
		glVertex3fv(vertices[d]);
		if(f!=0)
		glVertex3fv(vertices[f]);
	glEnd();
}

void colorcube()
{
	int i;
	bus.Wheel1();
	polygon(0,1,5,4,0,0);
	polygon(13,14,18,0,0,0);
	polygon(15,16,17,18,2,0);
	polygon(16,11,2,1,0,17);
	polygon(0,4,8,13,0,0);
	polygon(1,10,9,5,0,0);
	polygon(9,10,2,6,1,0);
	polygon(4,5,9,8,0,0);
	polygon(8,9,6,12,1,7);
	glColor3ub(100,40,50);
	for(i=0;i<=180;i+=45)
	{
		glBegin(GL_LINES);
		glVertex3f(180+i,447,70);
		glVertex3f(180+i,500,70);
		glEnd();
	}
	polygon(13,8,7,3,1,0);
	polygon(3,15,14,13,1,0);
	polygon(6,2,11,12,0,0);
	polygon(11,3,7,12,0,0);
bus.Wheel2();
}

/*-------------------------------------------------------------------*/
				//	FUNCTION cube for the bus in page 2
/*-------------------------------------------------------------------*/
void polygond(int a, int b, int c , int d,int E,int f)
{
	glBegin(GL_POLYGON);
		glColor4fv(colorsd[E]);
		glVertex3fv(verticesd[a]);
		glVertex3fv(verticesd[b]);
		glVertex3fv(verticesd[c]);
		glVertex3fv(verticesd[d]);
		if(f!=0)
		glVertex3fv(verticesd[f]);
	glEnd();
}

void colorcubed()
{
	int i;
	bus.Wheel1d();
	polygond(0,1,5,4,0,0);
	polygond(13,14,18,0,0,0);
	polygond(15,16,17,18,2,0);
	polygond(16,11,2,1,0,17);
	polygond(0,4,8,13,0,0);
	polygond(1,10,9,5,0,0);
	polygond(9,10,2,6,1,0);
	polygond(4,5,9,8,0,0);
	polygond(8,9,6,12,1,7);
	glColor3ub(100,40,50);
	for(i=0;i<=180;i+=45)
	{
		glBegin(GL_LINES);
		glVertex3f(180+i,447-175,70);
		glVertex3f(180+i,500-175,70);
		glEnd();
	}
	polygond(13,8,7,3,1,0);
	polygond(3,15,14,13,1,0);
	polygond(6,2,11,12,0,0);
	polygond(11,3,7,12,0,0);
    bus.Wheel2d();
}

//when mouse is clicked
void mouse(int btn,int state,int x,int y)
{
	if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
    {
	then=1;
    glutPostRedisplay();
	}
}

//Bus to move function in page 1
void bus_move()
{
	if(x<50)
{
        x+=3;
		glPushMatrix();
		glTranslatef(-100,0,-90);
		Studs.studBoy2();
		glPopMatrix();
		glPushMatrix();
		glTranslatef(x,0,0);
		bus.Wheel1();
		colorcube();
		bus.Wheel2();
		bus.Flines();
		kTxt.text1();
		glPopMatrix();

}
	if(x>=50)
		vari=1;
		cout <<"x = " << x <<endl;
	if(flag55==1 )
	{

        x+=6;
		glPushMatrix();
		glTranslatef(x,0,0);
		bus.Wheel1();
		colorcube();
		bus.Wheel2();
		bus.Flines();
		kTxt.text1();
		glPopMatrix();
	}

	if(x>=51)
		varid=3;//switches to next page

	if(x>=865)
		var=1;//switches to next page
}

//Bus to move function in page 2
void bus_moved()
{
	if(xd>50)
{
		xd+=3;
	    glPushMatrix();
		glTranslatef(-100,0,-90);
	    Studs.studBoy2Drop();
		glPopMatrix();
		glPushMatrix();
		glTranslatef(xd,0,0);
		bus.Wheel1d();
		colorcubed();
		bus.Wheel2d();
		bus.Flinesd();
		kTxt.text1d();
		glPopMatrix();

}
	if(flag551==1)
{
		xd+=5;
		glPushMatrix();
		glTranslatef(xd,0,0);
		bus.Wheel1d();
		colorcubed();
		bus.Wheel2d();
		bus.Flinesd();
		kTxt.text1d();
		glPopMatrix();
	}
	if(xd>50)
		varid=1;
        cout <<"xd = " << xd <<endl;
        if (xd>=871)
            varid=2;



}

void pleteMission(){
                then = 3;
                glutPostRedisplay();
                cout <<"Car Parked when pos was " << xd <<endl;

}
//Special Key function for controlling
static void SpecialKeyFunc(int Key, int x, int y) {
    switch (Key) {
        case GLUT_KEY_UP:
            if(varid == 2){
                pleteMission();
                break;
            }else{
                glutPostRedisplay();
                break;
            }
        case GLUT_KEY_RIGHT:
            if(varid == 2){
                pleteMission();
                break;
            }else{
                glutPostRedisplay();
                break;
            }

        case GLUT_KEY_PAGE_UP:
            if(varid == 2){
                pleteMission();
                break;
            }else{
                then = 1;
                glutPostRedisplay();
                break;
            }

        case GLUT_KEY_F1:
            if(varid == 3){
                    var=1;//teleport to next page
                    glutPostRedisplay();
                    break;

            }else{
                cout << "Can't teleport if student is not picked\n";
                //glutPostRedisplay();
                break;


            }


        case GLUT_KEY_HOME:
           exit(0);
           break;

    }
}


//What to be display
void display(void)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, 1000, 10.0, 650,-2000,1500);
	glMatrixMode(GL_MODELVIEW);
	glClear( GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);

	if(then==0)
    {
	    kTxt.starterPage();

	}
    if(then==3)
    {
	    kTxt.missionPletePage();
	}

	if(then==1)
	{
	if(flag)
	{
		glPushMatrix();
		glTranslatef(-1.0,0.0,-3.5);
		glRotatef(xangle+25,1.0,0.0,0.0);
		glRotatef(yangle,0.0,1.0,0.0);
        glRotatef(zangle,0.0,0.0,1.0);
		compound.Road2();
		glPushMatrix();
		glTranslatef(0,00,-50);
		bus.busStop();
		glPopMatrix();
        compound.Tree1();
		compound.Tree2();
        Studs.studGirl1();
		compound.lampPost();
		compound.lampPost1();
		compound.lampPost2();
		kTxt.text2();
		bus_move();
        kTxt.text1();
		glPopMatrix();
 	}
  	else
{
		compound.Road2();
		bus.busStop();
		kTxt.text();
        compound.Tree1();
        compound.Tree2();
        Studs.studGirl1();
		compound.lampPost();
		compound.lampPost1();
		compound.lampPost2();
		compound.lampPost4();
        kTxt.text2();
		bus_move();
		//bus_moveBack();
		flag55=1;
	}
    if(vari==1)
	{
        kTxt.text3();
		if(x==865)
			vari=0;
	}
	if(var==1)
	{
        if(flag1)
	{
		glPushMatrix();
		glTranslatef(-1.0,0.0,-3.5);
		glRotatef(xangle+25,1.0,0.0,0.0);
		glRotatef(yangle,0.0,1.0,0.0);
        glRotatef(zangle,0.0,0.0,1.0);
		compound.Road2d();
		builds.buildingd();
		builds.Walld();
	    kTxt.text2d();
		builds.Gated();
		//compound.Treed();
		compound.Tree1d();
		compound.Tree2d();
		compound.Shrubd();
		compound.Shrub1d();
		compound.Shrub2d();
		compound.Shrub3d();
		compound.Shrub4d();
		compound.Stopd();
		kTxt.text3d();
		kTxt.text4d();
		bus_moved();
        //bus_movedBack();
		glPopMatrix();
 	}
  	else
{
		compound.Road2d();
		kTxt.textd();
		builds.buildingd();
		builds.Walld();
		kTxt.text2d();
		builds.Gated();
		//compound.Treed();
		compound.Tree1d();
		compound.Tree2d();
		compound.Shrubd();
		compound.Shrub1d();
		compound.Shrub2d();
		compound.Shrub3d();
		compound.Shrub4d();
		compound.Stopd();
        kTxt.text3d();
		kTxt.text4d();
		bus_moved();
        //bus_moveBack();
	    flag551=1;
   	}
	if(varid==1)
		kTxt.text5d();




	}


}
	glFlush();
	glutSwapBuffers();
}


void myreshape(int w,int h)
{
    // Set viewport dimensions
    glViewport(0, 0, w, h);

    // Set the matrix mode to GL_PROJECTION
    glMatrixMode(GL_PROJECTION);

    // Load the identity matrix to reset any previous transformations
    glLoadIdentity();

    // Adjust the projection based on window dimensions
    if (w <= h)
        // Adjust the orthographic projection based on window aspect ratio
        glOrtho(-2.0, 2.0, -2.0 * (GLfloat)h / (GLfloat)w, 2.0 * (GLfloat)h / (GLfloat)w, -10.0, 10.0);
    else
        // Adjust the orthographic projection based on window aspect ratio
        glOrtho(-2.0 * (GLfloat)w / (GLfloat)h, 2.0 * (GLfloat)w / (GLfloat)h, -2.0, 2.0, -10.0, 10.0);

    // Set the matrix mode back to GL_MODELVIEW for further transformations
    glMatrixMode(GL_MODELVIEW);
}

/**************  main  ***********/
int main(int argc, char **argv)
{
    // Display instructions
    cout << "Press [PgUp] to start driving\n";
    cout << "Press [Home] to close application\n";
    cout << "Press [F1]Teleport to next page\n";

    // Initialize GLUT
    glutInit(&argc, argv);

    // Set display mode
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);

    // Set initial window size
    glutInitWindowSize(1000, 650);

    // Set initial window position
    glutInitWindowPosition(0, 0);

    // Create a window with the specified title
    glutCreateWindow("UMaT BUS DROP");

    // Specify the function to be called for rendering
    glutDisplayFunc(display);

    // Specify the function to be called for handling special key events
    glutSpecialFunc(SpecialKeyFunc);

    // Specify the function to be called when the window is resized
    glutReshapeFunc(myreshape);

    // Enable blending for transparency
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // Enter the GLUT event processing loop
    glutMainLoop();

    // Indicate successful termination
    return 0;
}

/*
MADE WITH LOVE
*/


/*
Introduction:
The UMaT Bus Dropping Simulation uses OpenGL to simulate a school bus system within the University of Mines and Technology (UMaT) campus.

Objective:
Simulate a school bus picking up students at various stops and dropping them off at the school bus stop to optimize campus transportation.

Functionality Overview:

The simulation starts with the bus at a designated point.
Students are generated at random stops.
The bus moves, picks up students, and drops them off.
Ends when all students are dropped.
Implementation Details:

Utilizes OpenGL for rendering.
Algorithms control student generation, bus movement, and drop-offs.
Challenges and Solutions:
Addressed challenges like performance optimization and realistic route design through iterative development and algorithm refinement.

Conclusion:
The UMaT Bus Dropping Simulation enhances campus transportation efficiency, benefiting students and staff.

Future Work:
Potential enhancements include feature additions and performance optimizations.
*/
