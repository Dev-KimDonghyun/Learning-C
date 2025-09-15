#include "header.h"

int main(void) {
	char choice = 0;

	while (1) {
		printf("메뉴 선택 : (A는 삼각형, B는 사각형, C는 원형)\n");
		scanf(" %c", &choice);

		if (choice == '0' || choice == 'q') {
			printf("프로그램을 종료합니다.\n");
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
			printf("잘못된 입력입니다.\n");
		}
		system("pause");
		system("cls");
	}

	return 0;
}