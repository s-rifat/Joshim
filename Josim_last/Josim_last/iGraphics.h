//
//  Original Author: S. M. Shahriar Nirjon
//
//  Last Modified by: Mohammad Saifur Rahman
//  last modified: December 20, 2015
//
//  Version: 2.0.2012.2015
//


# include <stdio.h>
# include <stdlib.h>
#pragma comment(lib, "glut32.lib")
#pragma comment(lib, "glaux.lib")
//#pragma comment(lib, "legacy_stdio_definitions.lib")
#include "glut.h"
#include <time.h>
#include <math.h>
#include <windows.h>
#include "glaux.h"

# define STB_IMAGE_IMPLEMENTATION
# include "stb_image.h"

int iScreenHeight, iScreenWidth;
int iMouseX, iMouseY;
int ifft = 0;
void (*iAnimFunction[10])(void)=
{	0};
int iAnimCount = 0;
int iAnimDelays[10];
int iAnimPause[10];

void iDraw();
void iKeyboard(unsigned char);
void iSpecialKeyboard(unsigned char);
void iMouseMove(int, int);
void iMouse(int button, int state, int x, int y);

static void __stdcall iA0(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[0])
		iAnimFunction[0]();
}
static void __stdcall iA1(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[1])
		iAnimFunction[1]();
}
static void __stdcall iA2(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[2])
		iAnimFunction[2]();
}
static void __stdcall iA3(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[3])
		iAnimFunction[3]();
}
static void __stdcall iA4(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[4])
		iAnimFunction[4]();
}
static void __stdcall iA5(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[5])
		iAnimFunction[5]();
}
static void __stdcall iA6(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[6])
		iAnimFunction[6]();
}
static void __stdcall iA7(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[7])
		iAnimFunction[7]();
}
static void __stdcall iA8(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[8])
		iAnimFunction[8]();
}
static void __stdcall iA9(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[9])
		iAnimFunction[9]();
}
/*............................extended iA........................*/


static void __stdcall iA10(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[10])
		iAnimFunction[10]();
}
static void __stdcall iA11(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[11])
		iAnimFunction[11]();
}
static void __stdcall iA12(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[12])
		iAnimFunction[12]();
}
static void __stdcall iA13(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[13])
		iAnimFunction[13]();
}
static void __stdcall iA14(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[14])
		iAnimFunction[14]();
}
static void __stdcall iA15(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[15])
		iAnimFunction[15]();
}
static void __stdcall iA16(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[16])
		iAnimFunction[16]();
}
static void __stdcall iA17(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[17])
		iAnimFunction[17]();
}
static void __stdcall iA18(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[18])
		iAnimFunction[18]();
}
static void __stdcall iA19(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[19])
		iAnimFunction[19]();
}

static void __stdcall iA20(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[20])
		iAnimFunction[20]();
}
static void __stdcall iA21(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[21])
		iAnimFunction[21]();
}
static void __stdcall iA22(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[22])
		iAnimFunction[22]();
}
static void __stdcall iA23(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[23])
		iAnimFunction[23]();
}
static void __stdcall iA24(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[24])
		iAnimFunction[24]();
}
static void __stdcall iA25(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[25])
		iAnimFunction[25]();
}
static void __stdcall iA26(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[26])
		iAnimFunction[26]();
}
static void __stdcall iA27(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[27])
		iAnimFunction[27]();
}
static void __stdcall iA28(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[28])
		iAnimFunction[28]();
}
static void __stdcall iA29(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[29])
		iAnimFunction[29]();
}


static void __stdcall iA30(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[30])
		iAnimFunction[30]();
}
static void __stdcall iA31(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[31])
		iAnimFunction[31]();
}
static void __stdcall iA32(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[32])
		iAnimFunction[32]();
}
static void __stdcall iA33(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[33])
		iAnimFunction[33]();
}
static void __stdcall iA34(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[34])
		iAnimFunction[34]();
}
static void __stdcall iA35(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[35])
		iAnimFunction[35]();
}
static void __stdcall iA36(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[36])
		iAnimFunction[36]();
}
static void __stdcall iA37(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[37])
		iAnimFunction[37]();
}
static void __stdcall iA38(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[38])
		iAnimFunction[38]();
}
static void __stdcall iA39(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[39])
		iAnimFunction[39]();
}


