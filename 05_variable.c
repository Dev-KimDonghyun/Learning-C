// 2025.08.14
// 05_variable

# include <stdio.h>

int main() {
    float a = 3.141592f;
    double b = 3.141592;
    int c = 123;
    printf("a : %.2f \n", a); // 소수점 맞추기
    printf("c : %5d \n", c); // 자릿수 맞추기
    printf("b : %6.3f \n", b); // 자릿수, 소수점 맞췩
    return 0;
}