#ifndef _MOVE_H_
#define _MOVE_H_

#include "BasicAI.h"
#include "map.h"
#include "AdvanceAI.h"
#include <windows.h>
#include <conio.h>
int chess[30][30];
void PrintChar(char *ch,UINT count,UINT x, UINT y); 
void paintchess(void);
void move(void);
void moveUP(void);
void moveDOWN(void);
void moveLEFT(void);
void moveRIGHT(void);
void menu(void);


#endif
