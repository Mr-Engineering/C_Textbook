// ���� ���� Ǯ��

// ���� 1-1

//#include <stdio.h>  // ��� ���� �߰�
//void main() { // ���� �Լ� ����
//	printf("Hello~ \n"); // ����Ϳ� ���ڿ� ���
//} // ���� �Լ� ��
//

// �ּ�ȭ Ctrl+K ���� Ctrl+C(������ Ctrl+U)


// ���� 1-2

//#include <stdio.h> // printf()�� scanf()�� ����ϱ� ���� ��� ���� ����
//#pragma warning(disable:4996)  // �������� �ʴ� �Լ� ��뿡 ���� ��� �޼��� ����
//
//int a, b, c; // ������ �����ϴ� ���� ����
//int product(int x, int y);  // ����� �Լ� product ���� --> �� ������?
//
//void main() {
//	// ù ��° �� a �Է�
//	printf("Enter a number between 1 and 100 : ");
//	scanf("%d", &a); // a��� ������ ����� ������ �ּҿ� %d �� ����(int)�� �Է��ϴ� ��� &�� ����. ���ڿ��� ��� ���ڿ� ��ü�� �ּ���
//
//	// �� ��° �� b �Է�
//	printf("Enter another number between 1 and 100 : ");
//	scanf("%d", &b);
//
//	// �Լ� ȣ�� �� �� ���� ���Ͽ� ��� ���
//	c = product(a, b);
//	printf("%d * %d = %d \n", a, b, c);
//}
//
//int product(int x, int y) {
//	return (x * y);
//}


// ���� 2-1

//#include <stdio.h>
//
//void main() {
//	int a, b;   // ������ ���� a, b ����
//	a = 100;  
//	b = 50;
//	printf("a = %d, b = %d \n", a, b); // ������ ���� a, b ���
//}


// ���� 2-2

//#include <stdio.h>
//#include <limits.h> //���� �ڷ��� �ּڰ�, �ִ� ǥ�� ���
//
//void main() {
//	char ch1 = CHAR_MIN; //Char �ּڰ�
//	char ch2 = CHAR_MAX; //Char �ִ�
//	short sh1 = SHRT_MIN; //Short �ּڰ�
//	short sh2 = SHRT_MAX; //Short �ִ�
//	int in1 = INT_MIN; //INT �ּڰ�
//	int in2 = INT_MAX; //INT �ִ�
//	long lo1 = LONG_MIN; //Long �ּڰ�
//	long lo2 = LONG_MAX; //Long �ִ�
//	long long ll1 = LLONG_MIN; //Long Long �ּڰ�
//	long long ll2 = LLONG_MAX; //Long Long �ִ�
//
//	printf("char �ڷ��� ���� : %d ~ %d \n", ch1, ch2);
//	printf("short �ڷ��� ���� : %d ~ %d \n", sh1, sh2);
//	printf("int �ڷ��� ���� : %d ~ %d \n", in1, in2);
//	printf("long �ڷ��� ���� : %ld ~ %ld \n", lo1, lo2); // long�� %ld
//	printf("long long �ڷ��� ���� : %lld ~ %lld \n", ll1, ll2); // long long�� %lld�� ��Ÿ���� ��.
//}



// ���� 2-3

//#include <stdio.h>
//void main() {
//	char ch1;
//	char ch2;
//	ch1 = 7; // ������ 7 ����
//	ch2 = '7'; // 7�� ASCII CODE ���� 55 ����
//	printf("ch1�� ASCII �ڵ尪 = %d, ASCII ���� %c \n", ch1, ch1); // %c = ASCII CODE ��
//	printf("ch2�� ASCII �ڵ尪 = %d, ASCII ���� %c \n", ch2, ch2);
//}



// ���� 2-4

//#include <stdio.h>
//void main() {
//	char ch;
//	int in;
//	ch = in = 'A';
//	printf("ch = %d \n", ch);
//	printf("in = %d \n", in);
//	printf("------- \n");
//	ch = in = 100;
//	printf("ch = %c \n", ch); // ASCII CODE 100�� �ش��ϴ� d�� ��µ�
//	printf("in = %c \n", in);
//}



// ���� 2-5

