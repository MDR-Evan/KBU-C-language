#include<stdio.h>
main()
{
	int i,hap;
	
	for(i=1;i<=100;i++){
		if(i%3==0){
		hap=hap+i;
		printf("%d ",i);	
		}
	}
	printf("\n = %d",hap);
}

