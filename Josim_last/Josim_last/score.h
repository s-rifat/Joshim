#ifndef HEADER_H_HEADER_SCORE
#define HEADER_H_HEADER_SCORE

# include <string>
#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;
//FILE *fp;
ofstream fp;

int jsfinal, dpfinal;

int dpcounter, jscounter;
char js_point[20], dp_point[20];

char fname[50] = "score.txt"; // file name
//int joshim_point, dipjol_point; // for assigning point of joshim & dipjol

int point = 3;



// to print current score of dipjol
void dipjol_current_point(){
	iSetColor(255, 0, 0);
	iShowBMP(800, 550, "images\\dipjol_score.bmp");
	iText(910, 565, dp_point, GLUT_BITMAP_HELVETICA_18);
}

// to print current score of joshim
void joshim_current_point(){
	iSetColor(255, 0, 0);
	iShowBMP(0, 550, "images\\joshim_score.bmp");
	iText(95, 565, js_point, GLUT_BITMAP_HELVETICA_18);

}

// to creat file.................
void creatFile(){

	FILE *ffp;
	fopen_s(&ffp,"SCR.txt","w");
	fclose(ffp);
	/* c++
	fp.open("example.bin",ios::in | ios::out | ios::app );

	fp.close();
	*/
}

void insertWinner()
{
	FILE *ffp;

	ffp = fopen("SCR.txt", "w");
	//fwrite("HDGHDVVHD", sizeof(50), 1,ffp);
	fprintf_s(ffp, "%d\n", jscounter);
	fprintf_s(ffp, "%d\n", dpcounter);
	fclose(ffp);

	/*  c++
	//fp.open("example.bin", ios::in | ios::out | ios::app);
	ofstream fp("example.bin", ios::in |  ios::app);
	fp << dpcounter <<endl;
	fp << jscounter << endl;
	fp.close();
	*/
}


void scorebord()
{

	FILE *ffp;

	ffp = fopen("SCR.txt", "r");
	//int i = 0;
	fscanf(ffp, "%d", &jscounter);
	fscanf(ffp, "%d", &dpcounter);

	jsfinal = jscounter;
	dpfinal = dpcounter;
	cout << jsfinal << "    " << dpfinal << endl;
	cout << jscounter << "    " << dpcounter << endl;
		//i++;
		//if (i == 2) break;
	fclose(ffp);
	}

	/*
	if (scorescreen){
		if (collector[0] > collector[1])
			iText(50, 350, "Jashim Win", GLUT_BITMAP_TIMES_ROMAN_24);
		if (collector[0] < collector[1])
			iText(50, 350, "Dipjol Win", GLUT_BITMAP_TIMES_ROMAN_24);

		//iText(50, 350, "Dipjol Win", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	*/

	







#endif 