static void __stdcall iA40(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[40])
		iAnimFunction[40]();
}
static void __stdcall iA41(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[41])
		iAnimFunction[41]();
}
static void __stdcall iA42(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[42])
		iAnimFunction[42]();
}
static void __stdcall iA43(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[43])
		iAnimFunction[43]();
}
static void __stdcall iA44(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[44])
		iAnimFunction[44]();
}
static void __stdcall iA45(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[45])
		iAnimFunction[45]();
}
static void __stdcall iA46(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[46])
		iAnimFunction[46]();
}
static void __stdcall iA47(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[47])
		iAnimFunction[47]();
}
static void __stdcall iA48(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[48])
		iAnimFunction[48]();
}
static void __stdcall iA49(HWND, unsigned int, unsigned int, unsigned long)
{
	if (!iAnimPause[49])
		iAnimFunction[49]();
}


/*...........ISET TIMER................*/
int iSetTimer(int msec, void (*f)(void))
{
	int i = iAnimCount;

	if (iAnimCount >= 50)//10 chilo
	{
		printf("Error: Maximum number of already timer used.\n");
		return -1;
	}

	iAnimFunction[i] = f;
	iAnimDelays[i] = msec;
	iAnimPause[i] = 0;

	if (iAnimCount == 0)
		SetTimer(0, 0, msec, iA0);
	if (iAnimCount == 1)
		SetTimer(0, 0, msec, iA1);
	if (iAnimCount == 2)
		SetTimer(0, 0, msec, iA2);
	if (iAnimCount == 3)
		SetTimer(0, 0, msec, iA3);
	if (iAnimCount == 4)
		SetTimer(0, 0, msec, iA4);

	if (iAnimCount == 5)
		SetTimer(0, 0, msec, iA5);
	if (iAnimCount == 6)
		SetTimer(0, 0, msec, iA6);
	if (iAnimCount == 7)
		SetTimer(0, 0, msec, iA7);
	if (iAnimCount == 8)
		SetTimer(0, 0, msec, iA8);
	if (iAnimCount == 9)
		SetTimer(0, 0, msec, iA9);
	/*...........extended...............*/
	if (iAnimCount == 10)
		SetTimer(0, 0, msec, iA10);
	if (iAnimCount == 11)
		SetTimer(0, 0, msec, iA11);
	if (iAnimCount == 12)
		SetTimer(0, 0, msec, iA12);
	if (iAnimCount == 13)
		SetTimer(0, 0, msec, iA13);
	if (iAnimCount == 14)
		SetTimer(0, 0, msec, iA14);

	if (iAnimCount == 15)
		SetTimer(0, 0, msec, iA15);
	if (iAnimCount == 16)
		SetTimer(0, 0, msec, iA16);
	if (iAnimCount == 17)
		SetTimer(0, 0, msec, iA17);
	if (iAnimCount == 18)
		SetTimer(0, 0, msec, iA18);
	if (iAnimCount == 19)
		SetTimer(0, 0, msec, iA19);

	if (iAnimCount == 20)
		SetTimer(0, 0, msec, iA20);
	if (iAnimCount == 21)
		SetTimer(0, 0, msec, iA21);
	if (iAnimCount == 22)
		SetTimer(0, 0, msec, iA22);
	if (iAnimCount == 23)
		SetTimer(0, 0, msec, iA23);
	if (iAnimCount == 24)
		SetTimer(0, 0, msec, iA24);
	if (iAnimCount == 15)
		SetTimer(0, 0, msec, iA25);
	if (iAnimCount == 16)
		SetTimer(0, 0, msec, iA26);
	if (iAnimCount == 17)
		SetTimer(0, 0, msec, iA27);
	if (iAnimCount == 18)
		SetTimer(0, 0, msec, iA28);
	if (iAnimCount == 19)
		SetTimer(0, 0, msec, iA29);

	if (iAnimCount == 20)
		SetTimer(0, 0, msec, iA30);
	if (iAnimCount == 21)
		SetTimer(0, 0, msec, iA31);
	if (iAnimCount == 22)
		SetTimer(0, 0, msec, iA32);
	if (iAnimCount == 23)
		SetTimer(0, 0, msec, iA33);
	if (iAnimCount == 24)
		SetTimer(0, 0, msec, iA34);
	if (iAnimCount == 35)
		SetTimer(0, 0, msec, iA35);
	if (iAnimCount == 36)
		SetTimer(0, 0, msec, iA36);
	if (iAnimCount == 37)
		SetTimer(0, 0, msec, iA37);
	if (iAnimCount == 38)
		SetTimer(0, 0, msec, iA38);
	if (iAnimCount == 39)
		SetTimer(0, 0, msec, iA39);

	if (iAnimCount == 40)
		SetTimer(0, 0, msec, iA40);
	if (iAnimCount == 41)
		SetTimer(0, 0, msec, iA41);
	if (iAnimCount == 42)
		SetTimer(0, 0, msec, iA42);
	if (iAnimCount == 43)
		SetTimer(0, 0, msec, iA43);
	if (iAnimCount == 44)
		SetTimer(0, 0, msec, iA44);

	if (iAnimCount == 45)
		SetTimer(0, 0, msec, iA45);
	if (iAnimCount == 46)
		SetTimer(0, 0, msec, iA46);
	if (iAnimCount == 47)
		SetTimer(0, 0, msec, iA47);
	if (iAnimCount == 48)
		SetTimer(0, 0, msec, iA48);
	if (iAnimCount == 49)
		SetTimer(0, 0, msec, iA49);
	iAnimCount++;

	return iAnimCount - 1;
}

