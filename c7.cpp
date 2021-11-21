#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int U0=1,U1=1,Un,n,i;
	
	
	printf("entrez le nombre de terme de la suite de Fibonacci \n");
	scanf("%d",&n);
	
		for(i=1;i<=n;i++)
		{
		 if(i<=1)
		 {
		 	Un=1;
	
		 }
		 else
		 {
		 	Un=U0+U1;
		 	U0=U1;
		 	U1=Un;
		 }
		 
		 
		}
		printf("la suite fibonacci nombre %d est %d \n",n,Un);
	return 0;
}
