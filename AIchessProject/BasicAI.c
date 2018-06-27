#include "BasicAI.h"

int probality(void)
{
	srand((unsigned int)time(NULL));
	int sum=rand()%100+1;
	return sum;
}
int oppoent1 (void)
{
	int i,j;
	int if_rival_paint1=0;
	int pick=0;
	/*Ñ°ÕÒ×î´óValue*/
	int a,b;
	for(a=0;a<30;a++)
	{
		for (b=0;b<30;b++)
		{
			int t=anti_player1(a,b);
			if(t>pick)
			{
				pick=t;
				i=a;
				j=b;
			}
		}
	}
			switch (pick)
			{
				case 1: if (chess[i-2][j]==1)
						{
							chess[i-1][j]=2;
						}
						else if(chess[i+4][j]==1)
						{
							chess[i+3][j]=2;
						}
						else if(probality()>50)
						{
							chess[i-1][j]=2;
						}
						else
						{
							chess[i+3][j]=2;
						}
						if_rival_paint1=1;
						break;
				case 2:	if (chess[i][j-2]==1)
						{
							chess[i][j-1]=2;
						}
						else if(chess[i][j+4]==1)
						{
							chess[i][j+3]=2;
						}
						else if(probality()>50)
						{
							chess[i][j-1]=2;
						}
						else
						{
							chess[i][j+3]=2;
						}
						if_rival_paint1=1;
						break;
				case 3: if (chess[i-2][j-2]==1)
						{
							chess[i-1][j-1]=2;
						}
						else if(chess[i+4][j+4]==1)
						{
							chess[i+3][j+3]=2;
						}
						else if(probality()>50)
						{
							chess[i-1][j-1]=2;
						}
						else
						{
							chess[i+3][j+3]=2;
						}
						if_rival_paint1=1;
						break;
				case 4: if (chess[i-2][j+2]==1)
						{
							chess[i-1][j+1]=2;
						}
						else if(chess[i+4][j-4]==1)
						{
							chess[i+3][j-3]=2;
						}
						else if(probality()>50)
						{
							chess[i-1][j+1]=2;
						}
						else
						{
							chess[i+3][j-3]=2;
						}
						if_rival_paint1=1;
						break;
				case 5:if(chess[i-1][j]||chess[i+4][j])
						{
							chess[i+2][j]=2;
						}
						else
						{
							int p=probality();
							if(p<80)
							{
								chess[i+2][j]=2;
							}
							else if(p<95)
							{
								chess[i-1][j]=2;
							}
							else
							{
								chess[i+4][j]=2;
							}
						}
						if_rival_paint1=1;
						break;
				case 6:if(chess[i-1][j]||chess[i+4][j])
						{
							chess[i+1][j]=2;
						}
						else
						{
							int p=probality();
							if(p<80)
							{
								chess[i+1][j]=2;
							}
							else if(p<95)
							{
								chess[i+4][j]=2;
							}
							else
							{
								chess[i-1][j]=2;
							}
						}
						if_rival_paint1=1;
						break;
				case 7:if(chess[i][j-1]||chess[i][j+4])
						{
							chess[i][j+2]=2;
						}
						else
						{
							int p=probality();
							if(p<80)
							{
								chess[i][j+2]=2;
							}
							else if(p<95)
							{
								chess[i][j-1]=2;
							}
							else
							{
								chess[i][j+4]=2;
							}
						}
						if_rival_paint1=1;
						break;
				case 8:if(chess[i][j-1]||chess[i][j+4])
						{
							chess[i][j+1]=2;
						}
						else
						{
							int p=probality();
							if(p<80)
							{
								chess[i][j+1]=2;
							}
							else if(p<95)
							{
								chess[i][j+4]=2;
							}
							else
							{
								chess[i][j-1]=2;
							}
						}
						if_rival_paint1=1;
						break;
				case 9:if(chess[i-1][j-1]||chess[i+4][j+4])
						{
							chess[i+2][j+2]=2;
						}
						else
						{
							int p=probality();
							if(p<80)
							{
								chess[i+2][j+2]=2;
							}
							else if(p<95)
							{
								chess[i-1][j-1]=2;
							}
							else
							{
								chess[i+4][j+4]=2;
							}
						}
						if_rival_paint1=1;
						break;
				case 10:if(chess[i-1][j-1]||chess[i+4][j+4])
						{
							chess[i+1][j+1]=2;
						}
						else
						{
							int p=probality();
							if(p<80)
							{
								chess[i+1][j+1]=2;
							}
							else if(p<95)
							{
								chess[i+4][j+4]=2;
							}
							else
							{
								chess[i-1][j-1]=2;
							}
						}
						if_rival_paint1=1;
						break;
				case 11:if(chess[i-1][j+1]||chess[i+4][j-4])
						{
							chess[i+2][j-2]=2;
						}
						else
						{
							int p=probality();
							if(p<80)
							{
								chess[i+2][j-2]=2;
							}
							else if(p<95)
							{
								chess[i-1][j+1]=2;
							}
							else
							{
								chess[i+4][j-4]=2;
							}
						}
						if_rival_paint1=1;
						break;
				case 12:if(chess[i-1][j+1]||chess[i+4][j-4])
						{
							chess[i+1][j-1]=2;
						}
						else
						{
							int p=probality();
							if(p<80)
							{
								chess[i+1][j-1]=2;
							}
							else if(p<95)
							{
								chess[i+4][j-4]=2;
							}
							else
							{
								chess[i-1][j+1]=2;
							}
						}
						if_rival_paint1=1;
						break;
				case 13: if(!chess[i+4][j]&&!chess[i-1][j])
						{
							
						}
						if(!chess[i+4][j]&&i+4<=MAX_MARGIN)
						{
							chess[i+4][j]=2;
							if_rival_paint1=1;
						}
						else if(!chess[i-1][j]&&i-1>=MIN_MARGIN)
						{
							chess[i-1][j]=2;
							if_rival_paint1=1;
						}
						break;
				case 14: if(!chess[i][j+4]&&!chess[i][j-1])
						{
							
						}
						if(!chess[i][j+4]&&j+4<=MAX_MARGIN)
						{
							chess[i][j+4]=2;
							if_rival_paint1=1;
						}
						else if(!chess[i][j-1]&&j-1>=MIN_MARGIN)
						{
							chess[i][j-1]=2;
							if_rival_paint1=1;
						}
						break;
				case 15:if(!chess[i+4][j+4]&&!chess[i-1][j-1])
						{
							
						}
						if(!chess[i+4][j+4]&&i+4<=MAX_MARGIN&&j+4<=MAX_MARGIN)
						{
							chess[i+4][j+4]=2;
							if_rival_paint1=1;
						}
						else if(!chess[i-1][j-1]&&i-1>=MIN_MARGIN&&j-1>=MIN_MARGIN)
						{
							chess[i-1][j-1]=2;
							if_rival_paint1=1;
						}
						break;
				case 16: if(!chess[i+4][j-4]&&!chess[i-1][j+1])
						{
							
						}
						if(!chess[i+4][j-4]&&i+4<=MAX_MARGIN&&j-4>=MIN_MARGIN)
						{
							chess[i+4][j-4]=2;
							if_rival_paint1=1;
						}
						else if(!chess[i-1][j+1]&&i-1>=MIN_MARGIN&&j+1<=MAX_MARGIN)
						{
							chess[i-1][j+1]=2;
							if_rival_paint1=1;
						}	
						break;				 							 								 								 						 						 						 						 
				default :	break;
			}
	return if_rival_paint1;
}
int oppoent2 (void)
{
	int i,j;
	int if_rival_paint2=0;
	int pick=0;
	/*Ñ°ÕÒ×î´óValue*/
	int a,b;
	for(a=0;a<30;a++)
	{
		for (b=0;b<30;b++)
		{
			int t=anti_player2(a,b);
			if(t>pick)
			{
				pick=t;
				i=a;
				j=b;
			}
		}
	}
	int p=0,r=0,q=0;;
	if(pick<=8)
	{
		p=oppoent4(white,black);
		if(p)
		{
			if_rival_paint2=1;
		}
		else 
		{
			r=createarray(white,black);
			if(r) if_rival_paint2=1;
			else 
			{
				q=two_steps_array(black,white);
				if(q) 
				{
					chess[ml][nl]=2;
					if_rival_paint2=1;
				}
			}
		}

	}
	if(!r&&!p&&!q)
	{ 
			switch (pick)
			{
				case 1: if(probality()>50)
						{
							chess[i-1][j]=2;
						}
						else
						{
							chess[i+2][j]=2;
						}
						if_rival_paint2=1;
						break;
				case 2:	if(probality()>50)
						{
							chess[i][j-1]=2;
						}
						else
						{
							chess[i][j+2]=2;
						}
						if_rival_paint2=1;
						break;
				case 3: if(probality()>50)
						{
							chess[i-1][j-1]=2;
						}
						else
						{
							chess[i+2][j+2]=2;
						}
						if_rival_paint2=1;
						break;
				case 4: if(probality()>50)
						{
							chess[i-1][j+1]=2;
						}
						else
						{
							chess[i+2][j-2]=2;
						}
						if_rival_paint2=1;
						break;
				case 5: chess[i+1][j]=2;
						if_rival_paint2=1;
						break;
				case 6: chess[i][j+1]=2;
						if_rival_paint2=1;
						break;
				case 7: chess[i+1][j+1]=2;
						if_rival_paint2=1;
						break;
				case 8: chess[i-1][j+1]=2;
						if_rival_paint2=1;
						break;
				case 9: if(!chess[i+3][j]&&chess[i+4][j]!=1&&i+4<=MAX_MARGIN)
						{
							chess[i+3][j]=2;
							if_rival_paint2=1;
						}
						else if(!chess[i-1][j]&&chess[i-2][j]!=1&&i-2>=MIN_MARGIN)
						{
							chess[i-1][j]=2;
							if_rival_paint2=1;
						}
						break;
				case 10: if(!chess[i][j+3]&&chess[i][j+4]!=1&&j+4<=MAX_MARGIN)
						{
							chess[i][j+3]=2;
							if_rival_paint2=1;
						}
						else if(!chess[i][j-1]&&chess[i][j-2]!=1&&j-2>=MIN_MARGIN)
						{
							chess[i][j-1]=2;
							if_rival_paint2=1;
						}
						break;
				case 11: if(!chess[i+3][j+3]&&chess[i+4][j+4]!=1&&i+4<=MAX_MARGIN&&j+4<=MAX_MARGIN)
						{
							chess[i+3][j+3]=2;
							if_rival_paint2=1;
						}
						else if(!chess[i-1][j-1]&&chess[i-2][j-2]!=1&&i-2>=MIN_MARGIN&&j-2>=MIN_MARGIN)
						{
							chess[i-1][j-1]=2;
							if_rival_paint2=1;
						}
						break;
				case 12: if(!chess[i+3][j-3]&&chess[i+4][j-4]!=1&&i+4<=MAX_MARGIN&&j-4>=MIN_MARGIN)
						{
							chess[i+3][j-3]=2;
							if_rival_paint2=1;
						}
						else if(!chess[i-1][j+1]&&chess[i-2][j+2]!=1&&i-2>=MIN_MARGIN&&j+2<=MAX_MARGIN)
						{
							chess[i-1][j+1]=2;
							if_rival_paint2=1;
						}
						break;
				case 13:chess[i][j]=2;
						if_rival_paint2=1;
						break;
				case 15: if(!chess[i-1][j]&&i-1>=MIN_MARGIN)
						 {
							chess[i-1][j]=2;
							if_rival_paint2=1;	
						 }
						 else if(!chess[i+4][j]&&i+4<=MAX_MARGIN)
						 {
						 	chess[i+4][j]=2;
						 	if_rival_paint2=1;
						 }
						 break;	
				case 16: if(!chess[i][j-1]&&j-1>=MIN_MARGIN)
						 {
							chess[i][j-1]=2;
							if_rival_paint2=1;	
						 }
						 else if(!chess[i][j+4]&&j+4<=MAX_MARGIN)
						 {
						 	chess[i][j+4]=2;
						 	if_rival_paint2=1;
						 }
						 break;
				case 17: if(!chess[i-1][j-1]&&i-1>=MIN_MARGIN&&j-1>=MIN_MARGIN)
						 {
							chess[i-1][j-1]=2;
							if_rival_paint2=1;	
						 }
						 else if(!chess[i+4][j+4]&&i+4<=MAX_MARGIN&&j+4<=MAX_MARGIN)
						 {
						 	chess[i+4][j+4]=2;
						 	if_rival_paint2=1;
						 }
						 break;	
				case 18: if(!chess[i+1][j-1]&&i+1<=MAX_MARGIN&&j-1>=MIN_MARGIN)
						 {
							chess[i+1][j-1]=2;
							if_rival_paint2=1;	
						 }
						 else if(!chess[i-4][j+4]&&i-4>=MIN_MARGIN&&j+4<=MAX_MARGIN)
						 {
						 	chess[i-4][j+4]=2;
						 	if_rival_paint2=1;
						 }
						 break;	
				case 19:chess[i+2][j]=2;
						if_rival_paint2=1;
						break;
				case 20:chess[i][j+2]=2;
						if_rival_paint2=1;
						break;
				case 21:chess[i+2][j+2]=2;
						if_rival_paint2=1;
						break;
				case 22:chess[i+2][j-2]=2;
						if_rival_paint2=1;
						break;
				case 14:chess[m][n]=2;
						if_rival_paint2=1;							 				 					 				 
				default :	break;
			}
	}
	return if_rival_paint2;
}

