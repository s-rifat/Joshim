#ifndef HEADER_H_HEADERDISCRIPTION
#define HEADER_H_HEADERDISCRIPTION


//bool characterpage = false;
bool cr1 = false;
bool cr2 = false;
bool cr3 = false;

void cr(bool _a, bool _b, bool _c, bool _d)
{
	cr1 = _a;
	cr2 = _b;
	cr3 = _c;
	kemne_khelmu_screen = _d;
}

void description()
{
	if (cr1)
	{
		iShowImage(0, 0, screenwidth, screenheight, charBC1);
	}
    else if (cr2)
	{
		iShowImage(0, 0, screenwidth, screenheight, charBC2);
	}
    else if (cr3)
	{
		iShowImage(0, 0, screenwidth, screenheight, charBC3);
	}
}


void start()
{
	iShowBMP(50, 400, "ICON\\startB.bmp");
}









#endif 