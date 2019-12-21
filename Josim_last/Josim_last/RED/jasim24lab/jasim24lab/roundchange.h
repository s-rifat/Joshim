#ifndef HEADER_H_HEADER_ROUNDCHANGE
#define HEADER_H_HEADER_ROUNDCHANGE


bool round1 = true;// for round1 control
bool round2 = false;// for round2 control
bool round3 = false; // for round 3 comtrol



void roundChange(bool r1, bool r2, bool r3) // to control boolean value of play screen
{
	round1 = r1;
	round2 = r2;
	round3 = r3;
}




void playBackground()
{
	if (round1)
	{
		iShowImage(0, 0, screenwidth, screenheight, roundBC1);//play
	}

	if (round2)
	{
		iShowImage(0, 0, screenwidth, screenheight, roundBC2);//play
	}

	if (round3)
	{
		iShowImage(0, 0, screenwidth, screenheight, roundBC3);//play
	}

}


#endif