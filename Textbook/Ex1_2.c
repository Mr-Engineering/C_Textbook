// ���� 1-2

#include <stdio.h>				// printf()�� scanf()�� ǥ�� �Լ��� ����ϱ� ���� ��� ���� stdio.h ȣ��
#pragma warning(disable:4996)  // �������� �ʴ� �Լ� ��뿡 ���� ��� �޼��� ����

int a, b, c;				 // ������ �����ϴ� ���� a, b, c ����
int product(int x, int y);  // ����� �Լ� product ���� ���� : ��ȯ���� �ڷ����� int(������), �Է� ���� x, y�� �ڷ��� ��� int(������)

void main() {				// ��ȯ���� ����(void) ���� �Լ� ����
	/* ù ��° ���� �Է�*/
	printf("Enter a number between 1 and 100 : "); // "Enter a number between 1 and 100 : "�� ���� ȭ�鿡 ���
	scanf("%d", &a); // scanf �Լ� : ������ ���Ŀ� ���� ������ �Է��ϸ�, �Լ����� ������ ������ �ڷ������� 
					 // a��� ������ ����� ������ �ּҿ� %d �� ����(int)�� �Է�. scanf�� &�� ����. 

	/* �� ��° ���� �Է�*/
	printf("Enter another number between 1 and 100 : "); // "Enter a number between 1 and 100 : "�� ���� ȭ�鿡 ���
	scanf("%d", &b); // a��� ������ ����� ������ �ּҿ� %d �� ����(int)�� �Է��ϴ� ��� &�� ����.

	/* �Լ� ȣ�⿡ ���� �� ���� ���ϰ� ����� ���*/
	c = product(a, b); // product �Լ��� ���� ���� a, b�� ���ϰ� ������� c�� ����
	printf("%d * %d = %d \n", a, b, c); // 
}
/* �� ���� ���� ����Ͽ� �����ִ� ����� �Լ�*/
int product(int x, int y) { // �Լ� product�� ���� ����
	return (x * y);			// �Լ� product�� ����� ���� x�� ���� y�� ���� ��ȯ(return)
}