int oppoent3(void)
{
	int if_rival_paint3=0;
	int a,b,i,j;
	int pick=0;
	for(a=0;a<30;a++)
	{
		for (b=0;b<30;b++)
		{
			int t=anti_player3(a,b);
			if(t>pick)
			{
				pick=t;
				i=a;
				j=b;
			}
		}
	} 
			switch(pick)
	 		{
				case 1:	if(!chess[i+3][j])
						{
							chess[i+2][j]=2;
						}
						else
						{
							chess[i-1][j]=2;
						}
						if_rival_paint3=1;
						break;	
				case 2:	if(!chess[i][j+3])
						{
							chess[i][j+2]=2;
						}
						else
						{
							chess[i][j-1]=2;
						}
						if_rival_paint3=1;
						break;
				case 3:	if(!chess[i+3][j+3])
						{
							chess[i+2][j+2]=2;
						}
						else
						{
							chess[i-1][j-1]=2;
						}
						if_rival_paint3=1;
						break;
				case 4:	if(!chess[i-3][j+3])
						{
							chess[i-2][j+2]=2;
						}
						else
						{
							chess[i+1][j-1]=2;
						}
						if_rival_paint3=1;
						break;
				case 5:	chess[i+1][j]=2;
						if_rival_paint3=1;
						break;
				case 6:	chess[i][j+1]=2;
						if_rival_paint3=1;
						break;
				case 7:	chess[i+1][j+1]=2;
						if_rival_paint3=1;
						break;
				case 8:	chess[i-1][j+1]=2;
						if_rival_paint3=1;
						break;						
				default:break;
			}
	return if_rival_paint3;
}

int oppoent4(color c,color d)
{
	int pick=0;
	int i,j,a,b,t,p=0;
		pick=0;
		for(i=0;i<30;i++)
		{
			for(j=0;j<30;j++)
			{
				t=findchessarray(i,j,c,d);
				if(pick<t)
				{
					pick=t;
					a=i;
					b=j;
				}
			}
		}
		if(pick>0)
		{
			chess[a][b]=c;
			p=1;
		}
	return p;
} 

