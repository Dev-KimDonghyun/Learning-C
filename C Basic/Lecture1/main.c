#include "header.h"

int main(void) {
	char choice = 0;
	char name[15];
	char gender;
	double weight;
	int age;

	while (1) {
		printf("메뉴 선택(n 이름, g 성별, w 몸무게, a 나이, q 종료) : ");
		scanf(" %c", &choice);

		if (choice == 'q') {
			printf("프로그램 종료\n");
			exit(0);
		}
		else if (choice == 'n') {
			printf("이름을 입력하세요 : ");
			scanf("%s", name);
			func1(name);
		}
		else if (choice == 'g') {
			printf("성별을 입력하세요 : ");
			scanf(" %c", &gender);
			func2(gender);
		}
		else if (choice == 'w') {
			printf("몸무게를 입력하세요 : ");
			scanf("%lf", &weight);
			func3(weight);
		}
		else if (choice == 'a') {
			printf("나이를 입력하세요 : ");
			scanf("%d", &age);
			func4(age);
		}
		else {
			printf("잘못된 입력입니다. 다시 선택해주세요.\n");
		}
		system("pause");
		system("cls");
	}
	return 0;
}