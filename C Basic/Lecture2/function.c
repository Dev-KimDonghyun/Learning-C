#include "header.h"

void triangle(void) {
	double width, height;

	printf("�ﰢ���� ���� ���̸� �Է��ϼ���: ");
	scanf("%lf", &width);

	printf("�ﰢ���� ���� ���̸� �Է��ϼ���: ");
	scanf("%lf", &height);

	printf("�ﰢ���� ����: %.2lf\n", (width * height) / 2);
}

void rectangle(void) {
	double width, height;

	printf("�簢���� ���� ���̸� �Է��ϼ���: ");
	scanf("%lf", &width);

	printf("�簢���� ���� ���̸� �Է��ϼ���: ");
	scanf("%lf", &height);

	printf("�簢���� ����: %.2lf\n", width * height);
}

void circle(void) {
	double radius;

	printf("������ ������ ���̸� �Է��ϼ���: ");
	scanf("%lf", &radius);

	printf("���� ����: %.2lf\n", radius * radius * 3.141592);
}