/*×èÖ¹Íæ¼Ò*/
int  anti_player1 (int a,int b)
{
	 int count=0;
	 int s=setpriority();
	 if (prior!=2)
	 {
	 	if(prior!=1)
		{ 	
		 	if(chess[a][b]==1&&chess[a+1][b]==1&&chess[a+3][b]==1&&!chess[a+2][b]&&(chess[a-1][b]!=2&&chess[a+4][b]!=2))
	 		{
	 			if(a-1>=MIN_MARGIN&&a+4<=MAX_MARGIN&&b<=MAX_MARGIN&&b>=MIN_MARGIN)
		 		count=5;
			}
	 		else if(chess[a][b]==1&&chess[a+2][b]==1&&chess[a+3][b]==1&&!chess[a+1][b]&&(chess[a-1][b]!=2&&chess[a+4][b]!=2))
	 		{
	 			if(a-1>=MIN_MARGIN&&a+4<=MAX_MARGIN&&b<=MAX_MARGIN&&b>=MIN_MARGIN)
	 			count=6;
	 		}
		 	else if(chess[a][b]==1&&chess[a][b+1]==1&&chess[a][b+3]==1&&!chess[a][b+2]&&(chess[a][b-1]!=2&&chess[a][b+4]!=2))
		 	{
		 		if(a>=MIN_MARGIN&&a<=MAX_MARGIN&&b+4<=MAX_MARGIN&&b-1>=MIN_MARGIN)
		 		count=7;
	 		}
	 		else if(chess[a][b]==1&&chess[a][b+2]==1&&chess[a][b+3]==1&&!chess[a][b+1]&&(chess[a][b-1]!=2&&chess[a][b+4]!=2))
	 		{
	 			if(a>=MIN_MARGIN&&a<=MAX_MARGIN&&b+4<=MAX_MARGIN&&b-1>=MIN_MARGIN)
	 			count=8;
	 		}	
	 		else if(chess[a][b]==1&&chess[a+1][b+1]==1&&chess[a+3][b+3]==1&&!chess[a+2][b+2]&&(chess[a-1][b-1]!=2&&chess[a+4][b+4]!=2))
		 	{
		 		if(a-1>=MIN_MARGIN&&a+4<=MAX_MARGIN&&b+4<=MAX_MARGIN&&b-1>=MIN_MARGIN)
		 		count=9;
			}
			else if(chess[a][b]==1&&chess[a+2][b+2]==1&&chess[a+3][b+3]==1&&!chess[a+1][b+1]&&(chess[a-1][b-1]!=2&&chess[a+4][b+4]!=2))
	 		{
	 			if(a-1>=MIN_MARGIN&&a+4<=MAX_MARGIN&&b+4<=MAX_MARGIN&&b-1>=MIN_MARGIN)
	 			count=10;
	 		}
	 		else if(chess[a][b]==1&&chess[a+1][b-1]==1&&chess[a+3][b-3]==1&&!chess[a+2][b-2]&&(chess[a-1][b+1]!=2&&chess[a+4][b-4]!=2))
	 		{
	 			if(a-1>=MIN_MARGIN&&a+4<=MAX_MARGIN&&b+1<=MAX_MARGIN&&b-4>=MIN_MARGIN)
	 			count=11;
	 		}
		 	else if(chess[a][b]==1&&chess[a+2][b-2]==1&&chess[a+3][b-3]==1&&!chess[a+1][b-1]&&(chess[a-1][b+1]!=2&&chess[a+4][b-4]!=2))
	 		{
	 			if(a-1>=MIN_MARGIN&&a+4<=MAX_MARGIN&&b+1<=MAX_MARGIN&&b-4>=MIN_MARGIN)
	 			count=12;
	 		}
	 		else if(chess[a][b]==1&&chess[a+1][b]==1&&chess[a+2][b]==1&&(!chess[a+3][b]&&!chess[a-1][b]))
	 		{
	 			if(a-1>=MIN_MARGIN&&a+3<=MAX_MARGIN&&b>=MIN_MARGIN&&b<=MAX_MARGIN)
	 			count=1;
	 		}
	 		else if (chess[a][b]==1&&chess[a][b+1]==1&&chess[a][b+2]==1&&(!chess[a][b-1]&&!chess[a][b+3]))
	 		{
	 			if(a>=MIN_MARGIN&&a<=MAX_MARGIN&&b-1>=MIN_MARGIN&&b+3<=MAX_MARGIN)
	 			count=2;
	 		}
		 	else if (chess[a][b]==1&&chess[a+1][b+1]==1&&chess[a+2][b+2]==1&&(!chess[a-1][b-1]&&!chess[a+3][b+3]))
	 		{
	 			if(a-1>=MIN_MARGIN&&a+3<=MAX_MARGIN&&b-1>=MIN_MARGIN&&b+3<=MAX_MARGIN)
	 			count=3;
	 		}
	 		else if (chess[a][b]==1&&chess[a+1][b-1]==1&&chess[a+2][b-2]==1&&(!chess[a-1][b+1]&&!chess[a+3][b-3]))
	 		{
	 			if(a-1>=MIN_MARGIN&&a+3<=MAX_MARGIN&&b-3>=MIN_MARGIN&&b+1<=MAX_MARGIN)
	 			count=4;
	 		}
	 	}
	 	if(chess[a][b]==1&&chess[a+1][b]==1&&chess[a+2][b]==1&&chess[a+3][b]==1&&((!chess[a-1][b]&&a-1>=MIN_MARGIN)||(!chess[a+4][b]&&a+4<=MAX_MARGIN)))
	 	{
	 		count=13;
	 	}
	 	else if (chess[a][b]==1&&chess[a][b+1]==1&&chess[a][b+2]==1&&chess[a][b+3]==1&&((!chess[a][b-1]&&b-1>=MIN_MARGIN)||(!chess[a][b+4]&&b+4<=MAX_MARGIN)))
	 	{
	 		count=14;
	 	}
	 	else if (chess[a][b]==1&&chess[a+1][b+1]==1&&chess[a+2][b+2]==1&&chess[a+3][b+3]==1&&((!chess[a-1][b-1]&&b-1>=MIN_MARGIN&&a-1>=MIN_MARGIN)||(!chess[a+4][b+4]&&a+4<=MAX_MARGIN&&b+4<=MAX_MARGIN)))
	 	{
	 		count=15;
		}
	 	else if (chess[a][b]==1&&chess[a+1][b-1]==1&&chess[a+2][b-2]==1&&chess[a+3][b-3]==1&&((!chess[a-1][b+1]&&b+1<=MAX_MARGIN&&a-1>=MIN_MARGIN)||(!chess[a+4][b-4]&&b-4>=MIN_MARGIN&&a+4<=MAX_MARGIN)))
	 	{
	 		count=16;
	 	}
	}
	return count;
}

