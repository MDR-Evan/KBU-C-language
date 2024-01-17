#include <stdio.h>
main()
{
int a, b;
int result;
printf("a 입력 : ");
scanf("%d", &a);
printf("b 입력 : ");
scanf("%d", &b);
result = a + b;
printf("더하기 : %d + %d = %d \n", a, b, result);
system("pause");
}
