#ifndef MOVE_H_INCLUDED
#define MOVE_H_INCLUDED
typedef struct Fighter Fighter;
struct Fighter   //structure for all characters

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
	int reactionIndex;
	int escapeIndex;
	int escapeDy;
	int escapeDx;
	Fighter()

	{
		;
	}

	Fighter(int _x, int _y, int _dy, int _dx, int _jumpDy, int _counter, int _state, int _walkIndex, int _punchIndex, int _kickIndex, int _jumpIndex, int _reactionIndex, int _escapeIndex, int _escapeDy, int _escapeDx)
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
		reactionIndex = _reactionIndex;
		escapeIndex = _escapeIndex;
		escapeDy = _escapeDy;
		escapeDx =  _escapeDx;

	}

	// x,y,dx,dy,jumpDy,counter,state,walkIndex,punchIndex,kickIndex,jumpIndex
} joshim(100, 0, 5, 4, 50, 0, 0, 0, 0, 0, 0,0,0,75,15), dipjol(500, 0, 5, 4, 50, 0, 0, 0, 0, 0, 0,0,0,75,-15);



/*.................JOSHIM RENDERING.....................*/

char joshimWalk[5][50] = { "RED\\j\\s\\1.bmp", "RED\\j\\s\\2.bmp", "RED\\j\\s\\3.bmp", "RED\\j\\s\\4.bmp", "RED\\j\\s\\5.bmp" };

char joshimPunch[5][50] = { "RED\\j\\p\\1.bmp", "RED\\j\\p\\2.bmp", "RED\\j\\p\\3.bmp", "RED\\j\\p\\4.bmp", "RED\\j\\p\\5.bmp" };

char joshimKick[5][50] = { "RED\\j\\k\\0.bmp", "RED\\j\\k\\1.bmp", "RED\\j\\k\\2.bmp", "RED\\j\\k\\3.bmp", "RED\\j\\k\\4.bmp", };

char joshimJump[2][50] = { "RED\\j\\j\\2.bmp", "RED\\j\\j\\2.bmp" };

char joshimReaction[3][50] = { "RED\\j\\expression\\1.bmp", "RED\\j\\expression\\2.bmp", " RED\\j\\expression\\3.bmp" };

char joshimEscape[5][50] = { "RED\\j\\e\\1.bmp", "RED\\j\\e\\2.bmp", "RED\\j\\e\\3.bmp", "RED\\j\\e\\4.bmp", "RED\\j\\e\\5.bmp" };


/*................DIPJOL RENDERING.....................*/



char dipjol_Walk[6][50] = { "RED\\d\\s\\2.bmp", "RED\\d\\s\\3.bmp", "RED\\d\\s\\4.bmp", "RED\\d\\s\\5.bmp", "RED\\d\\s\\6.bmp", "RED\\d\\s\\7.bmp" };

char dipjol_Punch[5][50] = { "RED\\d\\p\\1.bmp", "RED\\d\\p\\2.bmp", "RED\\d\\p\\3.bmp", "RED\\d\\p\\4.bmp", "RED\\d\\p\\5.bmp" };

char dipjol_Kick[8][50] = { "RED\\d\\k\\1.bmp", "RED\\d\\k\\2.bmp", "RED\\d\\k\\3.bmp", "RED\\d\\k\\4.bmp", "RED\\d\\k\\5.bmp", "RED\\d\\k\\6.bmp", "RED\\d\\k\\7.bmp", "RED\\d\\k\\8.bmp", };

char dipjol_Jump[2][50] = { "RED\\d\\j\\2.bmp", "RED\\d\\j\\2.bmp" };

char dipjolReaction[3][50] = { "RED\\d\\expression\\1.bmp", "RED\\d\\expression\\2.bmp", " RED\\d\\expression\\3.bmp" };