/*AIÑ°ÕÒÓ®·¨*/ 
int anti_player2(int a,int b)
{
	int count=0;
	 if(chess[a][b]==2&&chess[a+1][b]==2&&chess[a+3][b]!=1&&chess[a-2][b]!=1&&(!chess[a+2][b]&&!chess[a-1][b]))
	 {
	 	if(a-2>=MIN_MARGIN&&a+3<=MAX_MARGIN)
	 	count=1;
	 }
	 else if (chess[a][b]==2&&chess[a][b+1]==2&&chess[a][b-2]!=1&&chess[a][b+3]!=1&&(!chess[a][b-1]&&!chess[a][b+2]))
	 {
	 	if(b-2>=MIN_MARGIN&&b+3<=MAX_MARGIN)
	 	count=2;
	 }
	 else if (chess[a][b]==2&&chess[a+1][b+1]==2&&chess[a-2][b-2]!=1&&chess[a+3][b+3]!=1&&(!chess[a-1][b-1]&&!chess[a+2][b+2]))
	 {
	 	if(a-2>=MIN_MARGIN&&a+3<=MAX_MARGIN&&b-2>=MIN_MARGIN&&b+3<=MAX_MARGIN)
	 	count=3;
	 }
	 else if (chess[a][b]==2&&chess[a+1][b-1]==2&&chess[a-2][b+2]!=1&&chess[a+3][b-3]!=1&&(!chess[a-1][b+1]&&!chess[a+2][b-2]))
	 {
	 	if(a-2>=MIN_MARGIN&&a+3<=MAX_MARGIN&&b-3>=MIN_MARGIN&&b+2<=MAX_MARGIN)
	 	count=4;
	 }
	 else if (chess[a][b]==2&&chess[a+2][b]==2&&chess[a-2][b]!=1&&chess[a+4][b]!=1&&(!chess[a-1][b]&&!chess[a+3][b])&&!chess[a+1][b])
	 {
	 	if(a-2>=MIN_MARGIN&&a+4<=MAX_MARGIN)
	 	count=5;
	 }
	 else if (chess[a][b]==2&&chess[a][b+2]==2&&chess[a][b-2]!=1&&chess[a][b+4]!=1&&(!chess[a][b+3]&&!chess[a][b-1])&&!chess[a][b+1])
	 {
	 	if(b-2>=MIN_MARGIN&&b+4<=MAX_MARGIN)
	 	count=6;
	 }
	 else if (chess[a][b]==2&&chess[a+2][b+2]==2&&chess[a-2][b-2]!=1&&chess[a+4][b+4]!=1&&(!chess[a+3][b+3]&&!chess[a-1][b-1])&&!chess[a+1][b+1])
	 {
	 	if(a-2>=MIN_MARGIN&&a+4<=MAX_MARGIN&&b-2>=MIN_MARGIN&&b+4<=MAX_MARGIN)
	 	count=7;
	 }
	 else if (chess[a][b]==2&&chess[a-2][b+2]==2&&chess[a+2][b-2]!=1&&chess[a-4][b+4]!=1&&(!chess[a-3][b+3]&&!chess[a+1][b-1])&&!chess[a-1][b+1])
	 {
	 	if(a-4>=MIN_MARGIN&&a+2<=MAX_MARGIN&&b-2>=MIN_MARGIN&&b+4<=MAX_MARGIN)
	 	count=8;
	 }
	 
	 if(findchessarray(a,b,black,white))
	{
		count=13;
	}
	
	 if(chess[a][b]==2&&chess[a+1][b]==2&&chess[a+2][b]==2&&((chess[a-2][b]!=1&&!chess[a-1][b]&&a-2>=MIN_MARGIN)||(chess[a+4][b]!=1&&!chess[a+3][b]&&a+4<=MAX_MARGIN)))
	 {
	 	count=9;
	 }
	 else if (chess[a][b]==2&&chess[a][b+1]==2&&chess[a][b+2]==2&&((chess[a][b-2]!=1&&!chess[a][b-1]&&b-2>=MIN_MARGIN)||(chess[a][b+4]!=1&&!chess[a][b+3]&&b+4<=MAX_MARGIN)))
	 {
	 	count=10;
	 }
	 else if (chess[a][b]==2&&chess[a+1][b+1]==2&&chess[a+2][b+2]==2&&((chess[a-2][b-2]!=1&&!chess[a-1][b-1]&&a-2>=MIN_MARGIN&&b-2>=MIN_MARGIN)||(chess[a+4][b+4]!=1&&!chess[a+3][b+3]&&a+4<=MAX_MARGIN&&b+4<=MAX_MARGIN)))
	 {
	 	count=11;
	 }
	 else if (chess[a][b]==2&&chess[a+1][b-1]==2&&chess[a+2][b-2]==2&&((chess[a-2][b+2]!=1&&!chess[a-1][b+1]&&a-2>=MIN_MARGIN&&b+2<=MAX_MARGIN)||(chess[a+4][b-4]!=1&&!chess[a+3][b-3]&&a+4<=MAX_MARGIN&&b-4>=MIN_MARGIN)))
	 {
	 	count=12;
	 }
	 
	 if (chess[a-1][b]==2&&chess[a+2][b]==2&&chess[a+1][b]==2&&!chess[a][b]&&(chess[a-2][b]!=1||chess[a+3][b]!=1))
	 {
	 	if(a-2>=MIN_MARGIN&&a+3<=MAX_MARGIN)
	 	count=13;
	 }
	 else if (chess[a][b-1]==2&&chess[a][b+2]==2&&chess[a][b+1]==2&&!chess[a][b]&&(chess[a][b+3]!=1||chess[a][b-2]!=1))
	 {
	 	if(b-2>=MIN_MARGIN&&b+3<=MAX_MARGIN)
	 	count=13;
	 }
	 else if (chess[a-1][b-1]==2&&chess[a+2][b+2]==2&&chess[a+1][b+1]==2&&!chess[a][b]&&(chess[a+3][b+3]!=1||chess[a-2][b-2]!=1))
	 {
	 	if(a-2>=MIN_MARGIN&&a+3<=MAX_MARGIN&&b-2>=MIN_MARGIN&&b+3<=MAX_MARGIN)
	 	count=13;
	 }
	 else if (chess[a+1][b-1]==2&&chess[a-2][b+2]==2&&chess[a-1][b+1]==2&&!chess[a][b]&&(chess[a-3][b+3]!=1||chess[a+2][b-2]!=1))
	 {
	 	if(a-3>=MIN_MARGIN&&a+2<=MAX_MARGIN&&b-2>=MIN_MARGIN&&b+3<=MAX_MARGIN)
	 	count=13;
	 }
	 
	 if(arrayprior())
	 {
	 	count=14;
	 }
	 
	 if(chess[a][b]==2&&chess[a+1][b]==2&&chess[a+2][b]==2&&chess[a+3][b]==2&&((!chess[a-1][b]&&a-1>=MIN_MARGIN)||(!chess[a+4][b]&&a+4<=MAX_MARGIN)))
	 {
	 	count=15;
	 }
	 else if(chess[a][b]==2&&chess[a][b+1]==2&&chess[a][b+2]==2&&chess[a][b+3]==2&&((!chess[a][b-1]&&b-1>=MIN_MARGIN)||(!chess[a][b+4]&&b+4<=MAX_MARGIN)))
	 {
	 	count=16;
	 }
	 else if(chess[a][b]==2&&chess[a+1][b+1]==2&&chess[a+2][b+2]==2&&chess[a+3][b+3]==2&&((!chess[a-1][b-1]&&a-1>=MIN_MARGIN&&b-1>=MIN_MARGIN)||(!chess[a+4][b+4]&&a+4<=MAX_MARGIN&&b+4<=MAX_MARGIN)))
	 {
	 	count=17;
	 }
	 else if(chess[a][b]==2&&chess[a-1][b+1]==2&&chess[a-2][b+2]==2&&chess[a-3][b+3]==2&&((!chess[a+1][b-1]&&a+1<=MAX_MARGIN&&b-1>=MIN_MARGIN)||(!chess[a-4][b+4]&&a-4>=MIN_MARGIN&&b+4<=MAX_MARGIN)))
	 {
	 	count=18;
	 }
	 else if(chess[a][b]==2&&chess[a+1][b]==2&&chess[a+3][b]==2&&chess[a+4][b]==2&&!chess[a+2][b]&&a+4<=MAX_MARGIN)
	 {
	 	count=19;
	 }
	 else if(chess[a][b]==2&&chess[a][b+1]==2&&chess[a][b+3]==2&&chess[a][b+4]==2&&!chess[a][b+2]&&b+4<=MAX_MARGIN)
	 {
	 	count=20;
	 }
	 else if(chess[a][b]==2&&chess[a+1][b+1]==2&&chess[a+3][b+3]==2&&chess[a+4][b+4]==2&&!chess[a+2][b+2]&&a+4<=MAX_MARGIN&&b+4<=MAX_MARGIN)
	 {
	 	count=21;
	 }
	 else if(chess[a][b]==2&&chess[a+1][b-1]==2&&chess[a+3][b-3]==2&&chess[a+4][b-4]==2&&!chess[a+2][b-2]&&a+4<=MAX_MARGIN&&b-4>=MIN_MARGIN)
	 {
	 	count=22;
	 }
	return count;
}
/*¶Â2*//*±ß½ç´ýÐÞ¸Ä*/
int anti_player3(int a,int b)
{
  	int count=0;
	if(chess[a][b]==1&&chess[a+1][b]==1&&!chess[a-1][b]&&!chess[a+2][b]&&(!chess[a+3][b]||!chess[a-2][b])&&a-2>=MIN_MARGIN&&a+3<=MAX_MARGIN)
	{
		count=1;
	}
	else if(chess[a][b]==1&&chess[a][b+1]==1&&!chess[a][b-1]&&!chess[a][b+2]&&(!chess[a][b+3]||!chess[a][b-2])&&b-2>=MIN_MARGIN&&b+3<=MAX_MARGIN) 
	{
		count=2;
	}
	else if(chess[a][b]==1&&chess[a+1][b+1]==1&&!chess[a-1][b-1]&&!chess[a+2][b+2]&&(!chess[a+3][b+3]||!chess[a-2][b-2])&&a-2>=MIN_MARGIN&&a+3<=MAX_MARGIN&&b-2>=MIN_MARGIN&&b+3<=MAX_MARGIN) 
	{
		count=3;
	}
	else if(chess[a][b]==1&&chess[a-1][b+1]==1&&!chess[a+1][b-1]&&!chess[a-2][b+2]&&(!chess[a+2][b-2]||!chess[a-3][b+3])&&a-3>=MIN_MARGIN&&a+2<=MAX_MARGIN&&b-2>=MIN_MARGIN&&b+3<=MAX_MARGIN) 
	{
		count=4;
	}
	else if(chess[a][b]==1&&chess[a+2][b]==1&&!chess[a-1][b]&&!chess[a+1][b]&&!chess[a+3][b]&&(!chess[a+4][b]||!chess[a-2][b])&&a-2>=MIN_MARGIN&&a+4<=MAX_MARGIN)
	{
		count=5;
	}
	else if(chess[a][b]==1&&chess[a][b+2]==1&&!chess[a][b-1]&&!chess[a][b+1]&&!chess[a][b+3]&&(!chess[a][b-2]||!chess[a][b+4])&&b-2>=MIN_MARGIN&&b+4<=MAX_MARGIN) 
	{
		count=6;
	}
	else if(chess[a][b]==1&&chess[a+2][b+2]==1&&!chess[a-1][b-1]&&!chess[a+1][b+1]&&!chess[a+3][b+3]&&(!chess[a-2][b-2]||!chess[a+4][b+4])&&a-2>=MIN_MARGIN&&a+4<=MAX_MARGIN&&b-2>=MIN_MARGIN&&b+4<=MAX_MARGIN) 
	{
		count=7;
	}
	else if(chess[a][b]==1&&chess[a-2][b+2]==1&&!chess[a-1][b+1]&&!chess[a+1][b-1]&&!chess[a-3][b+3]&&(!chess[a+2][b-2]||!chess[a-4][b+4])&&a-4>=MIN_MARGIN&&a+2<=MAX_MARGIN&&b-2>=MIN_MARGIN&&b+4<=MAX_MARGIN) 
	{
		count=8;
	}
	return count;
}
int  setpriority(void)
{
	int a,b;
	prior=0;
	int prior1=0,prior2=0,prior3=0;
	for (a=0;a<30;a++)
	{
		for(b=0;b<30;b++)
		{
			if(chess[a][b]==2&&chess[a+1][b]==2&&chess[a+2][b]==2&&chess[a+3][b]==2&&(chess[a-1][b]!=1||chess[a+4][b]!=1))
	 		{
	 			prior1=1;
	 		}
	 		else if (chess[a][b]==2&&chess[a][b+1]==2&&chess[a][b+2]==2&&chess[a][b+3]==2&&(chess[a][b-1]!=1||chess[a][b+4]!=1))
	 		{
	 			prior1=1;
	 		}
			 else if (chess[a][b]==2&&chess[a+1][b+1]==2&&chess[a+2][b+2]==2&&chess[a+3][b+3]==2&&(chess[a-1][b-1]!=1||chess[a+4][b+4]!=1))
	 		{
	 			prior1=1;
	 		}
	 		else if (chess[a][b]==2&&chess[a+1][b-1]==2&&chess[a+2][b-2]==2&&chess[a+3][b-3]==2&&(chess[a-1][b+1]!=1||chess[a+4][b-4]!=1))
	 		{
	 			prior1=1;
	 		}
	 		else if(chess[a-1][b]==2&&chess[a+1][b]==2&&chess[a+2][b]==2&&chess[a+3][b]==2&&!chess[a][b])
	 		{
	 			prior1=1;
			}
			else if(chess[a-1][b]==2&&chess[a][b]==2&&chess[a+2][b]==2&&chess[a+3][b]==2&&!chess[a+1][b])
	 		{
	 			prior1=1;
			}
			else if(chess[a-1][b]==2&&chess[a][b]==2&&chess[a+1][b]==2&&chess[a+3][b]==2&&!chess[a+2][b])
	 		{
	 			prior1=1;
			}
			else if(chess[a][b-1]==2&&chess[a][b+1]==2&&chess[a][b+2]==2&&chess[a][b+3]==2&&!chess[a][b])
	 		{
	 			prior1=1;
			}
			else if(chess[a][b-1]==2&&chess[a][b]==2&&chess[a][b+2]==2&&chess[a][b+3]==2&&!chess[a][b+1])
	 		{
	 			prior1=1;
			}
			else if(chess[a][b-1]==2&&chess[a][b]==2&&chess[a][b+1]==2&&chess[a][b+3]==2&&!chess[a][b+2])
	 		{
	 			prior1=1;
			}
			else if(chess[a-1][b-1]==2&&chess[a+1][b+1]==2&&chess[a+2][b+2]==2&&chess[a+3][b+3]==2&&!chess[a][b])
	 		{
	 			prior1=1;
			}
			else if(chess[a-1][b-1]==2&&chess[a][b]==2&&chess[a+2][b+2]==2&&chess[a+3][b+3]==2&&!chess[a+1][b+1])
	 		{
	 			prior1=1;
			}
			else if(chess[a-1][b-1]==2&&chess[a][b]==2&&chess[a+1][b+1]==2&&chess[a+3][b+3]==2&&!chess[a+2][b+2])
	 		{
	 			prior1=1;
			}
			else if(chess[a+1][b-1]==2&&chess[a-1][b+1]==2&&chess[a-2][b+2]==2&&chess[a-3][b+3]==2&&!chess[a][b])
	 		{
	 			prior1=1;
			}
			else if(chess[a+1][b-1]==2&&chess[a][b]==2&&chess[a-2][b+2]==2&&chess[a-3][b+3]==2&&!chess[a-1][b+1])
	 		{
	 			prior1=1;
			}
			else if(chess[a+1][b-1]==2&&chess[a][b]==2&&chess[a-1][b+1]==2&&chess[a-3][b+3]==2&&!chess[a-2][b+2])
	 		{
	 			prior1=1;
			}
		}
	}
	for(a=0;a<30;a++)
	{
		for(b=0;b<30;b++)
		{
			
	 			if(setpriorzero(a,b))
	 			{
	 				prior2=1;
				}
		}
	}
	for(a=0;a<30;a++)
	{
		for(b=0;b<30;b++)
		{
				if(chess[a][b]==2&&chess[a+1][b]==2&&chess[a+2][b]==2&&((chess[a-2][b]!=1&&!chess[a-1][b])||(chess[a+4][b]!=1&&!chess[a+3][b])))
	 			{
	 				prior3=1;
	 			}
	 			else if (chess[a][b]==2&&chess[a][b+1]==2&&chess[a][b+2]==2&&((chess[a][b-2]!=1&&!chess[a][b-1])||(chess[a][b+4]!=1&&!chess[a][b+3])))
	 			{
	 				prior3=1;
	 			}
	 			else if (chess[a][b]==2&&chess[a+1][b+1]==2&&chess[a+2][b+2]==2&&((chess[a-2][b-2]!=1&&!chess[a-1][b-1])||(chess[a+4][b+4]!=1&&!chess[a+3][b+3])))
	 			{
	 				prior3=1;
				}
	 			else if (chess[a][b]==2&&chess[a+1][b-1]==2&&chess[a+2][b-2]==2&&((chess[a-2][b+2]!=1&&!chess[a-1][b+1])||(chess[a+4][b-4]!=1&&!chess[a+3][b-3])))
	 			{
	 				prior3=1;
	 			}
	 			else if (chess[a-1][b]==2&&chess[a+2][b]==2&&chess[a+1][b]==2&&!chess[a][b]&&(chess[a-2][b]!=1||chess[a+3][b]!=1))
				 {
				 	if(a-2>=MIN_MARGIN&&a+3<=MAX_MARGIN)
				 	prior3=1;
				 }
				 else if (chess[a][b-1]==2&&chess[a][b+2]==2&&chess[a][b+1]==2&&!chess[a][b]&&(chess[a][b+3]!=1||chess[a][b-2]!=1))
				 {
				 	if(b-2>=MIN_MARGIN&&b+3<=MAX_MARGIN)
				 	prior3=1;
				 }
				 else if (chess[a-1][b-1]==2&&chess[a+2][b+2]==2&&chess[a+1][b+1]==2&&!chess[a][b]&&(chess[a+3][b+3]!=1||chess[a-2][b-2]!=1))
				 {
				 	if(a-2>=MIN_MARGIN&&a+3<=MAX_MARGIN&&b-2>=MIN_MARGIN&&b+3<=MAX_MARGIN)
				 	prior3=1;
				 }
				 else if (chess[a+1][b-1]==2&&chess[a-2][b+2]==2&&chess[a-1][b+1]==2&&!chess[a][b]&&(chess[a-3][b+3]!=1||chess[a+2][b-2]!=1))
				 {
				 	if(a-3>=MIN_MARGIN&&a+2<=MAX_MARGIN&&b-2>=MIN_MARGIN&&b+3<=MAX_MARGIN)
				 	prior3=1;
				}
		}
	}
	if(prior1)
	{
		prior=2;
	}
	else if(prior2)
	{
		prior=0;
	}
	else if(prior3)
	{
		prior=1;
	}
	return prior;
}

