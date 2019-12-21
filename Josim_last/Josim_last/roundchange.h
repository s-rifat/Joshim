#ifndef HEADER_H_HEADER_ROUNDCHANGE
#define HEADER_H_HEADER_ROUNDCHANGE

char a1[10000];//time counter ke char[] e rupantorito 

bool round1 = true;// for round1 control
bool round2 = false;// for round2 control
bool round3 = false; // for round 3 comtrol

int aaa =101;//100 theke 0 porjonto kombe
bool bbb=true;

int joshim_point, dipjol_point;

int bcMODE = 0; // to control background


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

//time limit for changing round

void round_timing()
{  
	if (bcMODE == 3)
		iPauseTimer(100);
   
	if(khela_suru_screen && bbb== true)
	{

		--aaa;
		itoa(aaa, a1, 10);
		cout<<aaa<<endl;
		if(aaa <=0)

		{

			aaa = 101;
			bbb=false;
			bcMODE++;
			
		}
	}
}


#endif