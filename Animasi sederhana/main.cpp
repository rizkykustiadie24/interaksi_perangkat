#include <stdlib.h>
#include <GL/glut.h>

int w = 280, h = 280, z = 0;
int x1 = 0, y1 = 0, a = 0, z1 = 0;

void renderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0, 0, -100);
	glRotatef(a, x1, y1, z1);
	glTranslatef(0, 0, z);

	glPushMatrix(); //bola
	glTranslatef(0, 0, 0);
	glColor3f(0.0,1.0,0.0);
	glutWireSphere(20, 1000, 50);
	glPopMatrix();

	glPushMatrix(); //tiang1
	glTranslatef(0, 20, 0);
	glRotatef(-90, 1, 0, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang2
	glTranslatef(20, 0, 0);
	glRotatef(90, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang3
	glTranslatef(0, -20, 0);
	glRotatef(90, 1, 0, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang4
	glTranslatef(-20, 0, 0);
	glRotatef(-90, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang5
	glTranslatef(0, 0, 20);
	glRotatef(0, 0, 0, 1);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang6
	glTranslatef(0, 0, -20);
	glRotatef(180, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang7
	glTranslatef(8, 18, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(20, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang8
	glTranslatef(14, 14, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(45, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang9
	glTranslatef(18, 8, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(70, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang10
	glTranslatef(18, -8, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(110, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang11
	glTranslatef(14, -14, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(135, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang12
	glTranslatef(8, -18, 0);
	glRotatef(90, 1, 0, 0);
	glRotatef(20, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang13
	glTranslatef(-8, 18, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(-20, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang14
	glTranslatef(-14, 14, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(-45, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang15
	glTranslatef(-18, 8, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(-70, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang16
	glTranslatef(-18, -8, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(-110, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang17
	glTranslatef(-14, -14, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(-135, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();


	glPushMatrix(); //tiang18
	glTranslatef(-8, -18, 0);
	glRotatef(90, 1, 0, 0);
	glRotatef(-20, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang19
	glTranslatef(8, 0, 18);
	glRotatef(20, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang20
	glTranslatef(14, 0, 14);
	glRotatef(45, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang21
	glTranslatef(18, 0, 8);
	glRotatef(70, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang22
	glTranslatef(18, 0, -8);
	glRotatef(110, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();


	glPushMatrix(); //tiang23
	glTranslatef(14, 0, -14);
	glRotatef(135, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang24
	glTranslatef(8, 0, -18);
	glRotatef(160, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang25
	glTranslatef(-8, 0, 18);
	glRotatef(-20, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang26
	glTranslatef(-14, 0, 14);
	glRotatef(-45, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang27
	glTranslatef(-18, 0, 8);
	glRotatef(-70, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang28
	glTranslatef(-18, 0, -8);
	glRotatef(-110, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang29
	glTranslatef(-14, 0, -14);
	glRotatef(-135, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang30
	glTranslatef(-8, 0, -18);
	glRotatef(200, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang31
	glTranslatef(0, 8, 18);
	glRotatef(-20, 1, 0, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang32
	glTranslatef(0, 14, 14);
	glRotatef(-45, 1, 0, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang33
	glTranslatef(0, 18, 8);
	glRotatef(-70, 1, 0, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang34
	glTranslatef(0, 18, -8);
	glRotatef(-110, 1, 0, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang35
	glTranslatef(0, 14, -14);
	glRotatef(-135, 1, 0, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang36
	glTranslatef(0, 8, -18);
	glRotatef(-160, 1, 0, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang37
	glTranslatef(0, -8, 18);
	glRotatef(20, 1, 0, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang38
	glTranslatef(0, -14, 14);
	glRotatef(45, 1, 0, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang39
	glTranslatef(0, -18, 8);
	glRotatef(70, 1, 0, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang40
	glTranslatef(0, -18, -8);
	glRotatef(110, 1, 0, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang41
	glTranslatef(0, -14, -14);
	glRotatef(135, 1, 0, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang42
	glTranslatef(0, -8, -18);
	glRotatef(-200, 1, 0, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 10, 200, 50);
	glPopMatrix();


	glPushMatrix(); //bunga1
	glTranslatef(0, 34, 0);
	glRotatef(90, 1, 0, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga2
	glTranslatef(34, 0, 0);
	glRotatef(-90, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga3
	glTranslatef(0, -34, 0);
	glRotatef(-90, 1, 0, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga4
	glTranslatef(-34, 0, 0);
	glRotatef(90, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga5
	glTranslatef(0, 0, 34);
	glRotatef(180, 1, 0, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga6
	glTranslatef(0, 0, -34);
	glRotatef(0, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga7
	glTranslatef(12, 29, 0);
	glRotatef(90, 1, 0, 0);
	glRotatef(-20, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga8
	glTranslatef(24, 24, 0);
	glRotatef(90, 1, 0, 0);
	glRotatef(-45, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga9
	glTranslatef(29, 12, 0);
	glRotatef(90, 1, 0, 0);
	glRotatef(-70, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga10
	glTranslatef(29, -12, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(-70, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga11
	glTranslatef(24, -24, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(-45, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga12
	glTranslatef(12, -29, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(-20, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga13
	glTranslatef(-12, -29, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(20, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga14
	glTranslatef(-24, -24, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(45, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga15
	glTranslatef(-29, -12, 0);
	glRotatef(-90, 1, 0, 0);
	glRotatef(70, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga16
	glTranslatef(-29, 12, 0);
	glRotatef(90, 1, 0, 0);
	glRotatef(70, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga17
	glTranslatef(-24, 24, 0);
	glRotatef(90, 1, 0, 0);
	glRotatef(45, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga18
	glTranslatef(-12, 29, 0);
	glRotatef(90, 1, 0, 0);
	glRotatef(20, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga19
	glTranslatef(12, 0, 29);
	glRotatef(-160, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga20
	glTranslatef(24, 0, 24);
	glRotatef(0, 1, 0, 0);
	glRotatef(-135, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga21
	glTranslatef(29, 0, 12);
	glRotatef(0, 1, 0, 0);
	glRotatef(-110, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga22
	glTranslatef(29, 0, -12);
	glRotatef(0, 1, 0, 0);
	glRotatef(-70, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga23
	glTranslatef(24, 0, -24);
	glRotatef(0, 1, 0, 0);
	glRotatef(-45, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga24
	glTranslatef(12, 0, -29);
	glRotatef(0, 1, 0, 0);
	glRotatef(-20, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga25
	glTranslatef(-12, 0, 29);
	glRotatef(160, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga26
	glTranslatef(-24, 0, 24);
	glRotatef(0, 1, 0, 0);
	glRotatef(135, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga27
	glTranslatef(-29, 0, 12);
	glRotatef(0, 1, 0, 0);
	glRotatef(110, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga28
	glTranslatef(-29, 0, -12);
	glRotatef(0, 1, 0, 0);
	glRotatef(70, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga29
	glTranslatef(-24, 0, -24);
	glRotatef(0, 1, 0, 0);
	glRotatef(45, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga30
	glTranslatef(-12, 0, -29);
	glRotatef(0, 1, 0, 0);
	glRotatef(20, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga31
	glTranslatef(0, 29, 12);
	glRotatef(110, 1, 0, 0);
	glRotatef(0, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga32
	glTranslatef(0, 24, 24);
	glRotatef(135, 1, 0, 0);
	glRotatef(0, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga33
	glTranslatef(0, 12, 29);
	glRotatef(160, 1, 0, 0);
	glRotatef(0, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga34
	glTranslatef(0, -12, 29);
	glRotatef(-160, 1, 0, 0);
	glRotatef(0, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga35
	glTranslatef(0, -24, 24);
	glRotatef(-135, 1, 0, 0);
	glRotatef(0, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga36
	glTranslatef(0, -29, 12);
	glRotatef(-110, 1, 0, 0);
	glRotatef(0, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga37
	glTranslatef(0, -29, -12);
	glRotatef(-70, 1, 0, 0);
	glRotatef(0, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga38
	glTranslatef(0, -24, -24);
	glRotatef(-45, 1, 0, 0);
	glRotatef(0, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga39
	glTranslatef(0, -12, -29);
	glRotatef(-20, 1, 0, 0);
	glRotatef(0, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga40
	glTranslatef(0, 12, -29);
	glRotatef(20, 1, 0, 0);
	glRotatef(0, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga41
	glTranslatef(0, 24, -24);
	glRotatef(45, 1, 0, 0);
	glRotatef(0, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga42
	glTranslatef(0, 29, -12);
	glRotatef(70, 1, 0, 0);
	glRotatef(0, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang001
	glTranslatef(11, 11, 11);
	glRotatef(-45, 1, 0, 0);
	glRotatef(35, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga001
	glTranslatef(19, 19, 19);
	glRotatef(135, 1, 0, 0);
	glRotatef(-35, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang001-2
	glTranslatef(11, -11, 11);
	glRotatef(45, 1, 0, 0);
	glRotatef(35, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga001-2
	glTranslatef(19, -19, 19);
	glRotatef(-135, 1, 0, 0);
	glRotatef(-35, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang001-3
	glTranslatef(11, 11, -11);
	glRotatef(-135, 1, 0, 0);
	glRotatef(35, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga001-3
	glTranslatef(19, 19, -19);
	glRotatef(45, 1, 0, 0);
	glRotatef(-35, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang001-4
	glTranslatef(11, -11, -11);
	glRotatef(135, 1, 0, 0);
	glRotatef(35, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga001-4
	glTranslatef(19, -19, -19);
	glRotatef(-45, 1, 0, 0);
	glRotatef(-35, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang001-5
	glTranslatef(-11, 11, 11);
	glRotatef(-45, 1, 0, 0);
	glRotatef(-35, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga001-5
	glTranslatef(-19, 19, 19);
	glRotatef(135, 1, 0, 0);
	glRotatef(35, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang001-6
	glTranslatef(-11, -11, 11);
	glRotatef(45, 1, 0, 0);
	glRotatef(-35, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga001-6
	glTranslatef(-19, -19, 19);
	glRotatef(-135, 1, 0, 0);
	glRotatef(35, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang001-7
	glTranslatef(-11, 11, -11);
	glRotatef(-135, 1, 0, 0);
	glRotatef(-35, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga001-7
	glTranslatef(-19, 19, -19);
	glRotatef(45, 1, 0, 0);
	glRotatef(35, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang001-8
	glTranslatef(-11, -11, -11);
	glRotatef(135, 1, 0, 0);
	glRotatef(-35, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga001-8
	glTranslatef(-19, -19, -19);
	glRotatef(-45, 1, 0, 0);
	glRotatef(35, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang002
	glTranslatef(7, 17, 7);
	glRotatef(-68, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga002
	glTranslatef(12, 29, 12);
	glRotatef(112, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang002-2
	glTranslatef(7, -17, 7);
	glRotatef(68, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga002-2
	glTranslatef(12, -29, 12);
	glRotatef(-112, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang002-3
	glTranslatef(7, 17, -7);
	glRotatef(-112, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga002-3
	glTranslatef(12, 29, -12);
	glRotatef(68, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang002-4
	glTranslatef(7, -17, -7);
	glRotatef(112, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga002-4
	glTranslatef(12, -29, -12);
	glRotatef(-68, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang002-5
	glTranslatef(-7, 17, 7);
	glRotatef(-68, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga002-5
	glTranslatef(-12, 29, 12);
	glRotatef(112, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang002-6
	glTranslatef(-7, -17, 7);
	glRotatef(68, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga002-6
	glTranslatef(-12, -29, 12);
	glRotatef(-112, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang002-7
	glTranslatef(-7, 17, -7);
	glRotatef(-112, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga002-7
	glTranslatef(-12, 29, -12);
	glRotatef(68, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang002-8
	glTranslatef(-7, -17, -7);
	glRotatef(112, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga002-8
	glTranslatef(-12, -29, -12);
	glRotatef(-68, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang003
	glTranslatef(7, 7, 17);
	glRotatef(-22, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga003
	glTranslatef(12, 12, 29);
	glRotatef(158, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang003-2
	glTranslatef(7, -7, 17);
	glRotatef(22, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga003-2
	glTranslatef(12, -12, 29);
	glRotatef(-158, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang003-3
	glTranslatef(7, 7, -17);
	glRotatef(-158, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga003-3
	glTranslatef(12, 12, -29);
	glRotatef(22, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang003-4
	glTranslatef(7, -7, -17);
	glRotatef(158, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga003-4
	glTranslatef(12, -12, -29);
	glRotatef(-22, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang003-5
	glTranslatef(-7, 7, 17);
	glRotatef(-22, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga003-5
	glTranslatef(-12, 12, 29);
	glRotatef(158, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang003-6
	glTranslatef(-7, -7, 17);
	glRotatef(22, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga003-6
	glTranslatef(-12, -12, 29);
	glRotatef(-158, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang003-7
	glTranslatef(-7, 7, -17);
	glRotatef(-158, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga003-7
	glTranslatef(-12, 12, -29);
	glRotatef(22, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang003-8
	glTranslatef(-7, -7, -17);
	glRotatef(158, 1, 0, 0);
	glRotatef(-22, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga003-8
	glTranslatef(-12, -12, -29);
	glRotatef(-22, 1, 0, 0);
	glRotatef(22, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang004
	glTranslatef(17, 7, 7);
	glRotatef(-45, 1, 0, 0);
	glRotatef(60, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga004
	glTranslatef(29, 12, 12);
	glRotatef(135, 1, 0, 0);
	glRotatef(-60, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang004-2
	glTranslatef(17, -7, 7);
	glRotatef(45, 1, 0, 0);
	glRotatef(60, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga004-2
	glTranslatef(29, -12, 12);
	glRotatef(-135, 1, 0, 0);
	glRotatef(-60, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang004-3
	glTranslatef(17, 7, -7);
	glRotatef(-135, 1, 0, 0);
	glRotatef(60, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga004-3
	glTranslatef(29, 12, -12);
	glRotatef(45, 1, 0, 0);
	glRotatef(-60, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang004-4
	glTranslatef(17, -7, -7);
	glRotatef(135, 1, 0, 0);
	glRotatef(60, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga004-4
	glTranslatef(29, -12, -12);
	glRotatef(-45, 1, 0, 0);
	glRotatef(-60, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang004-5
	glTranslatef(-17, 7, 7);
	glRotatef(-45, 1, 0, 0);
	glRotatef(-60, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bungag004-5
	glTranslatef(-29, 12, 12);
	glRotatef(135, 1, 0, 0);
	glRotatef(60, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang004-6
	glTranslatef(-17, -7, 7);
	glRotatef(45, 1, 0, 0);
	glRotatef(-60, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga004-6
	glTranslatef(-29, -12, 12);
	glRotatef(-135, 1, 0, 0);
	glRotatef(60, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang004-7
	glTranslatef(-17, 7, -7);
	glRotatef(-135, 1, 0, 0);
	glRotatef(-60, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga004-7
	glTranslatef(-29, 12, -12);
	glRotatef(45, 1, 0, 0);
	glRotatef(60, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();

	glPushMatrix(); //tiang004-8
	glTranslatef(-17, -7, -7);
	glRotatef(135, 1, 0, 0);
	glRotatef(-60, 0, 1, 0);
	glColor3f(1.0,1.0,0.0);
	glutWireCone(2, 12, 200, 50);
	glPopMatrix();

	glPushMatrix(); //bunga004-8
	glTranslatef(-29, -12, -12);
	glRotatef(-45, 1, 0, 0);
	glRotatef(60, 0, 1, 0);
	glColor3f(1.0,0.0,0.0);
	glutWireCone(3, 8, 200, 50);
	glPopMatrix();


	glutSwapBuffers();
}

void resize(int w1, int h1) {
	glViewport(0, 0, w1, h1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (float)w1 / (float)h1, 1.0, 300.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void myKeyboard(unsigned char key, int x, int y) {
	if (key == 'x') {
		y1 = 0; x1 = 0; z1 = 1; a += 10;
	}
	else if (key == 'z') {
		y1 = 0; x1 = 0; z1 = 1; a += -10;
	}
}

void mySpecialKeyboard(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_UP:x1 = 1; y1 = 0; z1 = 0; a += -5; break;
	case GLUT_KEY_DOWN:x1 = 1; y1 = 0; z1 = 0; a += 5;  break;
	case GLUT_KEY_LEFT:y1 = 1; x1 = 0; z1 = 0; a += -5; break;
	case GLUT_KEY_RIGHT:y1 = 1; x1 = 0; z1 = 0; a += 5; break;
	}
}

void init() {
	glClearColor(0.3, 0.3, 0.3, 1);
	glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (GLdouble)w / (GLdouble)h, 1.0, 300.0);
	glMatrixMode(GL_MODELVIEW);
}

void timer(int value) {
	glutPostRedisplay();
	glutTimerFunc(50, timer, 0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(w, h);
	glutCreateWindow("Virus Covid-19");
	gluOrtho2D(-w / 2, w / 2, -h / 2, h / 2);
	glutDisplayFunc(renderScene);
	glutReshapeFunc(resize);
	glutKeyboardFunc(myKeyboard);
	glutSpecialFunc(mySpecialKeyboard);
	glutTimerFunc(1, timer, 0);
	init();
	glutMainLoop();
}
