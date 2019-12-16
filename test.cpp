#include <GL/gl.h>
#include <GL/glut.h>


void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);

glColor3f(0.0, 1.0, 0.0);//(R,G,B)

//Draw a triangle using line.

  glBegin(GL_LINES);
//glBegin(GL_LINE_STRIP);
//glBegin(GL_LINE_LOOP);


    glVertex3i(25, 70, 0);
    glVertex3i(275, 70, 0);


    //glVertex3i(25, 70, 0);
    glVertex3i(150, 200, 0);
    glVertex3i(275, 70, 0);

    //glVertex3i(150, 130,0);
    glVertex3i(150, 200, 0);
    glVertex3i(25, 70, 0);

glEnd();

int gd ;
int DETECT;
int gm;
gd=DETECT;

    // initgraph initializes the graphics system
    // by loading a graphics driver from disk
    initgraph(&gd, &gm, "");

    // line for x1, y1, x2, y2
    line(150, 150, 450, 150);

    // line for x1, y1, x2, y2
    line(150, 200, 450, 200);

    // line for x1, y1, x2, y2
    line(150, 250, 450, 250);



/*{

 int d=DETECT,m;
 initgraph(&d,&m,"c:\\tc\\bgi");
for(int x=1,y=10;x<=10000;x++)
{
 putpixel(x,y,white);
}/*




/*
glBegin(GL_POLYGON);


    glVertex3i(25, 70, 0);
    glVertex3i(275, 70, 0);
    glVertex3i(150, 200, 0);
    //glVertex3i(25,200,0);


glEnd();
*/
glFlush();
}
void init(void)
{
/* select clearing (background) color */
glClearColor(0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 300.0, 0, 300.0);
//glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with “hello”
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(300, 300);
glutInitWindowPosition(300, 100);
glutCreateWindow("hello");
init();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

