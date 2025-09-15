#include "header.h"

void triangle(void) {
	double width, height;

	printf("삼각형의 가로 길이를 입력하세요: ");
	scanf("%lf", &width);

	printf("삼각형의 세로 길이를 입력하세요: ");
	scanf("%lf", &height);

	printf("삼각형의 넓이: %.2lf\n", (width * height) / 2);
}

void rectangle(void) {
	double width, height;

	printf("사각형의 가로 길이를 입력하세요: ");
	scanf("%lf", &width);

	printf("사각형의 세로 길이를 입력하세요: ");
	scanf("%lf", &height);

	printf("사각형의 넓이: %.2lf\n", width * height);
}

void circle(void) {
	double radius;

	printf("원형의 반지름 길이를 입력하세요: ");
	scanf("%lf", &radius);

	printf("원의 넓이: %.2lf\n", radius * radius * 3.141592);
}