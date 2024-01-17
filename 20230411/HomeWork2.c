#include <stdio.h>
main()
{
	int num;
	
	printf("성적 : ");
	scanf("%d",&a);
	
	if (num >= 90 && num <= 100){
		printf("A 학점 \n");
		}
	else if(num >= 80 && num < 90){
	printf("B 학점 \n");
	}
	else if(num >= 70 && num < 80){
	printf("C 학점 \n");
	}
	else if(num >= 60 && num < 70){
	printf("D 학점 \n");
	}
	else if(a >= 0 && a < 60){
	printf("D 학점 \n");
	}
	else
		{printf("f 학점 \n");}
}
