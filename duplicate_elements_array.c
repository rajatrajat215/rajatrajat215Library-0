#include<stdio.h>

int main()
{
	int A[]={5,1,18,14,3,7,3,4,4,2,7};

	int size = sizeof(A)/sizeof(int);
	//int size = 9;
	int i,j,flagl=0,flagr=0;


	for(i=0;i<size-1;i++)
	{	
		flagr=0;
		flagl=0;

		for(j=0;j<i;j++)/* Making Left Scan in an array before i th element */
		{
			if(A[i]==A[j])
			{
				flagl=1;
			}
		}
		if(flagl==0)  /* Making Right Scan in an array after i th element */
		{ 
			for(j=i+1;j<size;j++)
			{
				if(A[i]==A[j])
				{
					printf("%d\n",A[i]);
				}
			}

		}
	}

}
