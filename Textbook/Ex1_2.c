// 예제 1-2

#include <stdio.h>				// printf()와 scanf()등 표준 함수를 사용하기 위한 헤더 파일 stdio.h 호출
#pragma warning(disable:4996)  // #pragma : 컴파일러의 전처리 구문의 하나로, 컴파일러에 정보를 전달하는 역할을 한다.
							   // warning(disable:4996) : 권장하지 않는 함수 사용에 대한 경고 메세지 무시

int a, b, c;				 // 정수를 저장하는 변수 a, b, c 선언
int product(int x, int y);  // 사용자 함수 product 원형 선언 : 반환값의 자료형은 int(정수형), 입력 변수 x, y의 자료형 모두 int(정수형)

void main() {				// 반환값이 없는(void) 메인 함수 선언
	/* 첫 번째 수를 입력*/
	printf("Enter a number between 1 and 100 : "); // "Enter a number between 1 and 100 : "를 실행 화면에 출력
	scanf("%d", &a); // scanf 함수 : 지정한 형식에 맞춰 내용을 입력하면, 함수에서 지정한 형태의 자료형으로 지정된 변수의 주소에 값을 저장한다.
					 // a라는 변수가 저장된 공간의 주소에 %d 의 숫자(int)를 입력
					 // %d는 Decimal을 의미하며, 십진수 정수형의 값을 의미한다.

	/* 두 번째 수를 입력*/
	printf("Enter another number between 1 and 100 : "); // "Enter a number between 1 and 100 : "를 실행 화면에 출력
	scanf("%d", &b); // b라는 변수가 저장된 공간의 주소(&b)에 %d 의 숫자(int)를 입력

	/* 함수 호출에 의해 두 수를 곱하고 결과를 출력*/
	c = product(a, b); // product 함수를 통해 정수 a, b를 더하고 결과값을 c에 저장
	printf("%d * %d = %d \n", a, b, c); //  정수 a, b와 함수 product를 통해 얻은 둘의 곱셈 결과 정수 c를 printf 함수로 지정한 형식에 맞게 실행화면에 출력
}
/* 두 수의 곱을 계산하여 돌려주는 사용자 함수*/
int product(int x, int y) { // 함수 product의 내용 정의
	return (x * y);			// 함수 product의 결과로 정수 x와 정수 y의 곱을 함수의 결과값으로 반환(return)
}