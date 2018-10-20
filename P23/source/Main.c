#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {C, W, L};
int rollDice(void);

int main(void)
{
	int sum, mypoint;
	enum Status g;
	srand(time(NULL));
	sum = rollDice();
	switch (sum)
	{
	case 7:
	case 11:
		g = W;
		break;
	case 2:
	case 3:
	case 12:
		g = L;
		break;
	default:
		g = C;
		mypoint = sum;
		printf("分數為%d\n", mypoint);
		break;
	}
	while (g == C)
	{
		sum = rollDice();
		if (sum == mypoint)
		{
			g = W;
		}
		else
		{
			if (sum == 7)
			{
				g = L;
			}
		}
	}
	if (g == W)
	{
		printf("玩家獲勝\n");
	}
	else
	{
		printf("玩家失敗\n");
	}
	system("pause");
	return 0;
}


int rollDice(void)
{
	int d1, d2, ws;
	d1 = 1 + (rand() % 6);
	d2 = 1 + (rand() % 6);
	ws = d1 + d2;
	printf("玩家擲點為 %d + %d = %d\n", d1, d2, ws);
	return ws;
}