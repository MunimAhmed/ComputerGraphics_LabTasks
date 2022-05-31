#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
/// glColor3f(0.0,0.0,0.0);
///renderBitmapString(0.0f, 0.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Hello");
glLineWidth(2);
glBegin(GL_LINE_LOOP);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(-1.0f, 1.0f);
glVertex2f(0.0f, 1.0f);
glVertex2f(0.0f, 0.0f);
glVertex2f(-1.0f, 0.0f);
 glEnd();

  glBegin(GL_LINE_LOOP);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(-0.5f, 0.5f);
glVertex2f(0.5f, 0.5f);
glVertex2f(0.5f, -0.5f);
glVertex2f(-0.5f, -0.5f);
 glEnd();

   glBegin(GL_LINE_LOOP);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(0.1f, -0.2f);
glVertex2f(1.1f, -0.2f);
glVertex2f(1.1f, -1.1f);
glVertex2f(0.1f, -1.1f);
glEnd();
   glBegin(GL_POLYGON);
glColor3f(0.0f, 1.0f, 0.0f);
glVertex2f(0.0f, 0.5f);
glVertex2f(-0.5f, 0.5f);
glVertex2f(-0.5f, 0.0f);
glVertex2f(0.0f, 0.0f);
 glEnd();

    glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2f(0.1f, -0.2f);
glVertex2f(0.5f, -0.2f);
glVertex2f(0.5f, -0.5f);
glVertex2f(0.1f, -0.5f);
 glEnd();
 // Render now
 glFlush();


}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitWindowSize(1080, 1200); // Set the window's initial width & height
glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
glutDisplayFunc(display); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
