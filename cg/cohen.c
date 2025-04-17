#include <stdio.h>
#include <GL/glut.h>

// Define the clipping window boundaries
double x_min = 50, y_min = 50, x_max = 250, y_max = 250;

// Define region codes
const int INSIDE = 0; // 0000
const int LEFT = 1;   // 0001
const int RIGHT = 2;  // 0010
const int BOTTOM = 4; // 0100
const int TOP = 8;    // 1000

// Function to compute the region code for a point
int computeRegionCode(double x, double y) {
    int code = INSIDE;

    if (x < x_min)
        code |= LEFT;
    else if (x > x_max)
        code |= RIGHT;

    if (y < y_min)
        code |= BOTTOM;
    else if (y > y_max)
        code |= TOP;

    return code;
}

// Cohen-Sutherland line clipping algorithm
void cohenSutherlandClip(double x1, double y1, double x2, double y2) {
    int code1 = computeRegionCode(x1, y1);
    int code2 = computeRegionCode(x2, y2);

    bool accept = false;

    while (true) {
        if ((code1 == 0) && (code2 == 0)) {
            // Both endpoints lie within the clipping window
            accept = true;
            break;
        } else if (code1 & code2) {
            // Both endpoints lie outside on the same side of the clipping window
            break;
        } else {
            // The line needs clipping
            int code_out;
            double x, y;

            // Choose an endpoint that lies outside the clipping window
            if (code1 != 0)
                code_out = code1;
            else
                code_out = code2;

            // Find the intersection point
            if (code_out & TOP) {
                // Point is above the clip rectangle
                x = x1 + (x2 - x1) * (y_max - y1) / (y2 - y1);
                y = y_max;
            } else if (code_out & BOTTOM) {
                // Point is below the clip rectangle
                x = x1 + (x2 - x1) * (y_min - y1) / (y2 - y1);
                y = y_min;
            } else if (code_out & RIGHT) {
                // Point is to the right of the clip rectangle
                y = y1 + (y2 - y1) * (x_max - x1) / (x2 - x1);
                x = x_max;
            } else if (code_out & LEFT) {
                // Point is to the left of the clip rectangle
                y = y1 + (y2 - y1) * (x_min - x1) / (x2 - x1);
                x = x_min;
            }

            // Now intersection point x,y is found
            // Replace point outside clipping area by intersection point
            if (code_out == code1) {
                x1 = x;
                y1 = y;
                code1 = computeRegionCode(x1, y1);
            } else {
                x2 = x;
                y2 = y;
                code2 = computeRegionCode(x2, y2);
            }
        }
    }

    if (accept) {
        // Draw the clipped line
        glColor3f(0.0, 1.0, 0.0); // Green for clipped line
        glBegin(GL_LINES);
        glVertex2d(x1, y1);
        glVertex2d(x2, y2);
        glEnd();
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0); // White for the clipping window and original line

    // Draw the clipping window
    glBegin(GL_LINE_LOOP);
    glVertex2d(x_min, y_min);
    glVertex2d(x_max, y_min);
    glVertex2d(x_max, y_max);
    glVertex2d(x_min, y_max);
    glEnd();

    // Draw the original line
    double x1 = 60, y1 = 20, x2 = 300, y2 = 350; // Example line coordinates
    glBegin(GL_LINES);
    glVertex2d(x1, y1);
    glVertex2d(x2, y2);
    glEnd();

    // Clip the line and draw the clipped portion
    cohenSutherlandClip(x1, y1, x2, y2);

    glFlush();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500); // Define the display area
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Cohen-Sutherland Line Clipping Algorithm");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}