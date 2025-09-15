#include <stdio.h>

void func1(char* x) {
	printf("이름은 %s 입니다.\n", x);
}

void func2(char x) {
	printf("성별은 %c 입니다.\n", x); // %c로 수정
}

void func3(double x) {
	printf("몸무게는 %.2lf 입니다.\n", x);
}

void func4(int x) {
	printf("나이는 %d 입니다.\n", x);
}