#include <stdio.h>
main()
{
	int i, dan;
	
	printf("¸î ´Ü?");
	scanf("%d",&dan);
	
	for(i=1;i<=9;i++){
		printf("%d X %d = %d\n",dan,i,dan*i);
	}
}
