#ifndef MOVE_H_INCLUDED
#define MOVE_H_INCLUDED
typedef struct Fighter Fighter;
struct Fighter

{
	int x;
	int y;
	int dx;
	int dy;
	int jumpDy;
	int counter;
	int state;

	int walkIndex;
	int punchIndex;
	int kickIndex;
	int jumpIndex;

	Fighter()
	{
		;
	}

	Fighter(int _x, int _y, int _dy, int _dx, int _jumpDy, int _counter, int _state, int _walkIndex, int _punchIndex, int _kickIndex, int _jumpIndex)
	{

		x = _x;
		y = _y;
		dx = _dx;
		dy = _dy;
		jumpDy = _jumpDy;
		counter = _counter;
		state = _state;

		walkIndex = _walkIndex;
		punchIndex = _punchIndex;
		kickIndex = _kickIndex;
		jumpIndex = _jumpIndex;

	}

	// x,y,dx,dy,jumpDy,counter,state,walkIndex,punchIndex,kickIndex,jumpIndex
} joshim(100, 0, 5, 4, 50, 0, 0, 0, 0, 0, 0), dipjol(500, 0, 5, 4, 50, 0, 0, 0, 0, 0, 0);



/*.................JOSHIM RENDERING.....................*/

char joshimWalk[5][50] = { "RED\\j\\s\\1.bmp", "RED\\j\\s\\2.bmp", "RED\\j\\s\\3.bmp", "RED\\j\\s\\4.bmp", "RED\\j\\s\\5.bmp" };

char joshimPunch[5][50] = { "RED\\j\\p\\1.bmp", "RED\\j\\p\\2.bmp", "RED\\j\\p\\3.bmp", "RED\\j\\p\\4.bmp", "RED\\j\\p\\5.bmp" };

char joshimKick[5][50] = { "RED\\j\\k\\0.bmp", "RED\\j\\k\\1.bmp", "RED\\j\\k\\2.bmp", "RED\\j\\k\\3.bmp", "RED\\j\\k\\4.bmp", };

char joshimJump[2][50] = { "RED\\j\\j\\2.bmp", "RED\\j\\j\\2.bmp" };

/*................DIPJOL RENDERING.....................*/



char dipjol_Walk[6][50] = { "RED\\d\\s\\2.bmp", "RED\\d\\s\\3.bmp", "RED\\d\\s\\4.bmp", "RED\\d\\s\\5.bmp", "RED\\d\\s\\6.bmp", "RED\\d\\s\\7.bmp" };

char dipjol_Punch[5][50] = { "RED\\d\\p\\1.bmp", "RED\\d\\p\\2.bmp", "RED\\d\\p\\3.bmp", "RED\\d\\p\\4.bmp", "RED\\d\\p\\5.bmp" };

char dipjol_Kick[8][50] = { "RED\\d\\k\\1.bmp", "RED\\d\\k\\2.bmp", "RED\\d\\k\\3.bmp", "RED\\d\\k\\4.bmp", "RED\\d\\k\\5.bmp", "RED\\d\\k\\6.bmp", "RED\\d\\k\\7.bmp", "RED\\d\\k\\8.bmp", };

char dipjol_Jump[2][50] = { "RED\\d\\j\\2.bmp", "RED\\d\\j\\2.bmp" };





/*............... FUnctions of Jasim.................*/

void joshim_walk()
{
	joshim.walkIndex++;
	if (joshim.walkIndex >= 4)
	{
		joshim.walkIndex = 0;
		joshim.state = 0;
	}
}


void joshim_walk_render()
{
	iShowBMPAlternativeSkipRed(joshim.x, joshim.y, joshimWalk[joshim.walkIndex]);
}


void joshim_punch()
{
	joshim.punchIndex++;
	if (joshim.punchIndex >= 4)
	{
		joshim.punchIndex = 0;
		joshim.state = 0;
	}
}


void joshim_punch_render()
{
	iShowBMPAlternativeSkipRed(joshim.x, joshim.y, joshimPunch[joshim.punchIndex]);
}


void joshim_kick()
{
	joshim.kickIndex++;
	if (joshim.kickIndex >= 4)
	{
		joshim.kickIndex = 0;
		joshim.state = 0;
	}
}


void joshim_kick_render()
{
	iShowBMPAlternativeSkipRed(joshim.x, joshim.y, joshimKick[joshim.kickIndex]);


}


void joshim_jump()
{

	joshim.counter++;

	if (joshim.counter < 2 && joshim.counter >= 0)
		joshim.jumpIndex = 0;


	if (joshim.counter >= 2 && joshim.counter <= 7)
	{
		joshim.jumpIndex = 1;
		joshim.y = joshim.y + joshim.jumpDy;

	}

	if (joshim.counter >= 8 && joshim.counter <= 13)
	{
		joshim.jumpIndex = 1;
		joshim.y = joshim.y - joshim.jumpDy;

	}


	if (joshim.counter >= 14 && joshim.counter < 16)
		joshim.jumpIndex = 0;

	if (joshim.counter >= 16)
	{
		joshim.counter = 0;
		joshim.jumpIndex = 0;
		joshim.state = 0;
	}
}


void joshim_jump_render()
{

	iShowBMPAlternativeSkipRed(joshim.x, joshim.y, joshimJump[joshim.jumpIndex]);

}




/*............... FUnctions of Dipjol.................*/

void dipjol_walk()
{
	dipjol.walkIndex++;
	if (dipjol.walkIndex >= 5)
	{
		dipjol.walkIndex = 0;
		dipjol.state = 0;
	}
}


void dipjol_walk_render()
{
	iShowBMPAlternativeSkipRed(dipjol.x, dipjol.y, dipjol_Walk[dipjol.walkIndex]);
}


void dipjol_punch()
{
	dipjol.punchIndex++;
	if (dipjol.punchIndex >= 4)
	{
		dipjol.punchIndex = 0;
		dipjol.state = 0;
	}
}


void dipjol_punch_render()
{
	iShowBMPAlternativeSkipRed(dipjol.x, dipjol.y, dipjol_Punch[dipjol.punchIndex]);
}


void dipjol_kick()
{
	dipjol.kickIndex++;
	if (dipjol.kickIndex >= 7)
	{
		dipjol.kickIndex = 0;
		dipjol.state = 0;
	}
}


void dipjol_kick_render()
{
	iShowBMPAlternativeSkipRed(dipjol.x, dipjol.y, dipjol_Kick[dipjol.kickIndex]);
}


void dipjol_jump()
{

	dipjol.counter++;

	if (dipjol.counter < 2 && dipjol.counter >= 0)
		dipjol.jumpIndex = 0;


	if (dipjol.counter >= 2 && dipjol.counter <= 7)
	{
		dipjol.jumpIndex = 1;
		dipjol.y = dipjol.y + dipjol.jumpDy;

	}

	if (dipjol.counter >= 8 && dipjol.counter <= 13)
	{
		dipjol.jumpIndex = 1;
		dipjol.y = dipjol.y - dipjol.jumpDy;

	}


	if (dipjol.counter >= 14 && dipjol.counter < 16)
		dipjol.jumpIndex = 0;

	if (dipjol.counter >= 16)
	{
		dipjol.counter = 0;
		dipjol.jumpIndex = 0;
		dipjol.state = 0;
	}
}


void dipjol_jump_render()
{

	iShowBMPAlternativeSkipRed(dipjol.x, dipjol.y, dipjol_Jump[dipjol.jumpIndex]);

}




#endif ///!MOVE_H_INCLUDED