#include "move.h"
#define MIN_WIDTH 16
#define MIN_LENGTH 5
#define MAX_WIDTH 74
#define MAX_LENGTH 34
int chess[30][30]={};
int x,y;
void moveUP(void)
{

	if(y>MIN_LENGTH)
	{
		if(chess[(x-16)/2][y-5]);
		else if(y==MAX_LENGTH) 
		{
			if(x==MIN_WIDTH)
			{
				PrintChar("┗",2,x,y);
			}
			else if(x==MAX_WIDTH)
			{
				PrintChar("┛",2,x,y);
			}
			else 
			{
				PrintChar("┻",2,x,y);
			}
		}
		else 
		{
			if(x==MIN_WIDTH)
			{
				PrintChar("┣",2,x,y);
			}
			else if(x==MAX_WIDTH)
			{
				PrintChar("┫",2,x,y);
			}
			else 
			{
				PrintChar("╋",2,x,y);
			}
		}
		y--;
		if(!chess[(x-16)/2][y-5]) 
		PrintChar("◎",2,x,y);
	}
}
void moveDOWN(void)
{
	if(y<MAX_LENGTH)
	{
		if(chess[(x-16)/2][y-5]);
		else if(y==MIN_LENGTH) 
		{
			if(x==MIN_WIDTH)
			{
				PrintChar("┏",2,x,y);
			}
			else if(x==MAX_WIDTH)
			{
				PrintChar("┓",2,x,y);
			}
			else 
			{
				PrintChar("┳",2,x,y);
			}
		}
		else 
		{
			if(x==MIN_WIDTH)
			{
				PrintChar("┣",2,x,y);
			}
			else if(x==MAX_WIDTH)
			{
				PrintChar("┫",2,x,y);
			}
			else 
			{
				PrintChar("╋",2,x,y);
			}
		}
		y++;
		if(!chess[(x-16)/2][y-5]) 
		PrintChar("◎",2,x,y);
	}
}
void moveLEFT(void)
{
	if(x>MIN_WIDTH)
	{
		if(chess[(x-16)/2][y-5]);
		else if(x==MAX_WIDTH) 
		{
			if(y==MIN_LENGTH)
			{
				PrintChar("┓",2,x,y);
			}
			else if(y==MAX_LENGTH)
			{
				PrintChar("┛",2,x,y);
			}
			else 
			{
				PrintChar("┫",2,x,y);
			}
		}
		else 
		{
			if(y==MIN_LENGTH)
			{
				PrintChar("┳",2,x,y);
			}
			else if(y==MAX_LENGTH)
			{
				PrintChar("┻",2,x,y);
			}
			else 
			{
				PrintChar("╋",2,x,y);
			}
		}
		x-=2;
		if(!chess[(x-16)/2][y-5]) 
		PrintChar("◎",2,x,y);	
	}
}
void moveRIGHT(void)
{
	if(x<MAX_WIDTH)
	{
		if(chess[(x-16)/2][y-5]);
		else if(x==MIN_WIDTH) 
		{
			if(y==MIN_LENGTH)
			{
				PrintChar("┏",2,x,y);
			}
			else if(y==MAX_LENGTH)
			{
				PrintChar("┗",2,x,y);
			}
			else 
			{
				PrintChar("┣",2,x,y);
			}
		}
		else 
		{
			if(y==MIN_LENGTH)
			{
				PrintChar("┳",2,x,y);
			}
			else if(y==MAX_LENGTH)
			{
				PrintChar("┻",2,x,y);
			}
			else 
			{
				PrintChar("╋",2,x,y);
			}
		}
		x+=2;
		if(!chess[(x-16)/2][y-5]) 
		PrintChar("◎",2,x,y);
	}
}
void paintchess(void)
{
	int j=y-5;
	int i=(x-16)/2;
	if(!chess[i][j])
	{ 
		PrintChar("○",2,x,y);
		chess[i][j]=1;
		
		int w=winer();
	    if (w==1)
		{
			PrintChar("恭喜！！！你获得了胜利！",sizeof("恭喜！！！你获得了胜利！"),80,25);
		}
		else
		{
			int p=oppoent1();
			int q;
			if(!p)
			{
				q=oppoent2();
			}
			i=(x-16)/2;
			j=y-5;
			if (!q&&!p)
			{
						int r=oppoent3();
						if(!r)
						{
							r=createtwo(i,j);
							if(!r)
							{
								random_chess(i,j);
							}
						}
			}
			for (i=0;i<30;i++)
			{
				for (j=0;j<30;j++)
				{
					if(chess[i][j]==2)
					{
						PrintChar("●",2,i*2+16,j+5);
					}
				}
			}	
			w=winer();
	    	if(w==2)
			{
				PrintChar("很遗憾！电脑取得了胜利。",sizeof("很遗憾！电脑取得了胜利。"),80,25);
			}
		}
	}
}
void move(void)
{
	char turn;
	x=40;
	y=20;
	PrintChar("◎",2,x,y);
	while ((turn=getch())!=0x1B) /*PRESS ESC TO QUIT*/
	{
		switch(turn)
		{
			case 72:moveUP();break;
			case 75:moveLEFT();break;
			case 80:moveDOWN();break;
			case 77:moveRIGHT();break;
			case 32:paintchess();break;
			dafault : break;
	    }
	    if(winer())
	    {
	    	break;
		}
	}
}
void menu(void)
{
	PrintChar("欢迎来到五子棋游戏！！",sizeof("欢迎来到五子棋游戏！！"),80,10);
	PrintChar("游戏说明：按上下左右键选择位置",sizeof("游戏说明：按上下左右键选择位置"),80,12);
	PrintChar("按空格键下棋和选择模式",sizeof("按空格键下棋和选择模式"),80,14);
	PrintChar("退出游戏：ESC",sizeof("退出游戏：ESC"),80,16);
}
void PrintChar(char *ch,UINT count,UINT x, UINT y) 
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
 	COORD pos;
 	ULONG unuse;
 	pos.X=x;
 	pos.Y=y;
  	CONSOLE_SCREEN_BUFFER_INFO bInfo; 
 	GetConsoleScreenBufferInfo(h, &bInfo );
 	WriteConsoleOutputCharacterA(h,ch,count,pos,&unuse);
}
