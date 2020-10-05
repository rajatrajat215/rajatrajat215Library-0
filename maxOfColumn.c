#include<stdio.h>

#define MAX 100000

int A[MAX][MAX];

int main()
{
	
	int i,j,k,num;
	
	int numR,numC,sum,max;
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
	

	
	for(i=0;i<numR;i++)
	{ 
		max = A[0][j];
			for(j=0;j<numC;j++)
			{
				if(A[j][i] > max)
					max = A[j][i]; 
						
			}	
		printf("%d ",max);
	}

	

return 0;
}