void iPauseTimer(int index)
{
	if (index >= 0 && index < iAnimCount)
	{
		iAnimPause[index] = 1;
	}
}

void iResumeTimer(int index)
{
	if (index >= 0 && index < iAnimCount)
	{
		iAnimPause[index] = 0;
	}
}

//
// Puts a BMP image on screen
//
// parameters:
//  x - x coordinate
//  y - y coordinate
//  filename - name of the BMP file
//  ignoreColor - A specified color that should not be rendered. If you have an
//                image strip that should be rendered on top of another back
//                ground image, then the background of the image strip should 
//                not get rendered. Use the background color of the image strip
//                in ignoreColor parameter. Then the strip's background does
//                not get rendered. 
//                
//                To disable this feature, put -1 in this parameter
//
void iShowBMP2(int x, int y, char filename[], int ignoreColor)
{
	AUX_RGBImageRec *TextureImage;
	TextureImage = auxDIBImageLoad(filename);

	int i, j;
	int width = TextureImage->sizeX;
	int height = TextureImage->sizeY;
	int nPixels = width * height;
	int *rgPixels = new int[nPixels];



	for (i = 0, j = 0; i < nPixels; i++, j += 3)
	{
		int rgb = 0;
		for (int k = 2; k >= 0; k--)
		{
			rgb = ((rgb << 8) | TextureImage->data[j + k]);
		}

		rgPixels[i] = (rgb == ignoreColor) ? 0 : 255;
		rgPixels[i] = ((rgPixels[i] << 24) | rgb);
	}

	glRasterPos2f(x, y);
	glDrawPixels(width, height, GL_RGBA, GL_UNSIGNED_BYTE, rgPixels);

	delete[] rgPixels;
	free(TextureImage->data);
	free(TextureImage);
}

void iShowBMP(int x, int y, char filename[])
{
	iShowBMP2(x, y, filename, -1 /* ignoreColor */);
}

unsigned int iLoadImage(char filename[])
{
	int width, height, bpp;

	unsigned int texture;

	BYTE* data(0);
	data = stbi_load(filename, &width, &height, &bpp, 4);

	//glEnable(GL_TEXTURE_2D);
	glGenTextures(1, &texture);
	glBindTexture(GL_TEXTURE_2D, texture);
	glTexImage2D(GL_TEXTURE_2D,
		0,
		GL_RGBA,
		width, height,
		0,
		GL_RGBA,
		GL_UNSIGNED_BYTE,
		data);

	stbi_image_free(data);

	return texture;
}

void iShowImage(int x, int y, int width, int height, unsigned int texture)
{

	//unsigned int texture;

	
	//int width, height, bpp;
	/*
	BYTE* data(0);
	data = stbi_load(filename, &width, &height, &bpp, 4);

	
	glGenTextures(1, &texture);
	glBindTexture(GL_TEXTURE_2D, texture);
	glTexImage2D(GL_TEXTURE_2D, 
				 0,
			     GL_RGBA,
				 width, height,
				 0,
				 GL_RGBA,
				 GL_UNSIGNED_BYTE,
				 data);
	
	stbi_image_free(data);

	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	*/

	//width = 100;
	//height = 100;
	glEnable(GL_TEXTURE_2D);
	
	
	
	glBindTexture(GL_TEXTURE_2D, texture);

	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);

	//glPushMatrix();
	//glColor3f(1.0f, 1.0f, 1.0f);

	glBegin(GL_QUADS);

		glTexCoord2f(0, 0);
		glVertex2f(x, y);

		glTexCoord2f(1, 0);
		glVertex2f(x + width, y);
		
		glTexCoord2f(1, -1);
		glVertex2f(x + width, y+height);

		glTexCoord2f(0, -1);
		glVertex2f(x, y + height);

	glEnd();
	//glPopMatrix();

	glDisable(GL_TEXTURE_2D);
	
}



