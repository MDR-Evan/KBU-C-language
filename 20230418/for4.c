#include <stdio.h>
main()
{
	int i;
	int hap=0;
	
	for(i=1; i<=10; i++){
		hap=hap+i;
		printf("%d ",i);
	}
	printf("\n1에서 10까지의 합 : %d개\n",hap);
	}
