// ���� 1-2

#include <stdio.h> // printf()�� scanf()�� ����ϱ� ���� ��� ���� ����
#pragma warning(disable:4996)  // �������� �ʴ� �Լ� ��뿡 ���� ��� �޼��� ����

int a, b, c; // ������ �����ϴ� ���� ����
int product(int x, int y);  // ����� �Լ� product ���� --> �� ������?

void main() {
	// ù ��° �� a �Է�
	printf("Enter a number between 1 and 100 : ");
	scanf("%d", &a); // a��� ������ ����� ������ �ּҿ� %d �� ����(int)�� �Է��ϴ� ��� &�� ����. ���ڿ��� ��� ���ڿ� ��ü�� �ּ���

	// �� ��° �� b �Է�
	printf("Enter another number between 1 and 100 : ");
	scanf("%d", &b);

	// �Լ� ȣ�� �� �� ���� ���Ͽ� ��� ���
	c = product(a, b);
	printf("%d * %d = %d \n", a, b, c);
}

int product(int x, int y) {
	return (x * y);
}