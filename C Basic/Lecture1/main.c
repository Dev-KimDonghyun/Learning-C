#include "header.h"

int main(void) {
	char choice = 0;
	char name[15];
	char gender;
	double weight;
	int age;

	while (1) {
		printf("�޴� ����(n �̸�, g ����, w ������, a ����, q ����) : ");
		scanf(" %c", &choice);

		if (choice == 'q') {
			printf("���α׷� ����\n");
			exit(0);
		}
		else if (choice == 'n') {
			printf("�̸��� �Է��ϼ��� : ");
			scanf("%s", name);
			func1(name);
		}
		else if (choice == 'g') {
			printf("������ �Է��ϼ��� : ");
			scanf(" %c", &gender);
			func2(gender);
		}
		else if (choice == 'w') {
			printf("�����Ը� �Է��ϼ��� : ");
			scanf("%lf", &weight);
			func3(weight);
		}
		else if (choice == 'a') {
			printf("���̸� �Է��ϼ��� : ");
			scanf("%d", &age);
			func4(age);
		}
		else {
			printf("�߸��� �Է��Դϴ�. �ٽ� �������ּ���.\n");
		}
		system("pause");
		system("cls");
	}
	return 0;
}