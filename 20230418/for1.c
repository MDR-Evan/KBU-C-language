#include <stdio.h>
main()
{
	int i, hap=0;
	
	for (i=1; i<=100; i=i+2){
		hap++;
		printf("%d ",i);
	}

	printf("\n�μ� ���ڴ� %d�� \n",hap);
}
