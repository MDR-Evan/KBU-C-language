#include <stdio.h>
main()
{
	int a, num1, num2;

	printf("ù��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d",&num1);
	printf("<1>���� <2>���� <3>���� <4>������ ==> ");
	scanf("%d",&a);
	printf("�ι�° ����� ���� �Է��ϼ��� ==> ");
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
		printf("\nError!\n�� ������ �������� �ʴ� �����Դϴ�.");
}
