#include <stdio.h>
main()
{
	int a;
	
	printf("����� �Է� : ");
	scanf("%d",&a);
	
	printf("========================\n");
	
	if (a%2==0)
		printf("�Է��� �� %d�� ¦���Դϴ�.\n", a);
	else
		printf("�Է��� �� %d�� Ȧ���Դϴ�.\n", a); 
}
