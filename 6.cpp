#include <stdio.h>

int main()
{
	int NB,i,j,p;
	
	printf("donner un nombre :\n");
	scanf("%d",&NB);
	
	for(i=2;i<=NB;i++)
	{
		p=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
			p=1; 
			break;
			}
			
		}
		if(p==0) printf(" les nombres premires infirieur a %d sont %d \n",NB,i);
	}
	
	
	return 0;
}
