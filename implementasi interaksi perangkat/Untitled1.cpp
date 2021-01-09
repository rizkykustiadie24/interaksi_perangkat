#include <stdlib.h> 
#include <GL/glut.h> 
#include <windows.h>
float x = 0;
float y = 0;
float z = 0;
void Persegi() {
glBegin(GL_QUADS);
glVertex2d(0,0);
glVertex2d(0,30);
glVertex2d(30,30);
glVertex2d(30,0);
glEnd();
}
void Display()
{
glClear (GL_COLOR_BUFFER_BIT);  
glColor3f(1,0,1);
glTranslatef(x,y,z);
Persegi();
glFlush();
}
void myKeyboard(unsigned char key, int x, int y)
{
if (key == 'a' )
glTranslatef (-4, 0, 0);
else if (key == 'd' )
glTranslatef (4, 0, 0);
else if (key == 's')
glTranslatef (0,-4,0);
else if (key =='w')
glTranslatef (0,4,0);
}
void mouse(int button, int state, int xmouse, int ymouse)
{
if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
{   
glScalef(2,2,1);
}
else if (button == GLUT_RIGHT_BUTTON && state == GLUT_UP)
{
glScalef(0.5,0.5,1);
}
}
void timer (int value)
{
glutPostRedisplay();
glutTimerFunc(10,timer,0);
}
void update (int value) 
{
glutPostRedisplay();
glutTimerFunc(50, update,0);
}

int main (int argc, char **argv)
{
glutInit (&argc, argv);
glutInitDisplayMode (GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
glutInitWindowPosition(100,100);
glutInitWindowSize (640,480);
glutCreateWindow ("LATIHAN INTERAKSI KEYBOARD DAN MOUSE");
gluOrtho2D(-250., 250., -250., 250.);
glutDisplayFunc(Display);
glutTimerFunc(1000,timer,0);
glutKeyboardFunc(myKeyboard);
glutMouseFunc(mouse);
//glutSpecialFunc(mySpecialKeyboard);
glutMainLoop();
}
