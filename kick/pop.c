#include <stdio.h>
#include <GL/glut.h>
#include <math.h>

#define PI 3.1415926

static GLfloat g1 = 9.80 , g2 = 20.0 , g3 = 6.0,angs=0.0;
static GLfloat place_x = 40.0;
static GLfloat place_y = 40.0;
float vy2 = 0.0;
float vx2 = -6.0;
double dt = 0.01;
double ang,arc;
double x,y;
int r1,r2,r3;
float e = 0.7;

struct Ball {
    float vy;
    float vx;
    GLfloat iti_x;
    GLfloat iti_y;
};

struct Ball ball[4] = {
    0.0,0.0,30,40,
    0.0,0.0,-30,40,
    0.0,0.0,0.0,-45,
    0.0,0.0,0.0,40,
};

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);


    //線
    glColor3f(178,34,34);
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex2d(-50,-48);
    glVertex2d(50,-48);

    glEnd();
    glPopMatrix();


    //落ちてくるボール１
    glColor3f(0.0,1.0,1.0);
    glPushMatrix();
    glRotatef(angs,0.0,0.0,1.0);
    glTranslatef(ball[0].iti_x,ball[0].iti_y,0.0);
    for(arc=0;arc<=3600;arc++){
        ang = PI*arc/1800.0;
        glBegin(GL_LINE_LOOP);
        x = 4*cos(ang);
        y = 4*sin(ang);
        glVertex2d(x, y);
	glVertex2d(0.0,0.0);
    }
    glEnd();
    glPopMatrix();

    //落ちてくるボール２
    glColor3f(10.0,0.0,1.0);
    glPushMatrix();
    glRotatef(angs,0.0,0.0,1.0);
    glTranslatef(ball[1].iti_x,ball[1].iti_y,0.0);
    for(arc=0;arc<=3600;arc++){
        ang = PI*arc/1800.0;
        glBegin(GL_LINE_LOOP);
        x = 4*cos(ang);
        y = 4*sin(ang);
        glVertex2d(x, y);
	glVertex2d(0,0);
    }
    glEnd();
    glPopMatrix();

    //落ちてくるボール３
    glColor3f(1.0,0.0,0.0);
    glPushMatrix();
    glRotatef(angs,0.0,0.0,1.0);
    glTranslatef(ball[3].iti_x,ball[3].iti_y,0.0);
    for(arc=0;arc<=3600;arc++){
        ang = PI*arc/1800.0;
        glBegin(GL_LINE_LOOP);
        x = 4*cos(ang);
        y = 4*sin(ang);
        glVertex2d(x, y);
	glVertex2d(0,0);
    }
    glEnd();
    glPopMatrix();
    

    //落ちてくるボール４
   /* glColor3f(1.0,1.0,1.0);
    glPushMatrix();
    glTranslatef(ball[3].iti_x,ball[3].iti_y,0.0);
    for(arc=0;arc<=360;arc+=10){
        ang = PI*arc/180.0;
        glBegin(GL_LINE_LOOP);
        x = 4*cos(ang);
        y = 4*sin(ang);
        glVertex2d(x, y);
    }
    glEnd();
    glPopMatrix();*/


    //的
    glColor3f(0.0,1.0,0.0);
    glPushMatrix();
    glTranslatef(ball[2].iti_x,ball[2].iti_y,0.0);
    for(arc=0;arc<=360;arc+=10){
        ang = PI*arc/180.0;
        glBegin(GL_LINE_LOOP);
        x = 2*cos(ang);
        y = 2*sin(ang);
        glVertex2d(x, y);
    }
    glEnd();
    glPopMatrix();




    glutSwapBuffers();
}
void simu(void)
{
    ball[0].iti_y += ball[0].vy*dt+(-g1)*dt*dt/2;
    ball[1].iti_y += ball[1].vy*dt+(-g2)*dt*dt/2;
    ball[3].iti_y += ball[3].vy*dt+(-g3)*dt*dt/2;
    ball[0].vy += (-g1)*dt;
    ball[1].vy += (-g2)*dt;
    ball[3].vy += (-g3)*dt;
    if(ball[0].iti_y <= -45.5 ){
            exit(0);
        }
        
    
    if(ball[1].iti_y <= -45.5 ){
	    exit(0);
          }

    if(ball[3].iti_y <= -45.5){
	    exit(0);
    }
    

    if(sqrt((ball[2].iti_x-ball[0].iti_x)*(ball[2].iti_x-ball[0].iti_x)+(ball[2].iti_y-ball[0].iti_y)*(ball[2].iti_y-ball[0].iti_y)) <= 6){
	    r1 = rand()%80+1;
        ball[0].iti_y = 40;
	ball[0].iti_x = r1-40;
       ball[0].vy = 0; 
    }
    
    if(sqrt((ball[2].iti_x-ball[1].iti_x)*(ball[2].iti_x-ball[1].iti_x)+(ball[2].iti_y-ball[1].iti_y)*(ball[2].iti_y-ball[1].iti_y)) <= 6){
	    r2 = rand()%80+1;
        ball[1].iti_y = 40;
	ball[1].iti_x = r2-40;
       ball[1].vy = 0; 
    }

     if(sqrt((ball[2].iti_x-ball[3].iti_x)*(ball[2].iti_x-ball[3].iti_x)+(ball[2].iti_y-ball[3].iti_y)*(ball[2].iti_y-ball[3].iti_y)) <= 6){
            r3 = rand()%80+1;
        ball[3].iti_y = 40;
        ball[3].iti_x = r2-40;
       ball[3].vy = 0;
    }


    glutPostRedisplay();
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void reshape(int w, int h)
{
    glViewport( 0, 0, w, h );
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void mouse(int button, int state, int x, int y){
    switch (button) {
        case GLUT_LEFT_BUTTON:
            if ( state == GLUT_DOWN)
                glutIdleFunc(simu);
            break;
        case GLUT_RIGHT_BUTTON:
            if ( state == GLUT_DOWN)
                glutIdleFunc(NULL);
            break;
        default:
            break;
    }
}

void keyboard(unsigned char key, int x, int y)
{
    switch(key){
        case 'k':
            ball[2].iti_x += 2;
	    if(ball[2].iti_x >= 50){
		    ball[2].iti_x = 50;
	    }
            break;
        case 'h':
            ball[2].iti_x -= 2;
            if(ball[2].iti_x <= -50){
		    ball[3].iti_x = 50;
	    }

    if ( key == '\x1b') exit(0);
}
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA| GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition(550,250);
    glutCreateWindow(argv[0]);
    init();
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
