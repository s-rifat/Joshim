#ifndef HEADER_H_HEADERICON
#define HEADER_H_HEADERICON

int homeicon, exiticon, backicon, startpageicon;


int icon_x = 655;
int icon_length = 316;
int icon_height = 62;


//for control icon
int khela_suru_Y = 456; //y position of play button 
int exit_x = 950;// x position of exit button
int exit_y = 0;// y position of exit button
int score_y = 261;// y position of score button
int kemne_khelmu_y = 361;// y position of description button(  KEMNE KHELMU)
int amago_chinos_y = 164;
int home_x = 0;// x position of home button
int home_y = 0;// y position of home button

int back_x = 0;
int back_y = 550;
int start_x = 150;
int start_y = 550;






void icon()
{
	if (!khela_suru_screen)
	{
		iShowImage(exit_x, exit_y, 50, 50, exiticon);//exit icon
		//iShowImage(start_x, start_y, 150, 50, startpage);//start icon
	}

	else
	{
		iShowImage(home_x, home_y, 50, 50, homeicon);//home icon
		//iShowImage(start_x, start_y, 150, 50, startpage);//start icon
	}

	if (!startscreen && !khela_suru_screen) 
	{
		iShowImage(back_x, back_y, 150, 50, backicon);//back icon
	}	
	//iShowImage(home_x, home_y, 50, 50, homeicon);//home iconiShowImage(back_x, back_y, 150, 50, backicon);//back icon

}




// for loading icon
void loadIcon()
{
	/*
	iLoadImage() will return an interger type id for each image you load.
	*/
	exiticon = iLoadImage("ICON\\exit4.png");//exit icon
	homeicon = iLoadImage("ICON\\home3.png");//home icon
	backicon = iLoadImage("ICON\\back4.png");//back icon
	//startpage = iLoadImage("ICON\\start2.png");//start icon
}











#endif