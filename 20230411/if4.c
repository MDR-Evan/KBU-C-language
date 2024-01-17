#include <stdio.h>
main()
{
	int a;
	printf("숫자입력 : ");
	
	scanf("%d",&a);
	
	if(a<0)
	{
		printf("음수입니다.\n");
	 } 
	
	else
	{
		printf("양수입니다.\n");
	}
}
