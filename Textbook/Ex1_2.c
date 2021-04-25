// 예제 1-2

#include <stdio.h> // printf()와 scanf()를 사용하기 위한 헤더 파일 포함
#pragma warning(disable:4996)  // 권장하지 않는 함수 사용에 대한 경고 메세지 무시

int a, b, c; // 정수를 저장하는 변수 선언
int product(int x, int y);  // 사용자 함수 product 원형 --> 왜 있을까?

void main() {
	// 첫 번째 수 a 입력
	printf("Enter a number between 1 and 100 : ");
	scanf("%d", &a); // a라는 변수가 저장된 공간의 주소에 %d 의 숫자(int)를 입력하는 경우 &을 넣음. 문자열의 경우 문자열 자체가 주소임

	// 두 번째 수 b 입력
	printf("Enter another number between 1 and 100 : ");
	scanf("%d", &b);

	// 함수 호출 및 두 수를 곱하여 결과 출력
	c = product(a, b);
	printf("%d * %d = %d \n", a, b, c);
}

int product(int x, int y) {
	return (x * y);
}