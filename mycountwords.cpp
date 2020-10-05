#include<stdio.h>
#include<conio.h>
#include<string.h>
#define OR ||
#define AND &&

int myCountWords(char *s)
{
		int len=strlen(s);
		int i=0;
		int start=0;
		int end=0;
		int count=0;
		
		while(s[i] != 0)
		{ 
			if(s[i] != ' ')
			{ 
				start = i;
				end = i;
				
				
				while(s[i] != ' ' AND s[i] != 0)
				{
					end++;
					i++;
				}
				
				if(end - start > 0)
					{
						count++;
					}
				
			}
			i++;
				
		}
		
		
		return count;
		
} 


int main()
{
	char s[]="This is very good";
	
	printf("%d",myCountWords(s));
	return 0;
	
}