void iGetPixelColor(int cursorX, int cursorY, int rgb[])
{
	GLubyte pixel[3];
	glReadPixels(cursorX, cursorY, 1, 1, GL_RGB, GL_UNSIGNED_BYTE, (void *) pixel);

	rgb[0] = pixel[0];
	rgb[1] = pixel[1];
	rgb[2] = pixel[2];

	//printf("%d %d %d\n",pixel[0],pixel[1],pixel[2]);   
}

void iText(GLdouble x, GLdouble y, char *str, void* font = GLUT_BITMAP_8_BY_13)
{
	glRasterPos3d(x, y, 0);
	int i;
	for (i = 0; str[i]; i++)
	{
		glutBitmapCharacter(font, str[i]); //,GLUT_BITMAP_8_BY_13, GLUT_BITMAP_TIMES_ROMAN_24
	}
}

void iPoint(double x, double y, int size = 0)
{
	int i, j;
	glBegin (GL_POINTS);
	glVertex2f(x, y);
	for (i = x - size; i < x + size; i++)
	{
		for (j = y - size; j < y + size; j++)
		{
			glVertex2f(i, j);
		}
	}
	glEnd();
}

void iLine(double x1, double y1, double x2, double y2)
{
	glBegin (GL_LINE_STRIP);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glEnd();
}

void iFilledPolygon(double x[], double y[], int n)
{
	int i;
	if (n < 3)
		return;
	glBegin (GL_POLYGON);
	for (i = 0; i < n; i++)
	{
		glVertex2f(x[i], y[i]);
	}
	glEnd();
}

void iPolygon(double x[], double y[], int n)
{
	int i;
	if (n < 3)
		return;
	glBegin (GL_LINE_STRIP);
	for (i = 0; i < n; i++)
	{
		glVertex2f(x[i], y[i]);
	}
	glVertex2f(x[0], y[0]);
	glEnd();
}

void iRectangle(double left, double bottom, double dx, double dy)
{
	double x1, y1, x2, y2;

	x1 = left;
	y1 = bottom;
	x2 = x1 + dx;
	y2 = y1 + dy;

	iLine(x1, y1, x2, y1);
	iLine(x2, y1, x2, y2);
	iLine(x2, y2, x1, y2);
	iLine(x1, y2, x1, y1);
}

void iFilledRectangle(double left, double bottom, double dx, double dy)
{
	double xx[4], yy[4];
	double x1, y1, x2, y2;

	x1 = left;
	y1 = bottom;
	x2 = x1 + dx;
	y2 = y1 + dy;

	xx[0] = x1;
	yy[0] = y1;
	xx[1] = x2;
	yy[1] = y1;
	xx[2] = x2;
	yy[2] = y2;
	xx[3] = x1;
	yy[3] = y2;

	iFilledPolygon(xx, yy, 4);
}

void iFilledCircle(double x, double y, double r, int slices = 30)
{
	double t, PI = acos(-1.0), dt, x1, y1, xp, yp;
	dt = 2 * PI / slices;
	xp = x + r;
	yp = y;
	glBegin (GL_POLYGON);
	for (t = 0; t <= 2 * PI; t += dt)
	{
		x1 = x + r * cos(t);
		y1 = y + r * sin(t);

		glVertex2f(xp, yp);
		xp = x1;
		yp = y1;
	}
	glEnd();
}

void iCircle(double x, double y, double r, int slices = 30)
{
	double t, PI = acos(-1.0), dt, x1, y1, xp, yp;
	dt = 2 * PI / slices;
	xp = x + r;
	yp = y;
	for (t = 0; t <= 2 * PI; t += dt)
	{
		x1 = x + r * cos(t);
		y1 = y + r * sin(t);
		iLine(xp, yp, x1, y1);
		xp = x1;
		yp = y1;
	}
}

void iEllipse(double x, double y, double a, double b, int slices = 40)
{
	double t, PI = acos(-1.0), dt, x1, y1, xp, yp;
	dt = 2 * PI / slices;
	xp = x + a;
	yp = y;
	for (t = 0; t <= 2 * PI; t += dt)
	{
		x1 = x + a * cos(t);
		y1 = y + b * sin(t);
		iLine(xp, yp, x1, y1);
		xp = x1;
		yp = y1;
	}
}

