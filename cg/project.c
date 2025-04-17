#include <GL/glut.h>
#include <stdio.h>

float carX = -1.0f; // Car position
float wheelAngle = 0.0f;

void init() {
    glClearColor(0.6f, 0.9f, 1.0f, 1.0f); // Sky blue background
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-1, 1, -1, 1); // Set 2D view
}

void drawCity() {
    // Road
    glColor3f(0.3f, 0.3f, 0.3f);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -0.5f); glVertex2f(1.0f, -0.5f);
    glVertex2f(1.0f, -0.8f); glVertex2f(-1.0f, -0.8f);
    glEnd();

    // Buildings
    glColor3f(0.8f, 0.8f, 0.8f);
    glBegin(GL_QUADS);
    glVertex2f(-0.9f, -0.5f); glVertex2f(-0.7f, -0.5f);
    glVertex2f(-0.7f, 0.3f); glVertex2f(-0.9f, 0.3f);
    glEnd();

    // Add more buildings with different heights/colors
}

void drawCar() {
    glPushMatrix();
    glTranslatef(carX, -0.65f, 0.0f);

    // Car body
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glBegin(GL_POLYGON);
    glVertex2f(-0.1f, 0.0f); glVertex2f(0.1f, 0.0f);
    glVertex2f(0.1f, 0.05f); glVertex2f(-0.1f, 0.05f);
    glEnd();

    // Car top
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow
    glBegin(GL_POLYGON);
    glVertex2f(-0.05f, 0.05f); glVertex2f(0.05f, 0.05f);
    glVertex2f(0.03f, 0.09f); glVertex2f(-0.03f, 0.09f);
    glEnd();

    // Wheels
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i += 10)
        glVertex2f(0.07f * cos(i * 3.14 / 180) - 0.07f, 0.07f * sin(i * 3.14 / 180));
    glEnd();

    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i += 10)
        glVertex2f(0.07f * cos(i * 3.14 / 180) + 0.07f, 0.07f * sin(i * 3.14 / 180));
    glEnd();

    glPopMatrix();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawCity();
    drawCar();
    glutSwapBuffers();
}

void update(int value) {
    carX += 0.005f;
    if (carX > 1.2f) carX = -1.2f;
    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

void keyboard(unsigned char key, int x, int y) {
    if (key == 'a') carX -= 0.05f;
    if (key == 'd') carX += 0.05f;
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("2D Car Animation in a City");

    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutTimerFunc(0, update, 0);

    glutMainLoop();
    return 0;
}