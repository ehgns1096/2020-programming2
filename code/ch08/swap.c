#include <stdio.h>

int main(void)
{
	int m = 100, n = 200, dummy;
	printf("%d %d\n", m, n);

	//���� m�� n�� ������� �ʰ� �� ������ ���� ��ȯ
	int* p = &m;
	dummy = *p; //���� dummy�� m�� ����
	*p = n;
	p = &n;
	*p = dummy; //���� n�� dummy �� ����

	printf("%d %d\n", m, n);

	return 0;
}