char dipjolEscape[7][50] = { "RED\\d\\e\\1.bmp", "RED\\d\\e\\2.bmp", "RED\\d\\e\\3.bmp", "RED\\d\\e\\4.bmp", "RED\\d\\e\\5.bmp", "RED\\d\\e\\6.bmp", "RED\\d\\e\\7.bmp" };


//state 1 for walking
//state 2 for punch
//state 3 for kick
//state 4 for reaction
//state 5 for jump
//state 6 for escape


/*............... FUnctions of Jasim.................*/
void joshim_reaction() // reaction when kicked or punched by opponent
{
	joshim.reactionIndex++;
	if (joshim.reactionIndex >= 2)
	{
		joshim.reactionIndex = 0;
		joshim.state = 0;
	}

}
void joshim_reaction_render()// render for reaction
{
	iShowBMPAlternativeSkipRed(joshim.x, joshim.y, joshimReaction[joshim.reactionIndex]);
}
void joshim_walk() //for walking
{




	joshim.walkIndex++;
	if (joshim.walkIndex >= 4) 
	{
		joshim.walkIndex = 0;
		joshim.state = 0;
	}
}


void joshim_walk_render() // render for walking
{
	iShowBMPAlternativeSkipRed(joshim.x, joshim.y, joshimWalk[joshim.walkIndex]);
}


void joshim_punch() //for punch
{
	joshim.punchIndex++;
	if (joshim.punchIndex >= 4)
	{
		joshim.punchIndex = 0;
		joshim.state = 0;
	}
}


void joshim_punch_render()//render for punching
{
	iShowBMPAlternativeSkipRed(joshim.x, joshim.y, joshimPunch[joshim.punchIndex]);
}


void joshim_kick() //for kick
{
	joshim.kickIndex++;
	if (joshim.kickIndex >= 4)
	{
		joshim.kickIndex = 0;
		joshim.state = 0;
	}
}


void joshim_kick_render()//render for kick
{
	iShowBMPAlternativeSkipRed(joshim.x, joshim.y, joshimKick[joshim.kickIndex]);


}


