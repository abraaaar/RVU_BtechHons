#include <GL/glut.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_STRIP);
        glVertex2f(-0.5, -0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(0.5, 0.5);
    glEnd();

    int main(int argc, chat **argv){
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_RGB);
        glutCreateWindow("Cube");
        glutDisplayFunc(display);
        glutMainLoop();
        return 0;
   }

   glclear(GL_COLOR_BUFFER_BIT) glbegin(GL_LINE_STRIP) glvertex2f(3,3) glend() glflush() intmain(intargc,char**argv)glutinit( ) glutdisplayfunc(displaY) glut beginloop reut