//#include <stdio.h>
//void main() {
//	int num1 = 104;   // 10���� 104����
//	int num2 = 0150;  // 8���� 150 ���� (���� �տ� 0 �Է�)
//	int num3 = 0x68;  // 16���� 68 ����
//	// num1, num2, num3�� ����� ������ 10������ ���
//	printf("num1�� ����� �������� : %d \n", num1);
//	printf("num2�� ����� �������� : %d \n", num2);
//	printf("num3�� ����� �������� : %d \n", num3);
//}

// ���� 2-6

//#include <stdio.h>
//void main() {
//	enum day1 { SUN, MON, TUE, WED, THU, FRI, SAT } d1;   // ���������� �⺻���� �����ϴ� ���ڴ� 0
//	enum day2 { sun = 2, mon, tue, wed, thu, fri, sat} d2; // �������� �������ָ� �� ������ ���� (������ ���� ����)
//	d1 = WED;
//	d2 = wed;
//	printf("������ d1 ����� ���� %d �Դϴ�. \n", d1);
//	printf("������ d2 ����� ���� %d �Դϴ�. \n", d2);
//}


// ���� 2-7

//#include <stdio.h>
//void main() {
//	short int num1, num2;
//	num1 = 32767 + 1; // short int���� ������ ���
//	num2 = -32768 - 1; // short int���� ���� ������ ���
//	printf("num1 = %d\n", num1);
//	printf("num2 = %d\n", num2);
//}


// ���� 2-8

//#include <stdio.h>
//void main() {
//	int num1, num2;
//	num1 = 32767 + 1;
//	num2 = -32768 - 1;
//	printf("num1 = %d\n", num1);
//	printf("num2 = %d\n", num2);
//}


// ���� 2-9

//#include <stdio.h>
//int a = 100; // �������� a
//void func()
//{
//	int a = 200;
//	printf("func()���� a�� �� ==> %d \n", a); //func()�� �������� a ���
//
//}
//
//int main() {
//	printf("main()���� a�� �� ==> %d \n", a); //�������� ���
//	func();
//
//}


// ���� 2-10
// 
//#include <stdio.h>
//void main() {
//	int i, sum;
//	for (i = 1, sum = 0; i <= 10; i++) // ���� i, sum �ʱ�ȭ
//		sum = sum + i;
//	printf("1���� 10������ �� = %d \n", sum);
//}

// ���� 2-11 ����
// ���� 2-12 ��ũ�� ����� ���(��)
//#include <stdio.h>
//#define ADDR "����� ���α� ���з� 86(������)"
//#define TEL "1577-999520"
//
//void main() {
//	printf("�ѱ������Ŵ��б� �ּ� : %s \n", ADDR);
//	printf("��ȭ��ȣ : %s \n", TEL);
//
//}

// ���� 2-13 ��ũ�� �Լ��� ���
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

// ���� 2-14 ���Ǻ� ������
//#include <stdio.h>
//#define CONDITION 1
//
//void main() {
//#if CONDITION
//	printf("\n A ���α׷��� ������");
//#else
//	printf("\n B ���α׷��� ������");
//#endif
//}


// ���� ���� 2-2
//#include <stdio.h>
//#define IN "���� �������� 100�Դϴ�. \n"
//#define PI 3.1415926535
//#define AREA(X) (PI*(X)*(X))
//#define OUT printf("���� ������ ���ϰ� ���α׷��� �����մϴ�.\n")
//void main()
//{
//	printf("%s \n" IN);
//	printf("���� ������ %10.5f�Դϴ�. \n\n", AREA(100));
//	OUT;
//}


// ���� ���� 2-3
//#include "exam2-3.h" //���� ���� ��������� ""�� ���α�
//void main() {
//	int add_result, sub_result;
//	printf("10�� 5�� ���ϸ� %d�̴�. \n", ADD(10, 5));
//	printf("10���� 5�� ���� %d�̴�. \n", SUB(10, 5));
//
//}


// ���� 3-1
//#include <stdio.h>
//void main() {
//	char c = 'A';
//	int i = 10, j = 20, k = 30;
//	//printf()���� �ο��ȣ �� ���ڰ� ȭ�鿡 ��µ�
//	printf("������ ��� ���α׷� \n");
//	// ���� c�� ������� %c�� %d�� ������
//	printf("c = %c, c�� �ƽ�Ű �ڵ尪�� %d \n", c, c);
//	// ���� i, j, k�� ������� %���ڿ� ������
//	printf("i = %d, j = %d, k = %d", i, j, k);
//}


