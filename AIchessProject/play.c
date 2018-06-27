#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "move.h"
#define PLATFORM 0 

/*

PALTFORM用于屏幕的适配
如果地图异常，可以修改PALTPFORM的0，1值 

*/

void setwindow(void);
void mode(void);
int main(int argc, char *argv[]) {
	char choice='y';
	do
	{
		system("cls");
		if(choice=='Y'||choice=='y')
		{
			if(PLATFORM)
			{
				setwindow();
				mapclone();
			}
			else 
			{
				map();
			}
			menu();
			mode();
			move(); 	/*主逻辑实现的地方*/
		}
		PrintChar("是否重新开始？(y/n)",sizeof("是否重新开始？(y/n)"),80,19);
		do
		{
			choice=getchar();
		}while(choice!='y'&&choice!='Y'&&choice!='N'&&choice!='n');
		int i,j;
		for(i=0;i<30;i++)
		{
			for(j=0;j<30;j++)
			{
				chess[i][j]=0;
			}
		}
		
	}while(choice=='y'||choice=='Y');
	return 0;
}
void setwindow(void)
{
	HANDLE hOut;
	COORD size={150,50};
	SMALL_RECT rc={0,0,150-1,50-1};
	hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleScreenBufferSize(hOut,size);
	
}
void mode(void)
{
	PrintChar("白棋先行",sizeof("白棋先行"),83,22);
	PrintChar("黑棋先行",sizeof("黑棋先行"),83,23);
	PrintChar("→",sizeof("→"),80,22);
	char ch;
	int q=1;
	do {
		ch=getch();
		if(ch==72)
		{
			PrintChar("→",sizeof("→"),80,22);
			PrintChar("  ",sizeof("→"),80,23);
			q=1;
		}
		else if(ch==80)
		{
			PrintChar("→",sizeof("→"),80,23);
			PrintChar("  ",sizeof("→"),80,22);
			q=0;
		}
		else if(ch==32)
		{
			if(q)
			{
				chess[13][15]=2;
				PrintChar("●",2,13*2+16,15+5);
			}
		}
		
	} while(ch!=32);
}