int setpriorzero(int a,int b)
{
	int p=1;
				if(chess[a-2][b]==1&&chess[a-1][b]==1&&chess[a+1][b]==1&&chess[a+2][b]==1&&!chess[a][b])
	 			{
	 				p=0;
				}
				else if(chess[a][b-2]==1&&chess[a][b-1]==1&&chess[a][b+1]==1&&chess[a][b+2]==1&&!chess[a][b])
	 			{
	 				p=0;
				}
				else if(chess[a-2][b-2]==1&&chess[a-1][b-1]==1&&chess[a+1][b+1]==1&&chess[a+2][b+2]==1&&!chess[a][b])
	 			{
	 				p=0;
				}
				else if(chess[a-2][b+2]==1&&chess[a-1][b+1]==1&&chess[a+1][b-1]==1&&chess[a+2][b-2]==1&&!chess[a][b])
	 			{
	 				p=0;
				}
				else if(chess[a-2][b]==1&&chess[a][b]==1&&chess[a+2][b]==1&&((chess[a-1][b]==1&&!chess[a+1][b])||(chess[a+1][b]==1&&!chess[a-1][b])))
				{
					p=0;
				}
				else if(chess[a][b-2]==1&&chess[a][b]==1&&chess[a][b+2]==1&&((chess[a][b-1]==1&&!chess[a][b+1])||(chess[a][b+1]==1&&!chess[a][b-1])))
				{
					p=0;
				}
				else if(chess[a-2][b-2]==1&&chess[a][b]==1&&chess[a+2][b+2]==1&&((chess[a-1][b-1]==1&&!chess[a+1][b+1])||(chess[a+1][b+1]==1&&!chess[a-1][b-1])))
				{
					p=0;
				}
				else if(chess[a-2][b+2]==1&&chess[a][b]==1&&chess[a+2][b-2]==1&&((chess[a-1][b+1]==1&&!chess[a+1][b-1])||(chess[a+1][b-1]==1&&!chess[a-1][b+1])))
				{
					p=0;
				}
				else if(chess[a][b]==1&&chess[a+1][b]==1&&chess[a+2][b]==1&&chess[a+3][b]==1&&((!chess[a-1][b]&&a-1>=MIN_MARGIN)||(!chess[a+4][b]&&a+4<=MAX_MARGIN)))
			 	{
			 		p=0;
			 	}
			 	else if (chess[a][b]==1&&chess[a][b+1]==1&&chess[a][b+2]==1&&chess[a][b+3]==1&&((!chess[a][b-1]&&b-1>=MIN_MARGIN)||(!chess[a][b+4]&&b+4<=MAX_MARGIN)))
			 	{
			 		p=0;
			 	}
			 	else if (chess[a][b]==1&&chess[a+1][b+1]==1&&chess[a+2][b+2]==1&&chess[a+3][b+3]==1&&((!chess[a-1][b-1]&&b-1>=MIN_MARGIN&&a-1>=MIN_MARGIN)||(!chess[a+4][b+4]&&a+4<=MAX_MARGIN&&b+4<=MAX_MARGIN)))
			 	{
			 		p=0;
				}
			 	else if (chess[a][b]==1&&chess[a+1][b-1]==1&&chess[a+2][b-2]==1&&chess[a+3][b-3]==1&&((!chess[a-1][b+1]&&b+1<=MAX_MARGIN&&a-1>=MIN_MARGIN)||(!chess[a+4][b-4]&&b-4>=MIN_MARGIN&&a+4<=MAX_MARGIN)))
			 	{
			 		p=0;
			 	}
	if(!p)
	{
		return 1;
	}
	else 
	{
		return 0;
	}		
}