// ���� 3-2
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


// ���� 3-3
//#include <stdio.h>
//void main() {
//	printf("|%d| \n", 123);
//	printf("|%5d| \n", 123);
//	printf("|%-5d| \n", 123);
//	printf("|%05d| \n", 123);
//	printf("|%6.1f| \n", 123.45);
//	printf("|%07.2f| \n", 123.45);
//}


// ���� 3-4
//#include <stdio.h>
//#pragma warning(disable:4996) // �������� �ʴ� �Լ� ��� ����
//void main() {
//	int a;
//	long long int b;
//	float c;
//	char ch;
//	char s[20]; // (20bytes ��ŭ�� �Է� ���� �Ҵ�(null�� ���� 1 ����))
//	printf("������ long long ������ �Է� : ");
//	scanf("%d %lld", &a, &b);
//	printf("a = %d, b = %lld \n", a, b);
//	printf("�Ǽ��� �Է� : ");
//	scanf("%f", &c);
//	printf("c = %10.4f, c(����) = %e \n", c, c);
//	printf("���ڸ� �Է� : ");
//	scanf(" %c", &ch);
//	// ���� scanf()�� �Է��� �� ���� Enter�� �����ϱ� ���� %c �տ� ������ �־�� ��
//	printf("ch = %c \n", ch);
//	printf("���ڿ��� �Է� : ");
//	scanf("%s", s);
//	printf("s[] = %s \n", s);
//}


// ���� 3-5
//#include <stdio.h>
//void main() {
//	char a;
//	printf("���ڸ� �ϳ� �Է��ϼ��� \n");
//	a = getchar(); //�� ���ڰ� �ԷµǸ� ���ڿ� ���� a�� ����
//	printf("c = %c \n", a);
//}


// ���� 3-6
//#include <stdio.h>
//void main() {
//	char var = 'A';
//	putchar(var);
//	putchar(var + 1);
//	putchar('\n'); // ����ǥ �Ѱ��� ASCII �ڵ� ���� �ǹ�
//	putchar('K');
//	putchar('K' + 2);
//	putchar('\007');
//}


// ���� 3-7
//#include <stdio.h>
//#pragma warning(disable:4996)
//void main() {
//	char s[50];
//	printf("���ڿ� �Է�? : ");
//	gets(s);
//	printf("gets()�� ���ڿ� �Է� = %s \n", s);
//	printf("\n���ڿ� �Է�? : ");
//	scanf("%s", s); // ������ �ν����� ����
//	printf("scanf()�� ���ڿ� �Է� = %s \n", s);
//}


// ���� 3-8
//#include <stdio.h>
//void main() {
//	char s1[] = "Computer";
//	char s2[] = "Science";
//	puts(s1);
//	puts(s2);
//	printf("%s ", s1);
//	printf("%s", s2);
//}


// ���� 3-9
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


// ���� 3-10
//#include <stdio.h>
//void main() {
//	int a, b, c;
//	a = b = c = 0;
//	a = ++b + ++c;
//	printf("a = ++b + ++c ���� �� a = %d, b = %d, c = %d \n", a, b, c);
//	a = b++ + c++;
//	printf("a = b++ + c++ ���� �� a = %d, b = %d, c = %d \n", a, b, c);
//	a = b-- + --c;
//	printf("a = b-- + --c ���� �� a = %d, b = %d, c = %d \n", a, b, c);
//}



// ���� 3-11
#include <stdio.h>
void main() {
	int a = 4, b, c, d;
	b = a > 2; // a�� 2���� ū���� ��, ����� ���̹Ƿ� b�� 1 ����
	printf("b = %d \n", b);
	c = a < 2; // a�� 2���� �������� ��, ����� �����̹Ƿ� c�� 0 ����
	printf("c = %d \n", c);
	d = a == 4; // a�� 4�ΰ��� ��, ����� ���̹Ƿ� d�� 1 ����
	printf("d = %d \n", d);
}