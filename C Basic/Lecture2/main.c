#include "header.h"

int main(void) {
	char choice = 0;

	while (1) {
		printf("�޴� ���� : (A�� �ﰢ��, B�� �簢��, C�� ����)\n");
		scanf(" %c", &choice);

		if (choice == '0' || choice == 'q') {
			printf("���α׷��� �����մϴ�.\n");
			exit(0);
		}
		else if (choice == 'A' || choice == 'a') {
			triangle();
		}
		else if (choice == 'B' || choice == 'b') {
			rectangle();
		}
		else if (choice == 'C' || choice == 'c') {
			circle();
		}
		else {
			printf("�߸��� �Է��Դϴ�.\n");
		}
		system("pause");
		system("cls");
	}

	return 0;
}