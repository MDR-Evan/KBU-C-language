#include <stdio.h>
main()
{
	int a,b=0;
	
	for (a =1; a<=20; a=a+2) {
	b = b+a;
	printf("%d + ", a );
	}
	
	printf(" = %d \n", b);

	system("pause");
}

