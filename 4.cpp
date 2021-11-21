#include<stdio.h>
#include<stdlib.h>

int N,somme,Max;

int main()
{
	Max=0;
	somme=0;
	N=1;
	
	printf("entrez une série de nombres inférieur à 100 et la terminez par la sisaie de nombre 0 \n ");
	

	
	while(N!=0)
	{
		
		scanf("%d",&N);
		
		while((N>100) || (N<0))
		{
			printf("entrez des nombres positif inférieur à 100 \n");
			scanf("%d",&N);
			
		}
		
		somme=somme+N;
		
	
		if(Max<N)
		{
			Max=N;
		}
		
	
	}
	
		printf("la somme est %d \n",somme);
		printf("le maximum est %d",Max);
		return 0;
}