int arrayprior(void)
{
	int p=0,row,line,a,b;
	 	for(a=4;a<26;a++)
		{
			for (b=4;b<26;b++)
			{
				if(!chess[a][b])
				{
					if(findchessarray(a,b,black,white))
					{
						chess[a][b]=black;
						for(row=-4;row<=4;row++)
						{
							for(line=-4;line<=4;line++)
							{
								if(!p)
								{
									p=setpriorzero(a+line,b+row);
								}
							}
						}
						chess[a][b]=0;
						if(p)
						{
							m=a;
							n=b;
							break;
						}
					}
				}
			}
			if(p) break;
		}
		int q=setpriority();
		if(q<2&&p)
		{
			return 1;
		}
		else 
		{
			return 0;
		}
}

int findchessarray(int a,int b,color c,color d)
{
	int count=0;
	int store[30];
	int i=0,j;
	for(j=0;j<30;j++)
	{
		store[j]=0;
	}
	if(!chess[a][b])
	{
		if(chess[a+1][b]==c&&chess[a+2][b]==c&&chess[a-1][b]!=d&&chess[a+3][b]!=d&&(chess[a-2][b]!=d||chess[a+4][b]!=d)&&a-2>=MIN_MARGIN&&a+4<=MAX_MARGIN)
		{
			count=3;
			store[i]=count;
			i++;
		}
		else if(chess[a-1][b]==c&&chess[a-2][b]==c&&chess[a+1][b]!=d&&chess[a-3][b]!=d&&(chess[a+2][b]!=d||chess[a-4][b]!=d)&&a-4>=MIN_MARGIN&&a+2<=MAX_MARGIN)
		{
			count=3;
			store[i]=count;
			i++;
		}
		else if(chess[a+1][b]==c&&chess[a-1][b]==c&&chess[a+2][b]!=d&&chess[a-2][b]!=d&&(chess[a-3][b]!=d||chess[a+3][b]!=d)&&a-3>=MIN_MARGIN&&a+3<=MAX_MARGIN)
		{
			count=3;
			store[i]=count;
			i++;
		} 
		else if(chess[a+1][b]==c&&chess[a+3][b]==c&&chess[a+2][b]!=d&&chess[a-1][b]!=d&&chess[a+4][b]!=d&&a-1>=MIN_MARGIN&&a+4<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		}
		else if(chess[a-1][b]==c&&chess[a-3][b]==c&&chess[a-2][b]!=d&&chess[a+1][b]!=d&&chess[a-4][b]!=d&&a-4>=MIN_MARGIN&&a+1<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		}
		 
		else if(chess[a+1][b]==c&&chess[a-2][b]==c&&chess[a-1][b]!=d&&chess[a+2][b]!=d&&chess[a-3][b]!=d&&a-3>=MIN_MARGIN&&a+2<=MAX_MARGIN)
		{
			count=2;
			store[i]=count;
			i++;
		}
		else if(chess[a-1][b]==c&&chess[a+2][b]==c&&chess[a+1][b]!=d&&chess[a-2][b]!=d&&chess[a+3][b]!=d&&a-2>=MIN_MARGIN&&a+3<=MAX_MARGIN)
		{
			count=2;
			store[i]=count;
			i++;
		}
		else if(chess[a+3][b]==c&&chess[a+2][b]==c&&chess[a+1][b]!=d&&chess[a-1][b]!=d&&chess[a+4][b]!=d&&a-1>=MIN_MARGIN&&a+4<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		}
		else if(chess[a-3][b]==c&&chess[a-2][b]==c&&chess[a-1][b]!=d&&chess[a+1][b]!=d&&chess[a-4][b]!=d&&a-4>=MIN_MARGIN&&a+1<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		}
		
		
		
		
		if(chess[a][b+1]==c&&chess[a][b+2]==c&&chess[a][b-1]!=d&&chess[a][b+3]!=d&&(chess[a][b-2]!=d||chess[a][b+4]!=d)&&b-2>=MIN_MARGIN&&b+4<=MAX_MARGIN)
		{
			count=3;
			store[i]=count;
			i++;
		}
		else if(chess[a][b-1]==c&&chess[a][b-2]==c&&chess[a][b+1]!=d&&chess[a][b-3]!=d&&(chess[a][b+2]!=d||chess[a][b-4]!=d)&&b-4>=MIN_MARGIN&&b+2<=MAX_MARGIN)
		{
			count=3;
			store[i]=count;
			i++;
		}
		else if(chess[a][b+1]==c&&chess[a][b-1]==c&&chess[a][b+2]!=d&&chess[a][b-2]!=d&&(chess[a][b-3]!=d||chess[a][b+3]!=d)&&b-3>=MIN_MARGIN&&b+3<=MAX_MARGIN)
		{
			count=3;
			store[i]=count;
			i++;
		}
		else if(chess[a][b+1]==c&&chess[a][b+3]==c&&chess[a][b+2]!=d&&chess[a][b-1]!=d&&chess[a][b+4]!=d&&b-1>=MIN_MARGIN&&b+4<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		}
		else if(chess[a][b-1]==c&&chess[a][b-3]==c&&chess[a][b-2]!=d&&chess[a][b+1]!=d&&chess[a][b-4]!=d&&b-4>=MIN_MARGIN&&b+1<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		}
		else if(chess[a][b+1]==c&&chess[a][b-2]==c&&chess[a][b-1]!=d&&chess[a][b+2]!=d&&chess[a][b-3]!=d&&b-3>=MIN_MARGIN&&b+2<=MAX_MARGIN)
		{
			count=2;
			store[i]=count;
			i++;
		} 
		else if(chess[a][b-1]==c&&chess[a][b+2]==c&&chess[a][b+1]!=d&&chess[a][b-2]!=d&&chess[a][b+3]!=d&&b-2>=MIN_MARGIN&&b+3<=MAX_MARGIN)
		{
			count=2;
			store[i]=count;
			i++;
		}
		else if(chess[a][b+3]==c&&chess[a][b+2]==c&&chess[a][b+1]!=d&&chess[a][b-1]!=d&&chess[a][b+4]!=d&&b-1>=MIN_MARGIN&&b+4<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		}
		else if(chess[a][b-3]==c&&chess[a][b-2]==c&&chess[a][b-1]!=d&&chess[a][b+1]!=d&&chess[a][b-4]!=d&&b-4>=MIN_MARGIN&&b+1<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		}
		
		 
		
		if(chess[a+1][b+1]==c&&chess[a+2][b+2]==c&&chess[a-1][b-1]!=d&&chess[a+3][b+3]!=d&&(chess[a-2][b-2]!=d||chess[a+4][b+4]!=d)&&a-2>=MIN_MARGIN&&a+4<=MAX_MARGIN&&b-2>=MIN_MARGIN&&b+4<=MAX_MARGIN)
		{
			count=3;
			store[i]=count;
			i++;
		}
		else if(chess[a-1][b-1]==c&&chess[a-2][b-2]==c&&chess[a+1][b+1]!=d&&chess[a-3][b-3]!=d&&(chess[a+2][b+2]!=d||chess[a-4][b-4]!=d)&&a-4>=MIN_MARGIN&&a+2<=MAX_MARGIN&&b-4>=MIN_MARGIN&&b+2<=MAX_MARGIN)
		{
			count=3;
			store[i]=count;
			i++;
		}
		else if(chess[a+1][b+1]==c&&chess[a-1][b-1]==c&&chess[a+2][b+2]!=d&&chess[a-2][b-2]!=d&&(chess[a-3][b-3]!=d||chess[a+3][b+3]!=d)&&a-3>=MIN_MARGIN&&a+3<=MAX_MARGIN&&b-3>=MIN_MARGIN&&b+3<=MAX_MARGIN)
		{
			count=3;
			store[i]=count;
			i++;
		}
		else if(chess[a+1][b+1]==c&&chess[a+3][b+3]==c&&chess[a+2][b+2]!=d&&chess[a-1][b-1]!=d&&chess[a+4][b+4]!=d&&a-1>=MIN_MARGIN&&a+4<=MAX_MARGIN&&b-1>=MIN_MARGIN&&b+4<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		}
		else if(chess[a-1][b-1]==c&&chess[a-3][b-3]==c&&chess[a-2][b-2]!=d&&chess[a+1][b+1]!=d&&chess[a-4][b-4]!=d&&a-4>=MIN_MARGIN&&a+2<=MAX_MARGIN&&b-4>=MIN_MARGIN&&b+2<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		}
		else if(chess[a+1][b+1]==c&&chess[a-2][b-2]==c&&chess[a-1][b-1]!=d&&chess[a+2][b+2]!=d&&chess[a-3][b-3]!=d&&a-3>=MIN_MARGIN&&a+2<=MAX_MARGIN&&b-3>=MIN_MARGIN&&b+2<=MAX_MARGIN)
		{
			count=2;
			store[i]=count;
			i++;
		}
		else if(chess[a-1][b-1]==c&&chess[a+2][b+2]==c&&chess[a+1][b+1]!=d&&chess[a-2][b-2]!=d&&chess[a+3][b+3]!=d&&a-2>=MIN_MARGIN&&a+3<=MAX_MARGIN&&b-2>=MIN_MARGIN&&b+3<=MAX_MARGIN)
		{
			count=2;
			store[i]=count;
			i++;
		}
		else if(chess[a+3][b+3]==c&&chess[a+2][b+2]==c&&chess[a+1][b+1]!=d&&chess[a-1][b-1]!=d&&chess[a+4][b+4]!=d&&a-1>=MIN_MARGIN&&a+4<=MAX_MARGIN&&b-1>=MIN_MARGIN&&b+4<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		}
		else if(chess[a-3][b-3]==c&&chess[a-2][b-2]==c&&chess[a-1][b-1]!=d&&chess[a+1][b+1]!=d&&chess[a-4][b-4]!=d&&a-4>=MIN_MARGIN&&a+1<=MAX_MARGIN&&b-4>=MIN_MARGIN&&b+1<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		}
		
		
		
		
		if(chess[a-1][b+1]==c&&chess[a-2][b+2]==c&&chess[a+1][b-1]!=d&&chess[a-3][b+3]!=d&&(chess[a+2][b-2]!=d||chess[a-4][b+4]!=d)&&a-4>=MIN_MARGIN&&a+2<=MAX_MARGIN&&b-2>=MIN_MARGIN&&b+4<=MAX_MARGIN)
		{
			count=3;
			store[i]=count;
			i++;
		}	
		else if(chess[a+1][b-1]==c&&chess[a+2][b-2]==c&&chess[a-1][b+1]!=d&&chess[a+3][b-3]!=d&&(chess[a-2][b+2]!=d||chess[a+4][b-4]!=d)&&a-2>=MIN_MARGIN&&a+4<=MAX_MARGIN&&b-4>=MIN_MARGIN&&b+2<=MAX_MARGIN)
		{
			count=3;
			store[i]=count;
			i++;
		} 
		else if(chess[a+1][b-1]==c&&chess[a+3][b-3]==c&&chess[a+2][b-2]!=d&&chess[a-1][b+1]!=d&&chess[a+4][b-4]!=d&&a-1>=MIN_MARGIN&&a+4<=MAX_MARGIN&&b-4>=MIN_MARGIN&&b+1<=MAX_MARGIN)
		{
			count=3;
			store[i]=count;
			i++;
		}
		else if(chess[a-1][b+1]==c&&chess[a-3][b+3]==c&&chess[a-2][b+2]!=d&&chess[a+1][b-1]!=d&&chess[a-4][b+4]!=d&&a-4>=MIN_MARGIN&&a+1<=MAX_MARGIN&&b-1>=MIN_MARGIN&&b+4<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		} 
		else if(chess[a-1][b+1]==c&&chess[a+1][b-1]==c&&chess[a-2][b+2]!=d&&chess[a+2][b-2]!=d&&(chess[a+3][b-3]!=d||chess[a-3][b+3]!=d)&&a-3>=MIN_MARGIN&&a+3<=MAX_MARGIN&&b-3>=MIN_MARGIN&&b+3<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		}
		else if(chess[a-1][b+1]==c&&chess[a+2][b-2]==c&&chess[a+1][b-1]!=d&&chess[a-2][b+2]!=d&&chess[a+3][b-3]!=d&&a-2>=MIN_MARGIN&&a+3<=MAX_MARGIN&&b-3>=MIN_MARGIN&&b+2<=MAX_MARGIN)
		{
			count=2;
			store[i]=count;
			i++;
		}
		else if(chess[a+1][b-1]==c&&chess[a-2][b+2]==c&&chess[a-1][b+1]!=d&&chess[a+2][b-2]!=d&&chess[a-3][b+3]!=d&&a-3>=MIN_MARGIN&&a+2<=MAX_MARGIN&&b-2>=MIN_MARGIN&&b+3<=MAX_MARGIN)
		{
			count=2;
			store[i]=count;
			i++;
		}
		else if(chess[a-3][b+3]==c&&chess[a-2][b+2]==c&&chess[a-1][b+1]!=d&&chess[a+1][b-1]!=d&&chess[a-4][b+4]!=d&&a-4>=MIN_MARGIN&&a+1<=MAX_MARGIN&&b-1>=MIN_MARGIN&&b+4<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		}
		else if(chess[a+3][b-3]==c&&chess[a+2][b-2]==c&&chess[a+1][b-1]!=d&&chess[a-1][b+1]!=d&&chess[a+4][b-4]!=d&&a-1>=MIN_MARGIN&&a+4<=MAX_MARGIN&&b-4>=MIN_MARGIN&&b+1<=MAX_MARGIN)
		{
			count=1;
			store[i]=count;
			i++;
		}
	}
	
	count=0;
	for(j=0;j<i;j++)
	{
		count=count+store[j];
	}
	if(i<2)
	{
		count=0;
	}
	return count;
}

