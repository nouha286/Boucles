#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int fa,fb,a=-15,b=-10,div;
	 
	 div=(a+b)/2;
	while(b-a>0.00001)
	{
		fa=pow(a,3)+12*pow(a,2)+1;
		fb=pow(div,3)+12*pow(div,2)+1;
		div=(a+b)/2;
			if(fa*fb<0)
			{
				b=div;
			}
			
			if(fa*fb>0)
			{
				b=div;
			}
			
			
	}
	printf("entre %d et %d",a,b);
}
