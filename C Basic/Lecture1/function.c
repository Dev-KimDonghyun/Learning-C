#include <stdio.h>

void func1(char* x) {
	printf("�̸��� %s �Դϴ�.\n", x);
}

void func2(char x) {
	printf("������ %c �Դϴ�.\n", x); // %c�� ����
}

void func3(double x) {
	printf("�����Դ� %.2lf �Դϴ�.\n", x);
}

void func4(int x) {
	printf("���̴� %d �Դϴ�.\n", x);
}