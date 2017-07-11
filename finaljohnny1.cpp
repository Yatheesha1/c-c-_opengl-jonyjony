#include<GL/glut.h>
#include<unistd.h>
#include <thread>
#include<math.h>

const char *st[]={"SAHYADRI COLLEGE OF ENGINEERING AND MANAGEMENT",
	                 "Department of Computer Science",
	                 "VTU MINI PROJECT",
	                 "JOHNNY..JOHHNY... RHYMES",
	                 "PROJECT MEMEBERS",
	                 "1.JEEVAN T B(4SF14CS059)",
	                 "2.ABHISHEK S(4SF14CS005)",
	                 "PROJECT GUIDE",
	                 "1.Prof.Mamtha shetty Gopal",
	                 "2.Prof.Sadhana Rai"};
int seq=0;
void key(unsigned char ,int,int);
void circle();
void display();
void movehand();
void mouth1();
void mouth();
float y,z;
float a;
void display();

void Printtext(float r,float g,float b,const char *string,int x,int y)
{
	glColor3f(r,g,b);
	glRasterPos2f(x,y);
    while(*string)
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, *string++);   
}

void start()
{	                 
   Printtext(.9,.5,.5,"WELCOME",-10,70);  
   Printtext(.9,.5,.5,st[0],-40,60);
   Printtext(.9,.5,.5,st[1],-28,50);
   Printtext(.9,.5,.5,st[2],-16,10);
   Printtext(.9,.5,.5,st[3],-23,0);
   Printtext(.9,.5,.5,st[4],-90,-40);
   Printtext(.9,.5,.5,st[5],-90,-50);
   Printtext(.9,.5,.5,st[6],-90,-60);
   Printtext(.9,.5,.5,st[7],50,-40);
   Printtext(.9,.5,.5,st[8],50,-50);
   Printtext(.9,.5,.5,st[9],50,-60);
   glutPostRedisplay();
   glutSwapBuffers();
}

void init()
{
	gluOrtho2D(-100,100,-100,100);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(0,1,0,0);
}
void clockline()
{
	glLineWidth(2);
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2f(80,80);
	glVertex2f(85,80);
	glEnd();
	glLineWidth(2);
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2f(80,80);
	glVertex2f(80,90);
	glEnd();
	
}
void mouth()
{       
	glPushMatrix();
        glTranslatef(0,y,0);
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(18,11.5);
	glVertex2f(19,10.5);
	glVertex2f(18,11);
	glEnd();
	glPopMatrix();
        glPushMatrix();
        glTranslatef(0,z,0);
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(18,10);
	glVertex2f(19,10.5);
	glVertex2f(18,10.75);
	glEnd();
        glPopMatrix();
	
}
void mouth1()
{
	glPushMatrix();
        glTranslatef(0,-y,0);
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(-51,45);
	glVertex2f(-52,44);
	glVertex2f(-51,44);
	glEnd();
        glPopMatrix();
        
	glPushMatrix();
        glTranslatef(0,-z,0);
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(-51,43);
	glVertex2f(-52,44);
	glVertex2f(-51,44);
	glEnd();
	glPopMatrix();
	
}
void circle()
{
	int j;
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(j=0;j<360;j++)
	{
		float theta=2.0f*3.145*(float)j/(float)360;
		float x=15*cos(theta);
		float y=15*sin(theta);
		glVertex2f(x+80,y+80);
	}
	glEnd();
	glColor3f(0.0,0,1.0);
	glBegin(GL_POLYGON);
	for(j=0;j<360;j++)
	{
		float theta=2.0f*3.145*(float)j/(float)360;
		float x=14*cos(theta);
		float y=14*sin(theta);
		glVertex2f(x+80,y+80);
	}
	clockline();
	glEnd();
}

