#include<stdio.h>
#include<stdlib.h>
int n,i,p;
int main()
{
	printf("entrez un nombre entier \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		p=0;
		if(n%i==0)
		{
			p++;
		}
		 
	}
	
	if(p>=2)
	{
		printf("le nombre est premier");
	}
	else
	{
		printf("le nombre n'est pas premier");
		
		}
}
