#include "AdvanceAI.h"

int  createtwo(int a,int b)
{
	int row,line,crow=0,cline=0,paint=0,value=0;
	for(line=-1;line<=1;line++)
	{
		for(row=-1;row<=1;row++)
		{
			if(!chess[a+line][b+row])
			{
				chess[a+line][b+row]=2;
				paint=anti_player2(a+line,b+row);
				chess[a+line][b+row]=0;
				if(paint)
				{
					if(paint>value)
					{
						value=paint;
						crow=row;
						cline=line;
					}
				}
			}
		}
	}
	if(value)
	{
		chess[a+cline][b+crow]=2;
	}
	else
	{
		srand((unsigned int)time(NULL));
		int i;
		while(i<20)
		{
	
			int row=rand()%3-1;
			int line=rand()%3-1;
			if(!chess[a+line][b+row])
			{
				chess[a+line][b+row]=2;
				break;
			}
			i++;
		}
		if(i>=20)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}
int createarray(color c,color d)
{
	int i,j,a,b,row,line,cline,crow,ci,cj,t,p=0,pick=0;
	for(i=3;i<27;i++)
	{
		for(j=3;j<27;j++)
		{
			for(line=-3;line<=3;line++)
			{
				for(row=-3;row<=3;row++)
				{
					if(!chess[i+line][j+row])
					{
						chess[i+line][j+row]=c;
						t=findchessarray(i,j,c,d);
						if(pick<t)
						{
							pick=t;
							ci=i;
							cj=j;
							crow=row;
							cline=line;
						}
						chess[i+line][j+row]=0;
					}
				}
			}
		}
	}
	
	if(pick>0)
	{
		p=1;
		pick=0;
	}
	int q=0;
	q=two_steps_array(white,black);
	if(q)
	{
		chess[ml][nl]=white;
		return 1;
	}
	else if(p)
	{
		chess[ci+cline][cj+crow]=c;
		return 1;
	}
	else 
	{
		return 0;
	}	
}

int two_steps_array(color c,color d)
{
	int a,b,line,row,p=0,q=0,pick=0;
		for(a=3;a<27;a++)
		{
			for(b=3;b<27;b++)
			{
				if(!chess[a][b])
				{
					chess[a][b]=c;
					pick=0;
					if(c==black)
					{
						for(row=-3;row<=3;row++)
						{
							for(line=-3;line<=3;line++)
							{
								int t=anti_player1(a+line,b+row);
								if(t>pick)
								{
									pick=t;
								}
							}
						}
					}
					else if(c==white)
					{
						pick=setpriority();
					}
					p=0;
					for(line=-3;line<=3;line++)
					{
						for(row=-3;row<=3;row++)
						{
							if(findchessarray(a+line,b+row,c,d))
							{
								p=1;
							}
						}
					}
					
					chess[a][b]=0;
					if(pick&&p)
					{
						ml=a;
						nl=b;
						q=1;
						break;
					}
				}
			}
			if(q) break;
		}
	
	
	if(q)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}


