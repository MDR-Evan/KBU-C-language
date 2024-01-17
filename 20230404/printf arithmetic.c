#include <stdio.h>
main()
{
	int a,b;
	int result;
	
	a=10;
	b=3;
	
	result = a+b;
	printf("더하기 = %d ＋ %d = %d \n",a,b,result);
	
	result = a-b;
	printf("빼  기 = %d － %d = %d \n",a,b,result);
	
	result = a*b;
	printf("곱하기 = %d × %d = %d \n",a,b,result);
	
	result = a/b;
	printf("나누기 = %d ÷ %d = %d \n",a,b,result);
	
	system("pause");
}
