#include <stdio.h>
main()
{
	int a,b,c;
	
	printf("������ �Է��ϼ���.\n");
	
	printf("���� ���� :");
	scanf("%d",&a);
	printf("���� ���� :");
	scanf("%d",&b);
	printf("���� ���� :");
	scanf("%d",&c);
	printf("=======================\n");
	printf("��� ���� = %d\n",(a+b+c)/3);
	printf("=======================\n");
	if ((a+b+c)/3>=60){
	printf("�հ� �Դϴ�.\n");
	}
	else{
	printf("���հ� �Դϴ�.\n");	
	}
	printf("=======================\n");
	
	system("pause");
}
