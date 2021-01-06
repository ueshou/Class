#include<stdio.h>
#include <GL/glut.h>
#include<math.h>

#define PI 3.14159
void display(void)
{ 
	double x,y,d=0;
	double r = 0.8 ;
	glVertex2d(0,0);
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_LINE_LOOP);
  for(d=20;d<340;d++){
	  x = r * cos(d*PI/180);
	  y = r * sin(d*PI/180);
  glVertex2d(x , y);

}
glVertex2d(0,0);

  glEnd();
  glFlush();
	
}



void init(void)
{
  glClearColor(0.0, 0.0, 1.0, 1.0);
}

int main(int argc, char *argv[])
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGBA);
  glutCreateWindow(argv[0]);
  glutDisplayFunc(display);
  init();
  glutMainLoop();
  return 0;
}
