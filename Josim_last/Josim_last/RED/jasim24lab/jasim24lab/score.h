#ifndef HEADER_H_HEADER_SCORE
#define HEADER_H_HEADER_SCORE

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int round_state; // for control each round's point separately

char fname[50] = "score.bin"; // file name

int current_score, heigh_score;


// to creat file.................
void creatFile(){
	FILE *fp;
	fopen_s(&fp,fname,"wb");
	fclose(fp);
}


// to store 1st round point 
void storedata_round1()
{
	FILE *fp;
	fopen_s(&fp, fname, "wa");


	fclose(fp);
}

// to store 2nd round point 
void storedata_round2()
{
	FILE *fp;
	fopen_s(&fp, fname, "wa");


	fclose(fp);
}

// to store 3rd round point 
void storedata_round3()
{
	FILE *fp;
	fopen_s(&fp, fname, "wa");


	fclose(fp);
}





void scoreboard()// data : this
{
	FILE *fp;
	fopen_s(&fp, fname, "wa");


	fclose(fp);
}









#endif 