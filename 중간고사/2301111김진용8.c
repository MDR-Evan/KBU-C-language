#include <stdio.h>
main()
{
	int a,b,c;
	
	printf("성적을 입력하세요.\n");
	
	printf("국어 성적 :");
	scanf("%d",&a);
	printf("영어 성적 :");
	scanf("%d",&b);
	printf("수학 성적 :");
	scanf("%d",&c);
	printf("=======================\n");
	printf("평균 점수 = %d\n",(a+b+c)/3);
	printf("=======================\n");
	if ((a+b+c)/3>=60){
	printf("합격 입니다.\n");
	}
	else{
	printf("불합격 입니다.\n");	
	}
	printf("=======================\n");
	
	system("pause");
}