void child()
{
	
	glColor3f(0.98,0.89,0.535);//face
	glBegin(GL_POLYGON);
	glVertex2f(22,4);
	glVertex2f(21,8);
	glVertex2f(20,8);
	glVertex2f(18,10);
	glVertex2f(21,13);
	glVertex2f(18,13);
	glVertex2f(18,14);
	glVertex2f(17,14);
	glVertex2f(17.5,14.5);
	glVertex2f(16,15);
	glVertex2f(20,20);
	glVertex2f(30,20);
	glVertex2f(30,8);
	glVertex2f(28,7);
	glVertex2f(28,5);
	glEnd();
	
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(20,20);
	glVertex2f(28.5,18);
	glVertex2f(27,15);
	glVertex2f(30,20);
	glVertex2f(30,15);
	glVertex2f(32,14);
	glVertex2f(34,15);
	glVertex2f(22,25);
	glVertex2f(20,23);
	glEnd();

	glPointSize(3.5);
	glColor3f(0,0,0);
	glBegin(GL_POINTS);
	glVertex2f(19,16.5);
	glEnd();

	glColor3f(0,0.969,0.996);//shirt
	glBegin(GL_POLYGON);
	glVertex2f(21,3.5);
	glVertex2f(28,5);
	glVertex2f(29,-25);
	glVertex2f(17,-25);
	glVertex2f(20,0);
	glVertex2f(21,1);
	glEnd();
	
	glColor3f(0,0.969,0.996);//shirt	
	glBegin(GL_TRIANGLES);	
	glVertex2f(23,2);
	glVertex2f(31,-10);
	glVertex2f(27,-12);
	glEnd();	
	
	glLineWidth(0.5);
	glColor3f(0,0,0);//handblack
	glBegin(GL_LINE_LOOP);
	glVertex2f(23,2);
	glVertex2f(27,-12);
	glVertex2f(31,-10);
	glEnd();

	glColor3f(0.98,0.89,0.535);//hand
	glBegin(GL_POLYGON);
	glVertex2f(27.5,-11.5);
	glVertex2f(28,-13.5);
	glVertex2f(19,-19);
	glVertex2f(20,-21.5);
	glVertex2f(22.5,-21.5);
	glVertex2f(22,-19.5);
	glVertex2f(32,-15);
	glVertex2f(31,-10.5);
	glEnd();
		
	glColor3f(0.98,0.89,0.535);//leg1
	glBegin(GL_POLYGON);
	glVertex2f(21.5,-40);
	glVertex2f(26,-40);
	glVertex2f(26.5,-50);
	glVertex2f(23,-50);
	glEnd();

	glColor3f(1,1,1);//sock
	glBegin(GL_POLYGON);
	glVertex2f(23,-50);
	glVertex2f(26.5,-50);
	glVertex2f(27,-59);
	glVertex2f(18,-60);
	glVertex2f(17.5,-59.5);
	glVertex2f(17.5,-58);
	glVertex2f(21,-58);
	glVertex2f(23,-57);
	glVertex2f(23,-50);
	glEnd();
	
	glColor3f(1,0,0);//short
	glBegin(GL_POLYGON);
	glVertex2f(18,-25);
	glVertex2f(20,-40);
	glVertex2f(26,-40);
	glVertex2f(28,-25);
	glEnd();
	
	glPointSize(6);//suger
	glColor3f(1,1,1);
	glBegin(GL_POINTS);
	glVertex2f(17,10);
	glVertex2f(19,-18);
	glEnd();
	
}

void movehand()
{               
	glPushMatrix();
    glTranslatef(0,a,0);
	glColor3f(0.957,0.988,0.023);//move hand
	glBegin(GL_POLYGON);
	glVertex2f(-45,20);
	glVertex2f(-40,18);
	glVertex2f(-26,30);
	glVertex2f(-29,34);
	glEnd();
	
	glColor3f(0.98,0.89,0.535);
	glBegin(GL_POLYGON);
	glVertex2f(-29,34);
	glVertex2f(-23.5,39.5);
	glVertex2f(-23,38.5);
	glVertex2f(-25,35);
	glVertex2f(-24,35);
	glVertex2f(-24,34);
	glVertex2f(-23,33.5);
	glVertex2f(-26,30);
	glEnd();
    glPopMatrix();
	
}

void room()
{
    glColor3f(0.7,0.4,0.1);//floor
	glBegin(GL_POLYGON);
	glVertex2f(-100,-80);
	glColor3f(0.5,0.2,0.1);
	glVertex2f(-50,-30);
	glColor3f(0.7,0.4,0.1);
	glVertex2f(100,-40);
	glVertex2f(100,-100);
	glVertex2f(-100,-100);
	glVertex2f(-100,-80);
	glEnd();
	
	glColor3f(0.0,0.6,0.6);//left wall
	glBegin(GL_POLYGON);
	glVertex2f(-100,-80);
	glColor3f(0.0,0.3,0.3);
	glVertex2f(-50,-30);
	glVertex2f(-53,70);
	glColor3f(0.0,0.6,0.6);
	glVertex2f(-100,100);
	glVertex2f(-100,-80);
	glEnd();
	
	glColor3f(0.0,0.6,0.6);//right wall
	glBegin(GL_POLYGON);
	glVertex2f(100,-40);
	glColor3f(0.0,0.3,0.3);
	glVertex2f(-50,-30);
	glVertex2f(-53,70);
	glColor3f(0.0,0.6,0.6);
	glVertex2f(100,90);
	glVertex2f(100,-40);
	glEnd();
	
	glLineWidth(0.5);//wall edge
    glColor3f(0.0,0.2,0.3);
	glBegin(GL_LINES);
	glVertex2f(-50,-30);
    glVertex2f(-53,70);
    glEnd();
	
	glColor3f(0.9,0.9,0.9);//ceiling
	glBegin(GL_POLYGON);
	glVertex2f(-100,100);
	glColor3f(0.7,0.7,0.7);
	glVertex2f(-53,70);
	glColor3f(0.9,0.9,0.9);
	glVertex2f(100,90);
	glVertex2f(100,100);
	glVertex2f(-100,100);
	glEnd();
}

