#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>


float moveC = 0.0f;
float moveB1 = 0.0f;
float speed = 0.04f;

void display ();
void reshape(int,int);


void house()
{


    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-2.7f,1.2f);
    glVertex2f(-6.7f,1.2f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-1.0f,-1.0f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-6.5f,1.0f);
    glVertex2f(-6.7f,1.2f);
    glVertex2f(-8.5f,-1.0f);
    glVertex2f(-8.0f,-1.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(-6.5f,1.0f);
    glVertex2f(-8.0f,-1.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-1.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(128,135,32);
    glVertex2f(-6.0f,-2.0f);
    glVertex2f(-6.0f,-1.0f);
    glVertex2f(-7.0f,-1.0f);
    glVertex2f(-7.0f,-2.0f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-8.3f,-2.9f);
    glVertex2f(-5.0f,-3.5f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(184,134,11);
    glVertex2f(-1.5f,-3.0f);
    glVertex2f(-1.5f,-1.0f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-5.0f,-3.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-3.5f);
    glVertex2f(-1.0f,-3.5f);
    glVertex2f(-1.5f,-3.0f);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-2.5f,-3.0f);
    glVertex2f(-2.5f,-1.2f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();

}


void secondhouse()
{


    glBegin(GL_TRIANGLES);
     glColor3ub(184,134,11);

    glVertex2f(37.2,-7);
    glVertex2f(34.5,-5);
    glVertex2f(31.7,-7);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(10,20,145);

    glVertex2f(37,-11);
    glVertex2f(37,-7);
    glVertex2f(32,-7);
    glVertex2f(32,-11);
    glEnd();

    //door
    glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(35,-11);
    glVertex2f(35,-9);
    glVertex2f(34,-9);
    glVertex2f(34,-11);
    glEnd();


}








void hill()
{

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(7,3);
    glVertex2f(8,5);
    glVertex2f(13,5);
    glVertex2f(14,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(8,5);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(13,5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,100,0);
    glVertex2f(9,6);
    glVertex2f(12,6);
    glVertex2f(10.5,6.5);
    glEnd();


}

void tree()
{


    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-9.5,2.5);
    glVertex2f(-10,2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glVertex2f(-8,2);
    glVertex2f(-8,2.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9.5,-3.5);
    glVertex2f(-9,-4);
    glVertex2f(-8.5,-3.5);
    glVertex2f(-8.5,1);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glEnd();



    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();


    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-7.5, 2.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-8.5, 3.5, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.0, 4.0, 0);
    glutSolidSphere(1.0, 150, 150);
    glPopMatrix();


}


void smalltree()
{

 glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(12.7,0);
    glVertex2f(15,0);
    glVertex2f(14,4);

    glEnd();
glPopMatrix();


glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(13.7,-2.5);
    glVertex2f(14.2,-2.5);
    glVertex2f(14.2,0);
    glVertex2f(13.7,0);

    glEnd();
glPopMatrix();

}




void boat()
{

    glPushMatrix();
    glTranslatef(moveB1, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(1.0f, -14.0f);
    glVertex2f(1.50f, -13.0f);
    glVertex2f(-2.0f, -13.0f);
    glVertex2f(-3.0f, -14.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.5f);
    glVertex2f(2.0f, -14.0f);
    glVertex2f(-3.0f, -14.0f);
    glVertex2f(-3.0f, -14.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(-3.0f, -14.5f);
    glVertex2f(-3.0f, -14.0f);
    glVertex2f(-4.5f, -13.7f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.5f);
    glVertex2f(3.5f, -13.7f);
    glVertex2f(2.0f, -14.0f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(2.0f, -14.0f);
    glVertex2f(1.5f, -13.0f);
    glVertex2f(1.0f, -14.0f);

    glEnd();

    glPopMatrix();


}

void updateB1(int value)
{

    moveB1 += speed;
    if(moveB1 > 16)
    {
        moveB1 = -3;
    }

 moveB1 += 0.1;

    glutTimerFunc(20, updateB1, 0);
    glutPostRedisplay();
}


void updateC(int value)
{

    if(moveC > 16)
    {
        moveC = -16;
    }
    moveC += 0.1;

    glutTimerFunc(20, updateC, 0);
    glutPostRedisplay();
}


void road()
{

//road
    glBegin(GL_POLYGON);
    glColor3ub(72,72,76);

    glVertex2f(-16.0f,-4.f);
    glVertex2f(0.0f,-5.0f);
    glVertex2f(-2.0f,-8.0f);
    glVertex2f(-16.0f,-8.f);
    glEnd();

// road divider

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);

    glVertex2f(-16.0f,-6.0f);
    glVertex2f(-0.75f,-6.2f);
    glVertex2f(-2.0f,-6.4f);
    glVertex2f(-16.0f,-6.2f);
    glEnd();

}

void cloud()
{

    glPushMatrix();

    glTranslatef(moveC,0.0f,0.0f);
    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 7.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 6.0, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(0.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(3.0, 6.5, 0);
    glutSolidSphere(0.7, 250, 250);
    glPopMatrix();

    glPopMatrix();

}

void init()
{
    glClearColor (0.0,0.0,1.0,0.0 );

}
int main ( int argc, char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(1300,800);
    glutCreateWindow("Swachcha's Village");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    glutTimerFunc(20, updateB1, 0); //Boat
    glutTimerFunc(20, updateC, 1);  //cloud


    glutMainLoop();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();



glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-16,-16);
    glVertex2f(16,-16);
    glVertex2f(16,16);
    glVertex2f(-16,16);
    glEnd();
glPopMatrix();

//river
glBegin(GL_POLYGON);
    glColor3f(0,204,255);
    glVertex2f(5.f,3.f);
    glVertex2f(16.f,3.0f);
    glVertex2f(16.0f,-16.0f);
    glVertex2f(-7.0f,-16.0f);

    glEnd();

//ground
glBegin(GL_POLYGON);
    glColor3ub(25,128,0);
    glVertex2f(5.f,3.f);
    glVertex2f(-7.f,-16.0f);
    glVertex2f(-16.0f,-16.0f);
    glVertex2f(-16.0f,3.0f);

    glEnd();






//sky
glBegin(GL_POLYGON);

    glColor3ub(115,160,228);
    glVertex2f(-16.0f,16.0f);
    glVertex2f(16.0f,16.0f);
    glVertex2f(16.0f,3.0f);
    glVertex2f(-16.0f,3.0f);
    glEnd();
    glPopMatrix();






//hill_start
glPushMatrix();
    glTranslatef(-23,0,0);
    hill();
glPopMatrix();

glPushMatrix();
    glTranslatef(-11,0,0);
    hill();
glPopMatrix();


glPushMatrix();
glScalef(1,1,1);
    glTranslatef(-2,0,0);
    hill();
glPopMatrix();

glPushMatrix();
    glTranslatef(-4,0,0);
    glScalef(2,1,1);
    hill();
glPopMatrix();

glPushMatrix();
    glTranslatef(-20,0,0);
    glScalef(2,1,1);
    hill();
glPopMatrix();

glPushMatrix();
    glTranslatef(-20,0,0);

    hill();
glPopMatrix();
//hill_end


//house_1
glPushMatrix();
    house();
glPopMatrix();

//tree_1
glPushMatrix();
    glTranslatef(-4,4,0);
    glScalef(1.15,1,1);
    tree();
glPopMatrix();


//tree_2
glPushMatrix();
    glTranslatef(9,5,0);
    glScalef(1.15,1,1);
    tree();
glPopMatrix();


//house_2
glPushMatrix();
     glTranslatef(-47,8,0);
     secondhouse();
     glPopMatrix();

//tree_3
glPushMatrix();
    tree();
glPopMatrix();


glPushMatrix();
    road();
glPopMatrix();




//smalltree
glPushMatrix();
    glTranslatef(-27,-10,0);
    smalltree();
glPopMatrix();

//smalltree
glPushMatrix();
    glTranslatef(-28,-11,0);
    smalltree();
glPopMatrix();

//smalltree
glPushMatrix();
    glTranslatef(-25.5,-11,0);
    smalltree();
glPopMatrix();




//boat_big
glPushMatrix();
    boat();
glPopMatrix();


//boat_small
glPushMatrix();
    glTranslatef(3.25,8,0);
    glScalef(.5,1,1);
    boat();
glPopMatrix();


//sun
glPushMatrix();

    glColor3d(255,0,0);
    glTranslatef(14.0, 9.0, 0);
    glutSolidSphere(1.0, 250, 250);
    glPopMatrix();



//cloud_1
glPushMatrix();
    glTranslatef(-12,6,0);
    cloud();
glPopMatrix();

//cloud_2
glPushMatrix();
    glTranslatef(-3,6,0);
    glScalef(2,1.15,1);
    cloud();
glPopMatrix();

//cloud_3
glPushMatrix();
    glTranslatef(6,4,0);
    cloud();
glPopMatrix();










glFlush();
glutSwapBuffers();
}





void reshape (int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-16,16,-16,16);
    glMatrixMode(GL_MODELVIEW);
}

