#include <stdio.h>
main()
{
	int i=1;
	int j=0;
	
	for(i=1; i<=100; i++){
		if(i%3==0){
		j++;
		printf("%d ",i);
		}
	}
	printf("\n�μ� ���ڴ� %d��\n",j);
	}
