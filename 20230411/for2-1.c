#include <stdio.h>
main()
{
	int i,j=0;
	
	for(i=1; i<=100; i=i+2)
		j=j+1;
		printf("%d",i);
	
	printf("\n 인쇄 숫자는 %d개\n",j);
}
