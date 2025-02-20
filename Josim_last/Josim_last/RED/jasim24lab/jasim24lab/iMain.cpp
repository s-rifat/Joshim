#include <iostream>
using namespace std;

#define screenwidth 1000
#define screenheight 600
int mode;

# include "iGraphics.h"
# include "bitmap_loader.h"
# include "homepage.h"
# include "icon.h"
# include "roundchange.h"
# include "description.h"
# include "score.h"
//# include "render.h"
# include "move.h"
#include "music.h"



void joshimReady()
{


	if (joshim.state == 0)
	{
		iShowBMPAlternativeSkipRed(joshim.x, joshim.y, "RED\\j\\s\\1.bmp");
	}

	if (joshim.state == 1)
		joshim_walk_render();

	if (joshim.state == 2)
		joshim_punch_render();

	if (joshim.state == 3)
		joshim_kick_render();

	if (joshim.state == 5)
		joshim_jump_render();

}

/*................Dipjpl....................*/
void dipjolReady()
{


	if (dipjol.state == 0)
	{
		iShowBMPAlternativeSkipRed(dipjol.x, dipjol.y, "RED\\d\\s\\1.bmp");
	}

	if (dipjol.state == 1)
		dipjol_walk_render();

	if (dipjol.state == 2)
		dipjol_punch_render();

	if (dipjol.state == 3)
		dipjol_kick_render();

	if (dipjol.state == 5)
		dipjol_jump_render();

}
/*
function iDraw() is called again and again by the system.
*/

void iDraw()
{
	iClear();

	home(); //to show 
	icon();	
	if (khela_suru_screen && !khela_shes_screen)
	{
		joshimReady();
		dipjolReady();
		//moves_joshim();
		//moves_dipjol();
	}

	if (cr1 == true){
		//iLine(0, 400, 100, 400);
		iShowImage(0, 0, screenwidth, screenheight, charBC1);
		iShowImage(back_x, back_y, 150, 50, backicon);//back icon
	}
	
	if (cr2 == true)
	{
		iShowImage(0, 0, screenwidth, screenheight, charBC2);
		iShowImage(back_x, back_y, 150, 50, backicon);//back icon
	}
		
	if (cr3 == true)
	{
		iShowImage(0, 0, screenwidth, screenheight, charBC3);
		iShowImage(back_x, back_y, 150, 50, backicon);//back icon

	}
		
   // description();

	//home icon
	iShowImage(home_x, home_y, 50, 50, homeicon);//home iconiShowImage(back_x, back_y, 150, 50, backicon);//back icon


}

/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here

		if (startscreen)
		{
			if (mx >= 100 && mx <= 250)
			{
				if (my >= 400 && my <= 450)
				{
					changeboolValue_ofBC(false, true, false, false, false, false, false);
					creatFile();// to creat a file .bin
				}
			}
		}


		/*------------HOME BUTTON-------------------*/

		if (mx <= 50 && my <= 50)
		{
			cr1 = false;
			cr2 = false;
			cr3 = false;
			changeboolValue_ofBC(true, false, false, false, false, false, false);
			
		}



		/*------------------------- MENU SCREEN START---------------------------*/
		if (menuscreen)
		{
			if (mx >= icon_x && mx <= icon_x + icon_length)
			{

				/*------------------khela suru------------------------*/
				if (my >= khela_suru_Y && my <= khela_suru_Y + icon_height)
				{
					changeboolValue_ofBC(false, false, true, false, false, false, false);
					//characterpage = true;
				}

				/*------------------kemne khelmu------------------------*/

				if (my >= kemne_khelmu_y && my <= kemne_khelmu_y + icon_height)
				{
					changeboolValue_ofBC(false, false, false, true, false, false, false);
				}

				/*------------------Score page------------------------*/

				if (my >= score_y && my <= score_y + icon_height)
				{
					changeboolValue_ofBC(false, false, false, false, true, false, false);
				}

				/*------------------Amago chenos------------------------*/

				if (my >= amago_chinos_y && my <= amago_chinos_y + icon_height)
				{
					changeboolValue_ofBC(false, false, false, false, false, true, false);
				}
			}
		}




		/*........................... Kemne khelmu screen option................................*/

		if (kemne_khelmu_screen)
		{
			/*.........character 1 description.........*/
			if (mx >= 200 && mx <= 200 + 100)
			{
				if (my >= 310 && my <= 410)
				{
					//mode = 1;
					cr1 = true;
					//cr(true, false, false, false);
					cout << "cr1 = " << cr1 << " .cr2 = " << cr2 << " .cr3 = " << cr3 << endl;
				}

			}
			/*.........character 2 description.........*/
			if (mx >= 450 && mx <= 450 + 100)
			{
				if (my >= 310 && my <= 410)
				{
					//mode = 2;
					cr1 = false;
					cr2 = true;
					//cr(false, true, false, false);
					cout << "cr1 = " << cr1 << " .cr2 = " << cr2 << " .cr3 = " << cr3 << endl;
				}
			}
			/*.........character 3 description.........*/
			if (mx >= 700 && mx <= 700 + 100)
			{
				if (my >= 310 && my <= 410)
				{
					//mode = 3;
					cr2 = false;
					cr3 = true;
					//cr(false, false, true, false);
					cout << "cr1 = " << cr1 << " .cr2 = " << cr2 << " .cr3 = " << cr3 << endl;
				}
			}
		}


		/*--------------------------------- MENU SCREEN END---------------------------------------*/



		/*.....................................BACK OPERATION CODE start...................................*/

		if (!startscreen && !khela_suru_screen)
		{

			if (menuscreen)
			{
				if (mx >= back_x && mx <= back_x + 150)
				if (my >= back_y && my <= back_y + 50)
					changeboolValue_ofBC(true, false, false, false, false, false, false);
			}

			else if (scorescreen || kemne_khelmu_screen || amagochenos_screen)
			{
				if (mx >= back_x && mx <= back_x + 150)
				if (my >= back_y && my <= back_y + 50)
				{
					changeboolValue_ofBC(false, true, false, false, false, false, false);
					if (kemne_khelmu_screen) mode = 1;
				}
					
			}
		 if (cr1 || cr2|| cr3)
			{
				if (mx >= back_x && mx <= back_x + 150)
				if (my >= back_y && my <= back_y + 50)
				{
					//mode == 9;
					
					if (cr1)
					cr1 = false;
					if (cr2)
					cr2 = false;
					if (cr3)
					cr3 = false;
					mode = 1;
					
					
				}

			}
		}

		/*------------------------------------ Back operation end--------------------------------------------*/


		/*--------------------------------------------exit operation------------------------------------------*/

		if (!khela_suru_screen)
		{
			if (mx >= exit_x && mx <= exit_x + 50)
			if (my >= exit_y && my <= exit_y + 50)
				exit(0);
		}
	}

		if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
		{
			//place your codes here
		}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/

