#include <stdio.h>
// 90 ~ 100 A, 80 ~ 90 B, 70 ~ 80  C, 60 ~ 70 D, 60 ~ 0 F
// && = AND
main() {
    int num;
    printf("성적을 입력하세요: ");
    scanf("%d", &num);

    if (num >= 90 && num <= 100) {
        printf("A");
    } 
	else if (num >= 80 && num < 90) {
        printf("B");
    } 
	else if (num >= 70 && num < 80) {
        printf("C");
    } 
	else if (num >= 60 && num < 70) {
        printf("D");
    } 
	else if (num >= 0 && num < 60) {
        printf("F");
    } 
	else {
        printf("잘못된 입력입니다");
    }

}
