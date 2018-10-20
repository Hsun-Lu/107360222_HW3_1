#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
	char string[60] = "Welcome";
	char S[60];
	int l;
	strcpy_s(S, 20, string);
	printf("¦r¦ê=%s\n", S);
	l = strlen(S);
	printf("¦r¦êªø«×¬°%d\n", l);
	system("pause");
	return 0;
}