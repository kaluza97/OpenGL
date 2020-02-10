#include <windows.h> 

#include "freeglut.h"

//wspolrzedne obserwatora

GLdouble eyex = 0.0;
GLdouble eyey = 0.0;
GLdouble eyez = 30.0;



void plaszczyzna (GLfloat x, GLfloat y, GLfloat z, GLfloat dx, GLfloat dy, GLfloat dz)
{
	glBegin(GL_QUADS);

	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(x, y + dy, z);
	glVertex3f(x + dx, y + dy, z);
	glVertex3f(x + dx, y + dy, z + dz);
	glVertex3f(x, y + dy, z + dz);

	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(x, y, z);
	glVertex3f(x + dx, y, z);
	glVertex3f(x + dx, y, z + dz);
	glVertex3f(x, y, z + dz);

	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(x + dx, y, z);
	glVertex3f(x + dx, y, z + dz);
	glVertex3f(x + dx, y + dy, z + dz);
	glVertex3f(x + dx, y + dy, z);

	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(x, y, z);
	glVertex3f(x, y, z + dz);
	glVertex3f(x, y + dy, z + dz);
	glVertex3f(x, y + dy, z);

	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(x, y, z);
	glVertex3f(x + dx, y, z);
	glVertex3f(x + dx, y + dy, z);
	glVertex3f(x, y + dy, z);

	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(x, y, z + dz);
	glVertex3f(x + dx, y, z + dz);
	glVertex3f(x + dx, y + dy, z + dz);
	glVertex3f(x, y + dy, z + dz);

	glEnd();
}

void prostopadloscian(GLfloat x, GLfloat y, GLfloat z, GLfloat dx, GLfloat dy, GLfloat dz)
{
	glBegin(GL_QUADS);

	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(x, y + dy, z);
	glVertex3f(x + dx, y + dy, z);
	glVertex3f(x + dx, y + dy, z + dz);
	glVertex3f(x, y + dy, z + dz);

	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(x, y, z);
	glVertex3f(x + dx, y, z);
	glVertex3f(x + dx, y, z + dz);
	glVertex3f(x, y, z + dz);

	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(x + dx, y, z);
	glVertex3f(x + dx, y, z + dz);
	glVertex3f(x + dx, y + dy, z + dz);
	glVertex3f(x + dx, y + dy, z);

	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(x, y, z);
	glVertex3f(x, y, z + dz);
	glVertex3f(x, y + dy, z + dz);
	glVertex3f(x, y + dy, z);

	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(x, y, z);
	glVertex3f(x + dx, y, z);
	glVertex3f(x + dx, y + dy, z);
	glVertex3f(x, y + dy, z);

	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(x, y, z + dz);
	glVertex3f(x + dx, y, z + dz);
	glVertex3f(x + dx, y + dy, z + dz);
	glVertex3f(x, y + dy, z + dz);

	glEnd();
}
void skos(GLfloat x, GLfloat y, GLfloat z, GLfloat ddx, GLfloat dkx, GLfloat dy, GLfloat dz)
{
	glBegin(GL_QUADS);

	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(x, y + dy, z);
	glVertex3f(x + dkx, y + dy, z);
	glVertex3f(x + dkx, y + dy, z + dz);
	glVertex3f(x, y + dy, z + dz);

	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(x + ddx, y, z);
	glVertex3f(x + ddx + dkx, y, z);
	glVertex3f(x + ddx + dkx, y, z + dz);
	glVertex3f(x + ddx, y, z + dz);

	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(x + ddx + dkx, y, z);
	glVertex3f(x + dkx, y + dy, z);
	glVertex3f(x + dkx, y + dy, z + dz);
	glVertex3f(x + ddx + dkx, y, z + dz);

	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(x + ddx, y, z);
	glVertex3f(x, y + dy, z);
	glVertex3f(x, y + dy, z + dz);
	glVertex3f(x + ddx, y, z + dz);

	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(x + ddx, y, z);
	glVertex3f(x, y + dy, z);
	glVertex3f(x + dkx, y + dy, z);
	glVertex3f(x + ddx + dkx, y, z);

	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(x + ddx, y, z + dz);
	glVertex3f(x, y + dy, z + dz);
	glVertex3f(x + dkx, y + dy, z + dz);
	glVertex3f(x + ddx + dkx, y, z + dz);

	glEnd();
}

