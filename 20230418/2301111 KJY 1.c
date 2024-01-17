#include<stdio.h>
main()
{
	int i,hap;
	
	for(i=0;i<=100;i=i+3){
		hap=hap+i;
		printf("%d ",i);
	}
	printf("\n = %d",hap);
}

