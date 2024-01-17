#include <stdio.h>
main()
{
	int a;
	
	printf("나이 : ");
	scanf("%d",&a);
	
	if(a>=18)
		printf("성인입니다.\n");
		printf("입장하세요");
	
	else
		printf("미성년자입니다.\n");
		printf("입장불가입니다."); 
}
