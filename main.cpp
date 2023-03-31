#include<GL/glut.h>
#include<math.h>
int rFlag = 0;
void display();
void reshape(int, int);
void timer(int);
void MyInit() {
	glClearColor(0, 0.7, 1, 0);
	glColor3f(0, 0, 1);
}
void cloud()
{
	int i, j;
	float x, t, y, z;

	//glLoadIdentity();
	//glRotatef(40,1,1,0);
	
		int b = 0.100, c = 0.250;
		t = b + 0.050 * cos(0);
		z = c + 0.050 * sin(0);
		glColor3f(1.0, 0.8, 0);
		glBegin(GL_POLYGON);
		for (i = 0; i <= 360; i++)
		{
			x = i * 3.142 / 180;
			glVertex2f(0.100 + 0.060 * cos(x), 0.350 + 0.070 * sin(x));
		}
		glEnd();

		glColor3f(1, 1, 1);
		glBegin(GL_POLYGON);//first circle
		t = b + 0.050 * cos(0 * 3.142 / 180);
		z =c + 0.050 * sin(0 * 3.142 / 180);
		for (i = 0; i <= 360; i++)
		{
			x = i * 3.142 / 180;
			y = i * 3.142 / 180;
			glVertex2f(b + 0.050 * cos(x),c + 0.050 * sin(y));
		}
		glEnd();
		glBegin(GL_POLYGON);//second circle
		for (int j = 0; j <= 360; j++)
		{
			x = j * 3.142 / 180;
			y = j * 3.142 / 180;
			glVertex2f(t + 0.080 * cos(x), z + 0.080 * sin(y));
		}
		glEnd();
		glBegin(GL_POLYGON);//third circle
		t = t + 0.070 * cos(0 * 3.142 / 180);
		z = z + 0.070 * sin(0 * 3.142 / 180);
		for (int k = 0; k <= 360; k++)
		{
			x = k * 3.142 / 180;
			y = k * 3.142 / 180;
			glVertex2f(t + 0.050 * cos(x), z + 0.050 * sin(y));
		}
		glEnd();
		//second cloud
		glBegin(GL_POLYGON);//first circle
		t = 0.600 + 0.050 * cos(0 * 3.142 / 180);
		z = 0.750 + 0.050 * sin(0 * 3.142 / 180);
		for (i = 0; i <= 360; i++)
		{
			x = i * 3.142 / 180;
			y = i * 3.142 / 180;
			glVertex2f(0.600 + 0.050 * cos(x), 0.750 + 0.050 * sin(y));
		}
		glEnd();
		glBegin(GL_POLYGON);//second circle
		for (int j = 0; j <= 360; j++)
		{
			x = j * 3.142 / 180;
			y = j * 3.142 / 180;
			glVertex2f(t + 0.080 * cos(x), z + 0.080 * sin(y));
		}
		glEnd();
		glBegin(GL_POLYGON);//third circle
		t = t + 0.070 * cos(0 * 3.142 / 180);
		z = z + 0.070 * sin(0 * 3.142 / 180);
		for (int k = 0; k <= 360; k++)
		{
			x = k * 3.142 / 180;
			y = k * 3.142 / 180;
			glVertex2f(t + 0.050 * cos(x), z + 0.050 * sin(y));
		}
		glEnd();
		glFlush();
		/*b = b + 0.300;
		c = c + 0.450;*/
	}


