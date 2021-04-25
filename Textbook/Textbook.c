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
//}


// 예제 2-8

//#include <stdio.h>
//void main() {
//	int num1, num2;
//	num1 = 32767 + 1;
//	num2 = -32768 - 1;
//	printf("num1 = %d\n", num1);
//	printf("num2 = %d\n", num2);
//}


// 예제 2-9

//#include <stdio.h>
//int a = 100; // 전역변수 a
//void func()
//{
//	int a = 200;
//	printf("func()에서 a의 값 ==> %d \n", a); //func()의 지역변수 a 출력
//
//}
//
//int main() {
//	printf("main()에서 a의 값 ==> %d \n", a); //전역변수 출력
//	func();
//
//}


// 예제 2-10
// 
//#include <stdio.h>
//void main() {
//	int i, sum;
//	for (i = 1, sum = 0; i <= 10; i++) // 변수 i, sum 초기화
//		sum = sum + i;
//	printf("1부터 10까지의 합 = %d \n", sum);
//}

// 예제 2-11 생략
// 예제 2-12 매크로 상수의 사용(예)
//#include <stdio.h>
//#define ADDR "서울시 종로구 대학로 86(동숭동)"
//#define TEL "1577-999520"
//
//void main() {
//	printf("한국방송통신대학교 주소 : %s \n", ADDR);
//	printf("전화번호 : %s \n", TEL);
//
//}

// 예제 2-13 매크로 함수의 사용
//#include <stdio.h>
//# define Hap1(x,y) x + y
//# define Hap2(x,y) ((x)+(y))
//# define Gop1(x,y) x * y
//# define Gop2(x,y) ((x)*(y))
//
//void main() {
//	int h1, h2, g1, g2;
//	h1 = 10 * Hap1(3, 4);
//	h2 = 10 * Hap2(3, 4);
//	g1 = Gop1(1 + 2, 3 + 4);
//	g2 = Gop2(1 + 2, 3 + 4);
//	printf("h1 = %d, h2 = %d \n", h1, h2);
//	printf("g1 = %d, g2 = %d \n", g1, g2);
//
//}

// 예제 2-14 조건부 컴파일
//#include <stdio.h>
//#define CONDITION 1
//
//void main() {
//#if CONDITION
//	printf("\n A 프로그램을 컴파일");
//#else
//	printf("\n B 프로그램을 컴파일");
//#endif
//}


// 메인 예제 2-2
//#include <stdio.h>
//#define IN "원의 반지름은 100입니다. \n"
//#define PI 3.1415926535
//#define AREA(X) (PI*(X)*(X))
//#define OUT printf("원의 면적을 구하고 프로그램을 종료합니다.\n")
//void main()
//{
//	printf("%s \n" IN);
//	printf("원의 면적은 %10.5f입니다. \n\n", AREA(100));
//	OUT;
//}


// 메인 예제 2-3
//#include "exam2-3.h" //직접 만든 헤더파일은 ""로 감싸기
//void main() {
//	int add_result, sub_result;
//	printf("10과 5를 더하면 %d이다. \n", ADD(10, 5));
//	printf("10에서 5를 빼면 %d이다. \n", SUB(10, 5));
//
//}


// 예제 3-1
//#include <stdio.h>
//void main() {
//	char c = 'A';
//	int i = 10, j = 20, k = 30;
//	//printf()문의 인용부호 내 문자가 화면에 출력됨
//	printf("간단한 출력 프로그램 \n");
//	// 변수 c는 순서대로 %c와 %d에 대응됨
//	printf("c = %c, c의 아스키 코드값은 %d \n", c, c);
//	// 변수 i, j, k는 순서대로 %문자와 대응됨
//	printf("i = %d, j = %d, k = %d", i, j, k);
//}


// 예제 3-2
//#include <stdio.h>
//void main() {
//	printf("%%d : %d\n", 2147483647);
//	printf("%%ld : %d\n", 2147483647);
//	printf("%%lld : %\n", 9223372036854775807);
//	printf("%%u : %u\n", 4294967295);
//	printf("%%o : %o\n", 4294967295);
//	printf("%%x : %x\n", 4294967295);
//	printf("%%X : %X\n", 4294967295);
//	printf("%%f : %f\n", 1234.5678);
//	printf("%%lf : %lf\n", 1234.5678);
//	printf("%%e : %e\n", 1234.5678);
//	printf("%%c : %c\n", 'a');
//	printf("%%s : %s\n", "knou");
//	
//	printf("test", 123);
//	printf("test %d");
//}


