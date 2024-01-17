#include <stdio.h>
main()
{	int a;

	printf("입력값 : ");
	scanf("%d",&a);
	
	if(a<100)
		printf("100보다 작군요..\n");
	
	else
		printf("100보다 크군요..\n");
}

