#include <stdio.h>
#include <stdlib.h>

double P(double, int);

void main(void)
{
	int k;
	double ans;
	printf("�p��3.5��k����=�H\n�п�Jk=");
	scanf_s("%d", &k);
	ans = P(3.5, k);
	printf("\n3.5��%d����=%f\n", k, ans);
	system("pause");
}

double P(double x, int n)
{
	int i;
	double PX = 1;
	for (i = 1; i <= n; i++)
	{
		PX = PX * x;
	}
	return PX;
}