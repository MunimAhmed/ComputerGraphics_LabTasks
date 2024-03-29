/// Draw X, Y Axis (two dimensional coordinate system)

#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to yellow and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(2);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 0.0f); // green

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(1.0f, 0.0f);    // x, y

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.0f, 1.0f);    // x, y

    glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(-1.0f, 0.0f);    // x, y

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.0f, -1.0f);

	glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, .5f, 1.0f); // cyan
	glVertex2f(0.4f, 0.2f);
	glVertex2f(0.6f, 0.2f);
	glVertex2f(0.7f, 0.4f);
	glVertex2f(0.6f, 0.6f);
	glVertex2f(0.4f, 0.6f);
	glVertex2f(0.3f, 0.4f);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(-0.4f, 0.2f);
	glVertex2f(-0.8f, 0.2f);
	glVertex2f(-0.6f,  0.6f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(-0.4f, -0.2f);
	glVertex2f(-0.8f, -0.2f);
	glVertex2f(-0.8f, -0.6f);
	glVertex2f(-0.4f, -0.6f);

	glEnd();

	glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 0.0f);

    glVertex2f(0.7f, -0.2f);
	glVertex2f(0.6f,-0.6f);
	glVertex2f(0.8f, -0.6f);
	glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(320, 320);
	glutInitWindowPosition(80, 50);
	glutCreateWindow("OpenGL Setup");
	glutDisplayFunc(display);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
