#include <stdio.h>
main()
{
	int a;
	
	printf("나이 : ");
	scanf("%d",&a);
	
	if(a<=18||a>=70)
		printf("무료이용\n");
		
	else
		printf("기본요금\n");
 } 