void father()
{
	glColor3f(0.648,0.32,0.269);
	glBegin(GL_POLYGON);//trosure
	glVertex2f(-55,0);
	glVertex2f(-64,-54);
	glVertex2f(-72,-54);
	glVertex2f(-80,0);
	glEnd();

	glColor3f(0.015,0.015,0);//belt
	glBegin(GL_POLYGON);	
	glVertex2f(-54,3);
	glVertex2f(-81,3);
	glVertex2f(-81,0);
	glVertex2f(-54,0);
	glEnd();

	glColor3f(0.98,0.89,0.535);//face
	glBegin(GL_POLYGON);	
	glVertex2f(-58,42);
	glVertex2f(-61,55);
	glVertex2f(-50,55);
	glVertex2f(-50,55);
	glVertex2f(-47,49);
	glVertex2f(-50,45);
	glVertex2f(-53,45);
	glVertex2f(-51,44);
	glVertex2f(-54,44);
	glVertex2f(-54,41);
	glEnd();

	glColor3f(0.957,0.988,0.023);//body
	glBegin(GL_POLYGON);
	glVertex2f(-80,3);
	glVertex2f(-58,40);
	glVertex2f(-61,43);
	glVertex2f(-54,40);
	glVertex2f(-53,7);
	glVertex2f(-54,3);
	glEnd();
	glPushMatrix();
        glTranslatef(0,a,0);
	glColor3f(0.957,0.988,0.023);//hand
	glBegin(GL_POLYGON);
	glVertex2f(-57,35);
	glVertex2f(-63,28);
	glVertex2f(-40,17);
	glVertex2f(-41,24);
	glEnd();
        glPopMatrix();
        glLineWidth(0.5);
        glColor3f(0.015,0.015,0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-57,31);
        glVertex2f(-60,28);
        glVertex2f(-59,24);
        glVertex2f(-59,20);
	glEnd();

	movehand();
	
	glColor3f(0,0,0);//hair
	glBegin(GL_POLYGON);
	glVertex2f(-60,50);
	glVertex2f(-63,57);
	glVertex2f(-49,57);
	glVertex2f(-50,55);
	glEnd();	
	
	glLineWidth(1.5);//eyebro
	glColor3f(0,0,0);
	glBegin(GL_LINE_STRIP);
	glVertex2f(-50,54);
        glVertex2f(-50,53);
	glVertex2f(-52,52);
	glEnd();
	
	glPointSize(4.5);//eye
	glColor3f(0,0,0);
	glBegin(GL_POINTS);
	glVertex2f(-50,51);
	glEnd();

	glColor3f (0.289,0.176,0.004);//shoe
	glBegin(GL_POLYGON);
	glVertex2f(-71,-60);
	glVertex2f(-71,-54);
	glVertex2f(-64,-54);
	glVertex2f(-60,-55);
	glVertex2f(-53,-58);
	glVertex2f(-55,-60);
	glEnd();
	
}

void spin()
{
  if(a>2)
   a=0;
  else
   a=a+0.05;
  if(y>1)
    y=0;
  else
    y=y+0.05;
  if(z>-1)
    z=0;
  else
    z=z-0.05;
}

void display()
{        
	glClear(GL_COLOR_BUFFER_BIT);	
    if(seq==0)
    {
	  start();
      seq=1;
      sleep(5);
    }
    if(seq==1)
    {
      room();
      glPushMatrix();
      glTranslatef(-60,-10,0);
      glScaled(0.8,0.8,0.8);
      circle();
      glPopMatrix();
      
      glPushMatrix();
      glTranslatef(10,0,0);
      glScaled(0.8,0.8,0.8);
      father();
      mouth1();
      glPopMatrix();
      
	  glPushMatrix();
	  glTranslatef(0,a,0);
	  glScaled(0.8,0.8,0.8);
	  child();
	  mouth();
	  glPopMatrix();
    }
	glutPostRedisplay();
    glutSwapBuffers();
}

void thread_method() 
{
	sleep(6);
    system("aplay johnny.wav");
    exit(0);
}
void plot()
{
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(1100.0,700.0);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Johnny");
    init();
    glutDisplayFunc(display);
    glutIdleFunc(spin);
	glutMainLoop();

}


int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	std::thread t2(plot);
	std::thread t1(thread_method);
	t2.join();
	t1.join();
}