void iKeyboard(unsigned char key)
{


	if (key == 'f' && joshim.state != 5)
	{
		joshim.state = 2;
	}


	if (key == 'e' && joshim.state != 5)
	{
		joshim.state = 3;

	}

	if (key == 'w')
	{
		joshim.state = 5;

	}
	if (key == 'd')
	{
		joshim.x = joshim.x + joshim.dx;
		if (joshim.state != 5)
			joshim.state = 1;

		if ((joshim.x + 150) > dipjol.x)
			joshim.x = dipjol.x - 150;

	}
	if (key == 'a')
	{
		joshim.x = joshim.x - joshim.dx;

		if (joshim.state != 5)
			joshim.state = 1;

		if (joshim.x < -190)
			joshim.x = -150;

	}


}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{



	if (key == GLUT_KEY_END)
	{
		exit(0);
	}

	if (key == GLUT_KEY_RIGHT)
	{
		dipjol.x = dipjol.x + dipjol.dx;
		if (dipjol.state != 5)
			dipjol.state = 1;


		if (dipjol.x > 700)
			dipjol.x = 700;


	}

	if (key == GLUT_KEY_LEFT)
	{
		dipjol.x = dipjol.x - dipjol.dx;

		if (dipjol.state != 5)
			dipjol.state = 1;


		if (dipjol.x   < (joshim.x + 150))
			dipjol.x = joshim.x + 150;


	}

	if (key == GLUT_KEY_UP)
	{
		dipjol.state = 5;

	}




	/// DIPJOL KICK AND PUNCH


	if (key == GLUT_KEY_INSERT && dipjol.state != 5)
	{
		dipjol.state = 2;  // punch
	}
	if (key == GLUT_KEY_HOME && dipjol.state != 5)
	{
		dipjol.state = 3; // kick
	}


	//place your codes for other keys here


	if (key == GLUT_KEY_F1)
	{
		round1 = true;
	}

	if (key == GLUT_KEY_F2)
	{
		round1 = false;
		round2 = true;
	}

	if (key == GLUT_KEY_F3)
	{
		round2 = false;
		round3 = true;
	}

	if (key == GLUT_KEY_F4)
	{
		round3 = false;
		khela_shes_screen = true;
	}
}


void joshim_change()
{
	if (joshim.state == 1)
		joshim_walk();
	if (joshim.state == 2)
		joshim_punch();
	if (joshim.state == 3)
		joshim_kick();
	if (joshim.state == 5)
		joshim_jump();
}

/*******************dipjol change*********************/

void dipjol_change()
{
	if (dipjol.state == 1)
		dipjol_walk();
	if (dipjol.state == 2)
		dipjol_punch();
	if (dipjol.state == 3)
		dipjol_kick();
	if (dipjol.state == 5)
		dipjol_jump();
}




int main()
{
	//place your own initialization codes here.


	//iSetTimer(100, change);
	iSetTimer(100, joshim_change);
	iSetTimer(100, dipjol_change);

	//music on
	if (music_on)
		PlaySound("m.wav", NULL, SND_ALIAS | SND_ASYNC);


	iInitialize(screenwidth, screenheight, "jasim");

	// loading images.
	/* iLoadImage() will return an interger type id
	   for each image you load.
	*/

	loadHomeImage();
	loadIcon();
	charload();

	iStart(); // it will start drawing

	return 0;
}

