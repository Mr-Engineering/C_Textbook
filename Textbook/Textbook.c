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
//
//}


// ����