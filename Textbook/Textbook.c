// 교재 예제 풀이

// 예제 1-1

//#include <stdio.h>  // 헤더 파일 추가
//void main() { // 메인 함수 시작
//	printf("Hello~ \n"); // 모니터에 문자열 출력
//} // 메인 함수 끝
//

// 주석화 Ctrl+K 이후 Ctrl+C(해제는 Ctrl+U)


// 예제 1-2

//#include <stdio.h> // printf()와 scanf()를 사용하기 위한 헤더 파일 포함
//#pragma warning(disable:4996)  // 권장하지 않는 함수 사용에 대한 경고 메세지 무시
//
//int a, b, c; // 정수를 저장하는 변수 선언
//int product(int x, int y);  // 사용자 함수 product 원형 --> 왜 있을까?
//
//void main() {
//	// 첫 번째 수 a 입력
//	printf("Enter a number between 1 and 100 : ");
//	scanf("%d", &a); // a라는 변수가 저장된 공간의 주소에 %d 의 숫자(int)를 입력하는 경우 &을 넣음. 문자열의 경우 문자열 자체가 주소임
//
//	// 두 번째 수 b 입력
//	printf("Enter another number between 1 and 100 : ");
//	scanf("%d", &b);
//
//	// 함수 호출 및 두 수를 곱하여 결과 출력
//	c = product(a, b);
//	printf("%d * %d = %d \n", a, b, c);
//}
//
//int product(int x, int y) {
//	return (x * y);
//}


// 예제 2-1

//#include <stdio.h>
//
//void main() {
//	int a, b;   // 정수형 변수 a, b 선언
//	a = 100;  
//	b = 50;
//	printf("a = %d, b = %d \n", a, b); // 정수형 변수 a, b 출력
//}


// 예제 2-2

//#include <stdio.h>
//#include <limits.h> //정수 자료형 최솟값, 최댓값 표현 헤더
//
//void main() {
//	char ch1 = CHAR_MIN; //Char 최솟값
//	char ch2 = CHAR_MAX; //Char 최댓값
//	short sh1 = SHRT_MIN; //Short 최솟값
//	short sh2 = SHRT_MAX; //Short 최댓값
//	int in1 = INT_MIN; //INT 최솟값
//	int in2 = INT_MAX; //INT 최댓값
//	long lo1 = LONG_MIN; //Long 최솟값
//	long lo2 = LONG_MAX; //Long 최댓값
//	long long ll1 = LLONG_MIN; //Long Long 최솟값
//	long long ll2 = LLONG_MAX; //Long Long 최댓값
//
//	printf("char 자료형 범위 : %d ~ %d \n", ch1, ch2);
//	printf("short 자료형 범위 : %d ~ %d \n", sh1, sh2);
//	printf("int 자료형 범위 : %d ~ %d \n", in1, in2);
//	printf("long 자료형 범위 : %ld ~ %ld \n", lo1, lo2); // long은 %ld
//	printf("long long 자료형 범위 : %lld ~ %lld \n", ll1, ll2); // long long은 %lld로 나타내야 함.
//}



// 예제 2-3

//#include <stdio.h>
//void main() {
//	char ch1;
//	char ch2;
//	ch1 = 7; // 십진수 7 저장
//	ch2 = '7'; // 7의 ASCII CODE 값인 55 저장
//	printf("ch1의 ASCII 코드값 = %d, ASCII 문자 %c \n", ch1, ch1); // %c = ASCII CODE 값
//	printf("ch2의 ASCII 코드값 = %d, ASCII 문자 %c \n", ch2, ch2);
//}



// 예제 2-4

//#include <stdio.h>
//void main() {
//	char ch;
//	int in;
//	ch = in = 'A';
//	printf("ch = %d \n", ch);
//	printf("in = %d \n", in);
//	printf("------- \n");
//	ch = in = 100;
//	printf("ch = %c \n", ch); // ASCII CODE 100에 해당하는 d가 출력됨
//	printf("in = %c \n", in);
//}



// 예제 2-5

//#include <stdio.h>
//void main() {
//	int num1 = 104;   // 10진수 104저장
//	int num2 = 0150;  // 8진수 150 저장 (숫자 앞에 0 입력)
//	int num3 = 0x68;  // 16진수 68 저장
//	// num1, num2, num3에 저장된 정수를 10진수로 출력
//	printf("num1에 저장된 정숫값은 : %d \n", num1);
//	printf("num2에 저장된 정숫값은 : %d \n", num2);
//	printf("num3에 저장된 정숫값은 : %d \n", num3);
//}

// 예제 2-6

//#include <stdio.h>
//void main() {
//	enum day1 { SUN, MON, TUE, WED, THU, FRI, SAT } d1;   // 열거형에서 기본으로 시작하는 숫자는 0
//	enum day2 { sun = 2, mon, tue, wed, thu, fri, sat} d2; // 정숫값을 지정해주면 그 값부터 시작 (정수만 지정 가능)
//	d1 = WED;
//	d2 = wed;
//	printf("열거형 d1 저장된 값은 %d 입니다. \n", d1);
//	printf("열거형 d2 저장된 값은 %d 입니다. \n", d2);
//}


// 예제 2-7

//#include <stdio.h>
//void main() {
//	short int num1, num2;
//	num1 = 32767 + 1; // short int형의 범위를 벗어남
//	num2 = -32768 - 1; // short int형의 음수 범위를 벗어남
//	printf("num1 = %d\n", num1);
//	printf("num2 = %d\n", num2);
//
//}


// 예제