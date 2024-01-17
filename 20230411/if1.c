#include <stdio.h>
main()
{
	int a, num1, num2;

	printf("첫번째 계산할 값을 입력하세요 ==> ");
	scanf("%d",&num1);
	printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 ==> ");
	scanf("%d",&a);
	printf("두번째 계산할 값을 입력하세요 ==> ");
	scanf("%d",&num2);


	if(a==1)
		printf("%d + %d = %d",num1,num2,num1+num2);
		
	if(a==2)
		printf("%d - %d = %d",num1,num2,num1-num2);

	if(a==3)
		printf("%d * %d = %d",num1,num2,num1*num2);
	
	if(a==4)
		printf("%d / %d = %d",num1,num2,num1/num2);

	else
		printf("\nError!\n이 공식은 성립되지 않는 공식입니다.");
}