float x_position = -1.0; float x1_position = 1.0;
float y_position = -0.9; float y1_position = 0.9;
int state = 1;//right side
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	cloud();
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(x_position - 0.22, y_position + 0, 0.1);
	glVertex3f(x_position - 0.21, y_position + 0.1, 0.1);
	glVertex3f(x_position - 0.19, y_position + 0.13, 0.1);
	glColor3f(1, 1, 0);
	glVertex3f(x_position - 0.09, y_position + 0.17, 0.1);
	glVertex3f(x_position + 0.09, y_position + 0.17, 0.1);
	glColor3f(1, 0, 1);
	glVertex3f(x_position + 0.19, y_position + 0.13, 0.1);
	glVertex3f(x_position + 0.21, y_position + 0.1, 0.1);
	glVertex3f(x_position + 0.22, y_position + 0, 0.1);
	glColor3f(1, 0.9, 0);
	glVertex3f(x_position + 0.05, y_position + -0.4, 0.1);
	glVertex3f(x_position + -0.05, y_position + -0.4, 0.1);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex3f(x_position - 0.05, y_position - 0.67, 0.1);
	glVertex3f(x_position + 0.05, y_position - 0.67, 0.1);
	glVertex3f(x_position + 0.05, y_position - 0.78, 0.1);
	glVertex3f(x_position + 0.04, y_position - 0.8, 0.1);
	glVertex3f(x_position - 0.04, y_position - 0.8, 0.1);
	glVertex3f(x_position - 0.05, y_position - 0.78, 0.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex3f(x_position + 0.05, y_position - 0.4, 0.1);
	glVertex3f(x_position + 0.05, y_position - 0.67, 0.1);
	glVertex3f(x_position - 0.05, y_position - 0.4, 0.1);
	glVertex3f(x_position - 0.05, y_position - 0.67, 0.1);
	glVertex3f(x_position + 0.03, y_position - 0.4, 0.1);
	glVertex3f(x_position + 0.03, y_position - 0.67, 0.1);
	glVertex3f(x_position - 0.03, y_position - 0.4, 0.1);
	glVertex3f(x_position - 0.03, y_position - 0.67, 0.1);
	glEnd();
	//blue color
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(x1_position - 0.22, y1_position + 0, 0.1);
	glVertex3f(x1_position - 0.21, y1_position + 0.1, 0.1);
	glVertex3f(x1_position - 0.19, y1_position + 0.13, 0.1);
	glColor3f(0, 0.1, 1);
	glVertex3f(x1_position - 0.09, y1_position + 0.17, 0.1);
	glVertex3f(x1_position + 0.09, y1_position + 0.17, 0.1);
	glColor3f(0, 0.9, 1);
	glVertex3f(x1_position + 0.19, y1_position + 0.13, 0.1);
	glVertex3f(x1_position + 0.21, y1_position + 0.1, 0.1);
	glVertex3f(x1_position + 0.22, y1_position + 0, 0.1);
	glColor3f(0, 0.9, 1);
	glVertex3f(x1_position + 0.05, y1_position + -0.4, 0.1);
	glVertex3f(x1_position + -0.05, y1_position + -0.4, 0.1);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 1);
	glVertex3f(x1_position - 0.05, y1_position - 0.67, 0.1);
	glVertex3f(x1_position + 0.05, y1_position - 0.67, 0.1);
	glVertex3f(x1_position + 0.05, y1_position - 0.78, 0.1);
	glVertex3f(x1_position + 0.04, y1_position - 0.8, 0.1);
	glVertex3f(x1_position - 0.04, y1_position - 0.8, 0.1);
	glVertex3f(x1_position - 0.05, y1_position - 0.78, 0.1);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex3f(x1_position + 0.05, y1_position - 0.4, 0.1);
	glVertex3f(x1_position + 0.05, y1_position - 0.67, 0.1);
	glVertex3f(x1_position - 0.05, y1_position - 0.4, 0.1);
	glVertex3f(x1_position - 0.05, y1_position - 0.67, 0.1);
	glVertex3f(x1_position + 0.03, y1_position - 0.4, 0.1);
	glVertex3f(x1_position + 0.03, y1_position - 0.67, 0.1);
	glVertex3f(x1_position - 0.03, y1_position - 0.4, 0.1);
	glVertex3f(x1_position - 0.03, y1_position - 0.67, 0.1);
	glEnd();
    glutSwapBuffers();
}
void AnimateMenu(int option)
{
	if (option == 1)
		rFlag = 1;
	if (option == 2)
		rFlag = 2;
	if (option == 3)
		rFlag = 3;
	//if (option == 4)
		//rFlag = 4;
	if (option == 5)
		rFlag = 5;
	if (option == 6)
		rFlag = 6;
	if (option == 7)
		rFlag = 7;
	//if (option == 8)
		//rFlag = 8;
	if (option == 9)
		rFlag = 9;
	if (option == 10)
		rFlag = 10;
	if (option == 11)
		rFlag = 11;
	if (option == 12)
		rFlag = 12;
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutCreateWindow("Parachute Animation");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutTimerFunc(0, timer, 0);
	MyInit();
	glutCreateMenu(AnimateMenu);
	glutAddMenuEntry(">>>Both", 0);
	glutAddMenuEntry("Vertical & Horizontal Move", 1);
	glutAddMenuEntry("Horizontal Move", 2);
	glutAddMenuEntry("Vertical Move", 3);
	//glutAddMenuEntry("Stop", 4);
	glutAddMenuEntry(">>>Pink", 0);
	glutAddMenuEntry("Vertical & Horizontal Move", 5);
	glutAddMenuEntry("Horizontal Move", 6);
	glutAddMenuEntry("Vertical Move", 7);
	//glutAddMenuEntry("Stop", 8);
	glutAddMenuEntry(">>>Blue", 0);
	glutAddMenuEntry("Vertical & Horizontal Move", 9);
	glutAddMenuEntry("Horizontal Move", 10);
	glutAddMenuEntry("Vertical Move", 11);
	glutAddMenuEntry("Stop", 12);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
}
void reshape(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-0, 0, -0, 0);
	glMatrixMode(GL_MODELVIEW);
}
void timer(int) {
	glutPostRedisplay();
	glutTimerFunc(1000 / 60, timer, 0);
	//Both
	//vertical and horizontal move
	if (rFlag == 1) {
		switch (state) {
		case 1:
			if ((x_position < 0.9 || y_position < 0.2) && (x1_position > -0.9 || y1_position > -0.9)) {
				x_position += 0.002;
				y_position += 0.002;
				x1_position -= 0.002;
				y1_position -= 0.002;
			}
			else
				state = 2;
			break;
		case 2:
			if ((x_position > -1 || y_position > -0.3) && (x1_position < 0.9 || y1_position < 0.2)) {
				x_position -= 0.002;
				y_position -= 0.002;
				x1_position += 0.002;
				y1_position += 0.002;
			}
			else
				state = 1;
			break;
		}
	}
	if (rFlag == 2) {
		switch (state) {
		case 1:
			if (x_position < 0.9) {
				x_position += 0.002;
				x1_position -= 0.002;
			}
			else
				state = 2;
			break;
		case 2:
			if (x_position > -1) {
				x_position -= 0.002;
				x1_position += 0.002;
			}
			else
				state = 1;
			break;
		}
	}
	if (rFlag == 3) {
		switch (state) {
		case 1:
			if ((y_position < 1.0)) {
				y_position += 0.002;
				y1_position -= 0.002;
			}
			else
				state = 2;
			break;
		case 2:
			if ((y_position > -1.0)) {
				y_position -= 0.002;
				y1_position += 0.002;
			}
			else
				state = 1;
			break;
		}
	}
	//pink color
	if (rFlag == 5) {
		switch (state) {
		case 1:
			if (x_position < 0.9 || y_position < 0.2) {
				x_position += 0.002;
				y_position += 0.002;
			}
			else
				state = 2;
			break;
		case 2:
			if (x_position > -1 || y_position > -0.3) {
				x_position -= 0.002;
				y_position -= 0.002;
			}
			else
				state = 1;
			break;
		}
	}
	if (rFlag == 6) {
		switch (state) {
		case 1:
			if (x_position < 0.9) {
				x_position += 0.002;
			}
			else
				state = 2;
			break;
		case 2:
			if (x_position > -1) {
				x_position -= 0.002;
			}
			else
				state = 1;
			break;
		}
	}
	if (rFlag == 7) {
		switch (state) {
		case 1:
			if (y_position < 1.0) {
				y_position += 0.002;
			}
			else
				state = 2;
			break;
		case 2:
			if (y_position > -1.0) {
				y_position -= 0.002;
			}
			else
				state = 1;
			break;
		}
	}
	//Blue color
	if (rFlag == 9) {
		switch (state) {
		case 1:
			if (x1_position > -0.9 || y1_position > -0.9) {
				x1_position -= 0.002;
				y1_position -= 0.002;
			}
			else
				state = 2;
			break;
		case 2:
			if (x1_position < 0.9 || y1_position < 0.2) {
				x1_position += 0.002;
				y1_position += 0.002;
			}
			else
				state = 1;
			break;
		}
	}
	if (rFlag == 10) {
		switch (state) {
		case 1:
			if (x1_position > -0.9) {
				x1_position -= 0.002;
			}
			else
				state = 2;
			break;
		case 2:
			if (x1_position < 1) {
				x1_position += 0.002;
			}
			else
				state = 1;
			break;
		}
	}
	if (rFlag == 11) {
		
			switch (state) {
			case 1:
				if (y1_position < 1.0) {
					y1_position += 0.002;
				}
				else
					state = 2;
				break;
			case 2:
				if (y1_position > -1.0) {
					y1_position -= 0.002;
				}
				else
					state = 1;
				break;
			}
		}

	}