void random_chess(int a,int b)
{
	/*srand((unsigned int)time(NULL));
	int t=0;
	while(t<30)
	{
		int i=rand()%4-2;
		int j=rand()%4-2;
		a+=i;
		b+=j;
		if(!chess[a][b])
		{
			chess[a][b]=2;
			break;
		}
		t++;
	}
	if(t<30)
	{
		return 1;
	}
	else
	{
		return 0;
	}*/
	while(chess[15+step1][15+step2])
	{
		int p=probality();
		if(p>25&&p<=50)
		{
			step1++;
		}
		else if(p<=25)
		{
			step1--;
		}
		else if(p>50&&p<=75)
		{
			step2--;
		}
		else if(p>75)
		{
			step2++;
		}	
	}
	chess[15+step1][15+step2]=2;
}

int winer(void)
{
	int i,j;
	int win=0;
	for(i=0;i<30;i++)
	{
		for(j=0;j<30;j++)
		{
			if(chess[i][j]==1&&chess[i+1][j]==1&&chess[i+2][j]==1&&chess[i+3][j]==1&&chess[i+4][j]==1)
			{
				win=1;
				break;
			}
			else if(chess[i][j]==1&&chess[i][j+1]==1&&chess[i][j+2]==1&&chess[i][j+3]==1&&chess[i][j+4]==1)
			{
				win=1;
				break;
			}
			else if(chess[i][j]==1&&chess[i+1][j+1]==1&&chess[i+2][j+2]==1&&chess[i+3][j+3]==1&&chess[i+4][j+4]==1)
			{
				win=1;
				break;
			}
			else if(chess[i][j]==1&&chess[i+1][j-1]==1&&chess[i+2][j-2]==1&&chess[i+3][j-3]==1&&chess[i+4][j-4]==1)
			{
				win=1;
				break;
			}
			else if(chess[i][j]==2&&chess[i][j+1]==2&&chess[i][j+2]==2&&chess[i][j+3]==2&&chess[i][j+4]==2)
			{
				win=2;
				break;
			}
			else if(chess[i][j]==2&&chess[i+1][j]==2&&chess[i+2][j]==2&&chess[i+3][j]==2&&chess[i+4][j]==2)
			{
				win=2;
				break;
			}
			else if(chess[i][j]==2&&chess[i+1][j+1]==2&&chess[i+2][j+2]==2&&chess[i+3][j+3]==2&&chess[i+4][j+4]==2)
			{
				win=2;
				break;
			}
			else if(chess[i][j]==2&&chess[i-1][j+1]==2&&chess[i-2][j+2]==2&&chess[i-3][j+3]==2&&chess[i-4][j+4]==2)
			{
				win=2;
				break;
			}
		}
		if(win)
		{
			break;
		}
	}
	return win;
}
