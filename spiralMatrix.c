#include<stdio.h>

#define MAX 100000

int A[MAX][MAX];

int main()
{
	
	int i,j,k,num;
	
	int startR,startC,endR,endC,numR,numC;
	k=0;
	
	scanf("%d",&numR);
	scanf("%d",&numC);
		
	for(i=0;i<numR;i++)
	{
		for(j=0;j<numC;j++)
		{
			scanf("%d",&A[i][j]);	
		}	
	}
	

	
	
	
		startR = 0;
		startC = 0;
		endR = numR-1;
		endC = numC-1;
	
	while(startR<=endR && startC<=endC)
	{ 
		for(i=startC ; i<= endC ;i++)
		{
			printf("%d ",A[startR][i]);
		}
		for( i=startR+1 ; i<=endR ; i++ )
		{
			printf("%d ",A[i][endC]);
		}
		
		if(startR < endR)
		for( i=endC-1 ; i>=startR ; i-- )
		{
			printf("%d ",A[endR][i]);
		}
		
		if(startC != endC)
		for( i=endR-1 ; i>startR ; i-- )
		{
			printf("%d ",A[i][startC]);
		}
		
		startR++;
		startC++;
		endR--;
		endC--;
	}
	
	return 0;
	
	
	
}
