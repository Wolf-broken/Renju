#ifndef _BASIC_AI_H_
#define _BASIC_AI_H_

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MIN_MARGIN 0
#define MAX_MARGIN 29

extern int chess[30][30];
extern int ml,nl;
typedef enum {
	black=1,
	white=2
}color;
int  setpriority(void);
int probality(void);
int setpriorzero(int a,int b);
int oppoent1(void);
int oppoent2(void);
int oppoent3(void);
int oppoent4(color c,color d);
int anti_player1(int,int);
int anti_player2(int,int);
int anti_player3(int,int);
void random_chess(int a,int b);
int findchessarray(int a,int b,color c,color d);
int arrayprior(void);
int winer(void); 
int prior;
int step1;
int step2;
int m,n;


#endif
