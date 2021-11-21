#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int P,B,X,i;
	printf("entrez la base de la puissance \n ");
	scanf("%d",&B);
	printf("entrez l'exposant de la puissance \n ");
	scanf("%d",&X);
	 
	
	while((X<=0) || (B<0))
	{
		if(X<=0)
        {
            printf("Entrez un exposant supirieur a 0 \n");
            scanf("%d",&X);
        }
        else if(B<0)
        {
            printf("Entrez une base n supirieur ou egal a 0 \n");
        scanf("%d",&B);
        }
		
	}
while(X>0)
{
P=pow(B,X);
		printf(" %d a la puissance %d est %d \n",B,X,P);
X--;	
}
	
	
}