// 예제 3-3
//#include <stdio.h>
//void main() {
//	printf("|%d| \n", 123);
//	printf("|%5d| \n", 123);
//	printf("|%-5d| \n", 123);
//	printf("|%05d| \n", 123);
//	printf("|%6.1f| \n", 123.45);
//	printf("|%07.2f| \n", 123.45);
//}


// 예제 3-4
//#include <stdio.h>
//#pragma warning(disable:4996) // 권장하지 않는 함수 경고 무시
//void main() {
//	int a;
//	long long int b;
//	float c;
//	char ch;
//	char s[20]; // (20bytes 만큼의 입력 공간 할당(null값 공간 1 제외))
//	printf("정수와 long long 정수를 입력 : ");
//	scanf("%d %lld", &a, &b);
//	printf("a = %d, b = %lld \n", a, b);
//	printf("실수를 입력 : ");
//	scanf("%f", &c);
//	printf("c = %10.4f, c(지수) = %e \n", c, c);
//	printf("문자를 입력 : ");
//	scanf(" %c", &ch);
//	// 앞의 scanf()를 입력할 때 누른 Enter를 무시하기 위해 %c 앞에 공백을 넣어야 함
//	printf("ch = %c \n", ch);
//	printf("문자열을 입력 : ");
//	scanf("%s", s);
//	printf("s[] = %s \n", s);
//}


// 예제 3-5
//#include <stdio.h>
//void main() {
//	char a;
//	printf("문자를 하나 입력하세요 \n");
//	a = getchar(); //한 문자가 입력되면 문자열 변수 a에 저장
//	printf("c = %c \n", a);
//}


// 예제 3-6
//#include <stdio.h>
//void main() {
//	char var = 'A';
//	putchar(var);
//	putchar(var + 1);
//	putchar('\n'); // 따옴표 한개는 ASCII 코드 값을 의미
//	putchar('K');
//	putchar('K' + 2);
//	putchar('\007');
//}


// 예제 3-7
//#include <stdio.h>
//#pragma warning(disable:4996)
//void main() {
//	char s[50];
//	printf("문자열 입력? : ");
//	gets(s);
//	printf("gets()로 문자열 입력 = %s \n", s);
//	printf("\n문자열 입력? : ");
//	scanf("%s", s); // 공백을 인식하지 못함
//	printf("scanf()로 문자열 입력 = %s \n", s);
//}


// 예제 3-8
//#include <stdio.h>
//void main() {
//	char s1[] = "Computer";
//	char s2[] = "Science";
//	puts(s1);
//	puts(s2);
//	printf("%s ", s1);
//	printf("%s", s2);
//}


// 예제 3-9
//#include <stdio.h>
//void main() {
//	int x, y;
//	x = 10;
//	y = 3;
//	printf("x+y = %d \n", x + y);
//	printf("x/y = %d \n", x / y);
//	printf("x %% y = %d \n", x % y);
//	printf("y %% x = %d \n", y % x);
//}


// 예제 3-10
//#include <stdio.h>
//void main() {
//	int a, b, c;
//	a = b = c = 0;
//	a = ++b + ++c;
//	printf("a = ++b + ++c 실행 후 a = %d, b = %d, c = %d \n", a, b, c);
//	a = b++ + c++;
//	printf("a = b++ + c++ 실행 후 a = %d, b = %d, c = %d \n", a, b, c);
//	a = b-- + --c;
//	printf("a = b-- + --c 실행 후 a = %d, b = %d, c = %d \n", a, b, c);
//}



// 예제 3-11
#include <stdio.h>
void main() {
	int a = 4, b, c, d;
	b = a > 2; // a가 2보다 큰가를 비교, 결과가 참이므로 b에 1 대입
	printf("b = %d \n", b);
	c = a < 2; // a가 2보다 작은가를 비교, 결과가 거짓이므로 c에 0 대입
	printf("c = %d \n", c);
	d = a == 4; // a가 4인가를 비교, 결과가 참이므로 d에 1 대입
	printf("d = %d \n", d);
}