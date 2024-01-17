#include <stdio.h>
main()
{
	int a;
	
	printf("입력값 : ");
	scanf("%d",&a);
	
	if(a<100)
		{
		printf("100보다 작군요\n",&a);
		printf("참이면 이 문장도 보이겠죠?\n",&a);
		}
	else
		{
		printf("100보다 크군요\n",&a);
		printf("거짓이면 이 문장도 보이겠죠?\n",&a);
		}
	printf("프로그램 끝!\n");
}
