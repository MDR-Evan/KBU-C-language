#include<stdio.h>
main()
{
	int i,k;
	
	for(i=0; i<100;i++){
		if(i%3==0){
			k=k+i;
			printf("%d + ",i);
		}
	}
	printf("=%d",k);
}