void iFilledEllipse(double x, double y, double a, double b, int slices = 40)
{
	double t, PI = acos(-1.0), dt, x1, y1, xp, yp;
	dt = 2 * PI / slices;
	xp = x + a;
	yp = y;
	glBegin (GL_POLYGON);
	for (t = 0; t <= 2 * PI; t += dt)
	{
		x1 = x + a * cos(t);
		y1 = y + b * sin(t);
		glVertex2f(xp, yp);
		xp = x1;
		yp = y1;
	}
	glEnd();
}

//
// Rotates the co-ordinate system
// Parameters:
//  (x, y) - The pivot point for rotation
//  degree - degree of rotation
//
// After calling iRotate(), evrey subsequent rendering will
// happen in rotated fashion. To stop rotation of subsequent rendering,
// call iUnRotate(). Typical call pattern would be:
//      iRotate();
//      Render your objects, that you want rendered as rotated
//      iUnRotate();
//  
void iRotate(double x, double y, double degree)
{
	// push the current matrix stack
	glPushMatrix();

	//
	// The below steps take effect in reverse order
	//

	// step 3: undo the translation
	glTranslatef(x, y, 0.0);

	// step 2: rotate the co-ordinate system across z-axis
	glRotatef(degree, 0, 0, 1.0);

	// step 1: translate the origin to (x, y)
	glTranslatef(-x, -y, 0.0);
}

void iUnRotate()
{
	glPopMatrix();
}

void iSetColor(double r, double g, double b)
{
	double mmx;
	mmx = r;
	if (g > mmx)
		mmx = g;
	if (b > mmx)
		mmx = b;
	mmx = 255;
	if (mmx > 0)
	{
		r /= mmx;
		g /= mmx;
		b /= mmx;
	}
	glColor3f(r, g, b);
}

void iDelay(int sec)
{
	int t1, t2;
	t1 = time(0);
	while (1)
	{
		t2 = time(0);
		if (t2 - t1 >= sec)
			break;
	}
}

void iDelayMS(int msec)
{
	clock_t end;
	end = clock() + msec * CLOCKS_PER_SEC / 1000;
	while (end > clock())
		;
}

void iClear()
{
	glClear (GL_COLOR_BUFFER_BIT);
	glMatrixMode (GL_MODELVIEW);
	glClearColor(0, 0, 0, 0);
	glFlush();
}

void displayFF(void)
{

	iDraw();
	glutSwapBuffers();
}

void animFF(void)
{
	if (ifft == 0)
	{
		ifft = 1;
		iClear();
	}
	glutPostRedisplay();
}

void keyboardHandler1FF(unsigned char key, int x, int y)
{
	iKeyboard(key);
	glutPostRedisplay();
}
void keyboardHandler2FF(int key, int x, int y)
{
	iSpecialKeyboard(key);
	glutPostRedisplay();
}

void mouseMoveHandlerFF(int mx, int my)
{
	iMouseX = mx;
	iMouseY = iScreenHeight - my;
	iMouseMove(iMouseX, iMouseY);

	glFlush();
}

void mouseHandlerFF(int button, int state, int x, int y)
{
	iMouseX = x;
	iMouseY = iScreenHeight - y;

	iMouse(button, state, iMouseX, iMouseY);

	glFlush();
}

void iInitialize(int width = 500, int height = 500, char *title = "iGraphics")
{
	iScreenHeight = height;
	iScreenWidth = width;

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_ALPHA);
	glutInitWindowSize(width, height);
	glutInitWindowPosition(10, 10);
	glutCreateWindow(title);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, width, 0.0, height, -1.0, 1.0);
	//glOrtho(-100.0 , 100.0 , -100.0 , 100.0 , -1.0 , 1.0) ;
	//SetTimer(0, 0, 10, timer_proc);

	

}

void iStart()
{
	iClear();

	glutDisplayFunc(displayFF);
	glutKeyboardFunc(keyboardHandler1FF); //normal
	glutSpecialFunc(keyboardHandler2FF); //special keys
	glutMouseFunc(mouseHandlerFF);
	glutMotionFunc(mouseMoveHandlerFF);
	glutIdleFunc(animFF);

	//
	// Setup Alpha channel testing.
	// If alpha value is greater than 0, then those
	// pixels will be rendered. Otherwise, they would not be rendered
	//
	glAlphaFunc(GL_GREATER, 0.0f);
	glEnable(GL_ALPHA_TEST);
	glutMainLoop();
}