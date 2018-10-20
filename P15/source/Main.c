#include <stdio.h>
#include <stdlib.h>

int Max(int x, int y, int z);

int main(void)
{
	int n1, n2, n3;
	printf("請輸入三個整數：");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	printf("\n最大整數為%d\n", Max(n1, n2, n3));
	system("pause");
	return 0;
}

int Max(int x, int y, int z)
{
	int m = x;
	if (y > m)
	{
		m = y;
	}
	if(z > m)
	{
		m = z;
	}
	return m;
}