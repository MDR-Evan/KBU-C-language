#include <stdio.h>
main()
{
	int a;
	printf("���� : ");
	scanf("%d",&a);
	
	if (a >= 90 && a <= 100) {
		printf("A");
	}
	
	else if (a >= 80 && a < 90) {
		printf("B"); 
	}
		
	else if (a >= 70 && a < 80) {
		printf("C");
	}
		
	else if (a >= 60 && a < 70) {
		printf("D");
	}
	else if (a >= 0 && a < 60) {
		printf("f");
	}
	else
		printf("�߸�� �Է��Դϴ�.".; 
} 