void joshim_jump() //for jump straight
{

	joshim.counter++;  //diviede the total jump period in some parts for changing index and coming back to the ground for gravity

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


void joshim_jump_render()//render for jumping
{

	iShowBMPAlternativeSkipRed(joshim.x, joshim.y, joshimJump[joshim.jumpIndex]);

}


void joshim_escape() // for jumping backwards
{

	joshim.counter++;     //diviede the total jump period in some parts for changing index and coming back to the ground for gravity

	if (joshim.counter < 2 && joshim.counter >= 0)
	{

		joshim.escapeIndex = 0;
		
		joshim.x = joshim.x - joshim.escapeDx;
	}


	if (joshim.counter >= 2 && joshim.counter <= 3)
	{
		joshim.escapeIndex = 1;
		joshim.y = joshim.y + joshim.escapeDy;
		joshim.x = joshim.x - joshim.escapeDx;

	}
	if (joshim.counter >= 4 && joshim.counter <= 5)
	{
		joshim.escapeIndex = 2;
		joshim.y = joshim.y + joshim.escapeDy;
		joshim.x = joshim.x - joshim.escapeDx;
		

	}
	if (joshim.counter >= 6 && joshim.counter <= 7)
	{
		joshim.escapeIndex = 3;
		joshim.y = joshim.y - joshim.escapeDy;
		joshim.x = joshim.x - joshim.escapeDx;

	}
	if (joshim.counter >= 8 && joshim.counter <=9)
	{
		joshim.escapeIndex = 4;
		joshim.y = joshim.y - joshim.escapeDy;
		joshim.x = joshim.x - joshim.escapeDx;

	}

	if (joshim.counter >= 10)
	{
		joshim.counter = 0;
		joshim.escapeIndex = 0;
		joshim.state = 0;
	}
	
}
void joshim_escape_render()//rendering for backwards jump
{

	iShowBMPAlternativeSkipRed(joshim.x, joshim.y, joshimEscape[joshim.escapeIndex]);

}



/*............... FUnctions of Dipjol.................*/
void dipjol_reaction()//reaction when kicked or punched
{
	dipjol.reactionIndex++;
	if (dipjol.reactionIndex >= 2)
	{
		dipjol.reactionIndex = 0;
		dipjol.state = 0;
	}

}
void dipjol_reaction_render()// render for reaction
{
	iShowBMPAlternativeSkipRed(dipjol.x, dipjol.y, dipjolReaction[dipjol.reactionIndex]);
}

void dipjol_walk()//for walking
{
	dipjol.walkIndex++;
	if (dipjol.walkIndex >= 5)
	{
		dipjol.walkIndex = 0;
		dipjol.state = 0;
	}
}


void dipjol_walk_render()//render for walking
{
	iShowBMPAlternativeSkipRed(dipjol.x, dipjol.y, dipjol_Walk[dipjol.walkIndex]);
}


void dipjol_punch()//for punch
{
	dipjol.punchIndex++;
	if (dipjol.punchIndex >= 4)
	{
		dipjol.punchIndex = 0;
		dipjol.state = 0;
	}
}


void dipjol_punch_render()//render for punching
{
	iShowBMPAlternativeSkipRed(dipjol.x, dipjol.y, dipjol_Punch[dipjol.punchIndex]);
}


void dipjol_kick()//for kick
{
	dipjol.kickIndex++;
	if (dipjol.kickIndex >= 7)
	{
		dipjol.kickIndex = 0;
		dipjol.state = 0;
	}
}


void dipjol_kick_render()//rendering for kicking
{
	iShowBMPAlternativeSkipRed(dipjol.x, dipjol.y, dipjol_Kick[dipjol.kickIndex]);
}


void dipjol_jump()//jump straight
{

	dipjol.counter++;  //diviede the total jump period in some parts for changing index and coming back to the ground for gravity

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


void dipjol_jump_render()// rendering for jump
{

	iShowBMPAlternativeSkipRed(dipjol.x, dipjol.y, dipjol_Jump[dipjol.jumpIndex]);

}



void dipjol_escape()// backwards jump
{

	dipjol.counter++;    //diviede the total jump period in some parts for changing index and coming back to the ground for gravity

	if (dipjol.counter < 2 && dipjol.counter >= 0)
	{

		dipjol.escapeIndex = 0;
		
		dipjol.x = dipjol.x - dipjol.escapeDx;
	}


	if (dipjol.counter >= 2 && dipjol.counter <= 3)
	{
		dipjol.escapeIndex = 1;
		dipjol.y = dipjol.y + dipjol.escapeDy;
		dipjol.x = dipjol.x - dipjol.escapeDx;

	}
	if (dipjol.counter >= 4 && dipjol.counter <= 5)
	{
		dipjol.escapeIndex = 2;
		dipjol.y = dipjol.y + dipjol.escapeDy;
		dipjol.x = dipjol.x - dipjol.escapeDx;
		

	}
	if (dipjol.counter >= 6 && dipjol.counter <= 7)
	{
		dipjol.escapeIndex = 3;
		dipjol.y = dipjol.y - dipjol.escapeDy;
		dipjol.x = dipjol.x - dipjol.escapeDx;

	}
	if (dipjol.counter >= 8 && dipjol.counter <= 9)
	{
		dipjol.escapeIndex = 4;
		dipjol.y = dipjol.y - dipjol.escapeDy;
		dipjol.x = dipjol.x - dipjol.escapeDx;

	}

	if (dipjol.counter >= 10)
	{
		dipjol.counter = 0;
		dipjol.escapeIndex = 0;
		dipjol.state = 0;
	}
	
}
void dipjol_escape_render()//backwards jump rendering
{

	iShowBMPAlternativeSkipRed(dipjol.x, dipjol.y, dipjolEscape[dipjol.escapeIndex]);

}

#endif ///!MOVE_H_INCLUDED