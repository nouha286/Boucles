#include<stdio.h>

int L,i,j;

int main()
{
	printf("entrez le nombre de ligne que vous souhaitez dans votre pyramide \n");
	scanf("%d",&L);
	
		for(i=1;i<=L;i++)
		{
			for(j=1;j<=L-i;j++)
			{
				printf("  ");
			}
			for(j=1;j<=(2*i-1);j++)
			{
				printf("* ");
			}
			printf("\n");
		}
}