void display()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60.0, 1.0, 0.1, 50.0); 
	gluLookAt(eyex, eyey, eyez, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	prostopadloscian(-12.0, 10.0, 2.0, 8.0, 2.0, -2.0);
	prostopadloscian(-6.0, 6.0, 2.0, 2.0, 6.0, -2.0);
	prostopadloscian(-12.0, 4.0, 2.0, 8.0, 2.0, -2.0);
	prostopadloscian(-12.0, -2.0, 2.0, 2.0, 12.0, -2.0);
	prostopadloscian(4.0, -2.0, 2.0, 2.0, 14.0, -2.0);
	skos(14.0, 5.0, 2.0, -6.0, -2.0, 7.0, -2.0);
	skos(14.0, 5.0, 2.0, -6.0, -2.0, -7.0, -2.0);
	plaszczyzna(-14.0, -4.0, 4.0, 30.0, 2.0, -6.0);
	
	glColor3f(1, 0, 0);
	glutSolidSphere(2, 60, 60);
	glTranslatef(0, 2, 0);


	glTranslatef(-14, -8, -2);
	glRotatef(-90, 1, 0, 0);
	glColor3f(1, 1, 0);
	glutSolidCone(2, 2, 20, 20);

	glTranslatef(0, -6, 0);
	glutSolidCone(2, 2, 20, 20);


	glTranslatef(30, 0, 0);
	glutSolidCone(2, 2, 20, 20);

	glTranslatef(0, 6, 0);
	glutSolidCone(2, 2, 20, 20);

		glFlush();

}

//odrysowywanie okna renderingu

void Redisplay(int width, int height)
{
	// obszar renderingu - całe okno
	glViewport(0, 0, width, height);

	// generowanie sceny 3D
	display();
}


//ruch obserwatora do przodu, do tyłu

void Klawiatura(unsigned char key, int x, int y)
{
	// klawisz +
	if (key == '+')
		eyez -= 0.5;
	else
		// klawisz -
		if (key == '-')
			eyez += 0.5;
	// odrysowanie okna
	Redisplay(glutGet(GLUT_WINDOW_WIDTH), glutGet(GLUT_WINDOW_HEIGHT));
}

//ruch obserwatora w poziomie i w pionie

void Strzalki(int key, int x, int y)
{
	switch (key)
	{
		// scena w lewo
	case GLUT_KEY_LEFT:
		eyex += 0.5;
		break;
		// scena w górę
	case GLUT_KEY_UP:
		eyey -= 0.5;
		break;
		// scena w prawo
	case GLUT_KEY_RIGHT:
		eyex -= 0.5;
		break;
		// scena w dół
	case GLUT_KEY_DOWN:
		eyey += 0.5;
		break;
	}
	// odrysowanie okna
	Redisplay(glutGet(GLUT_WINDOW_WIDTH), glutGet(GLUT_WINDOW_HEIGHT));
}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE | GLUT_DEPTH);
	glutInitWindowSize(1200, 800);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Scena testowa Inicjaly PK");
	glutDisplayFunc(display);

	// dołączenie funkcji wywoływanej przy zmianie rozmiaru okna
	glutReshapeFunc(Redisplay);

	// dołączenie funkcji obsługi klawiatury
	glutKeyboardFunc(Klawiatura);

	// dołączenie funkcji obsługi klawiszy strzałek
	glutSpecialFunc(Strzalki);


	glutMainLoop();
}
