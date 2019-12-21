#ifndef HEADER_H_HEADER_HUMEPAGE  //in this header file all png and jpg immage should be loded  and control the pages 
#define HEADER_H_HEADER_HUMEPAGE // game round pages control by 

void playBackground();//control play screen background
void description();
void score();//score show
void start();//stare iText
void creatFile();


int start1, menu, scoreBC, descriptionBC, amago_chenos, roundBC1, roundBC2, roundBC3, gameover;
int charBC1, charBC2, charBC3;

/*....................... CHARACTER VARIABLE..........................*/
int chr1, chr2, chr3;

bool startscreen = true;
bool menuscreen = false;
bool khela_suru_screen = false;
bool kemne_khelmu_screen = false;
bool scorescreen = false;
bool amagochenos_screen = false;
bool khela_shes_screen = false;


void changeboolValue_ofBC(bool a, bool b, bool c, bool d, bool e, bool f, bool g)
{
	startscreen = a;
	menuscreen = b;
	khela_suru_screen = c;
	kemne_khelmu_screen = d;
	scorescreen = e;
	amagochenos_screen = f;
	khela_shes_screen = g;
}





void home()
{

	if (startscreen)
	{
		iShowImage(0, 0, screenwidth, screenheight, start1);// start
		start();// text massage
	}

	if (menuscreen)
	{
		iShowImage(0, 0, screenwidth, screenheight, menu);// menu
	}

	if (khela_suru_screen)
	{
		playBackground();
		description();
	}

	if (scorescreen)
	{
		iShowImage(0, 0, screenwidth, screenheight, scoreBC);//score board
		//score();//to show score
	}
	if (kemne_khelmu_screen)
	{
		iShowImage(0, 0, screenwidth, screenheight, descriptionBC);//description
		iShowBMP(200, 310, "images\\1.bmp");
		iShowBMP(450, 310, "images\\2.bmp");
		iShowBMP(700, 310, "images\\3.bmp");
		//description();
	}

	// if (kemne_khelmu_screen)
	//description();


	if (khela_suru_screen)
	{
		//playBackground();
	}

	if (amagochenos_screen)
	{
		iShowImage(0, 0, screenwidth, screenheight, amago_chenos);
	}

	if (khela_shes_screen)
	{
		iShowImage(0, 0, screenwidth, screenheight, gameover);
	}

}




void loadHomeImage()
{
	/*
	iLoadImage() will return an interger type id for each image you load.
	*/
	start1 = iLoadImage("images\\starting.jpg");// home star background

	menu = iLoadImage("images\\Menu.jpg");// home manu background

	scoreBC = iLoadImage("images\\highscore.jpg");// scoreboard background

	descriptionBC = iLoadImage("images\\description1.jpg");// descriptionbord background

	amago_chenos = iLoadImage("images\\amago_chenos2.jpg");// amago chenos page

	roundBC1 = iLoadImage("images\\background1.jpg");//play background

	roundBC2 = iLoadImage("images\\background2.jpg");//play background

	roundBC3 = iLoadImage("images\\1.jpg");//play background

	gameover = iLoadImage("images\\gameover.jpg");//play background


	/*------------------------- CHARACTER DESCRIPTION---------------------*/
	charBC1 = iLoadImage("images\\char1.jpg");
	charBC2 = iLoadImage("images\\char2.jpg");
	charBC3 = iLoadImage("images\\char3.jpg");






	/*.......................CHARACTER png PICTURE LOAD............................*/

}
int pnch_dpjl[8];
int walk[8];

void charload()
{
	pnch_dpjl[0] = iLoadImage("PNCH2\\1.png");
	pnch_dpjl[1] = iLoadImage("PNCH2\\2.png");
	pnch_dpjl[2] = iLoadImage("PNCH2\\3.png");
	pnch_dpjl[3] = iLoadImage("PNCH2\\4.png");
	pnch_dpjl[4] = iLoadImage("PNCH2\\5.png");
	pnch_dpjl[5] = iLoadImage("PNCH2\\6.png");
	pnch_dpjl[6] = iLoadImage("PNCH2\\7.png");
	pnch_dpjl[7] = iLoadImage("PNCH2\\8.png");

	walk[0] = iLoadImage("RUN2\\1.png");
	walk[1] = iLoadImage("RUN2\\2.png");
	walk[2] = iLoadImage("RUN2\\3.png");
	walk[3] = iLoadImage("RUN2\\4.png");

	walk[4] = iLoadImage("RUN2\\5.png");
	walk[5] = iLoadImage("RUN2\\6.png");
	walk[6] = iLoadImage("RUN2\\7.png");
	walk[7] = iLoadImage("RUN2\\8.png");

}


#endif //homepage header