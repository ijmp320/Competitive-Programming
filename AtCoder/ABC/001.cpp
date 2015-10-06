#include <stdio.h>

// AtCoder Beginner Contest 001
// http://abc001.contest.atcoder.jp/assignments

int main_B()
{
	int dist;
	int VV;
	scanf("%d", &dist);
	double km = (double)dist / (double)1000;
	if (dist < 100) VV = 0;
	else if (dist >= 100 && dist <= 5000) VV = (int)(km * 10);
	else if (dist >= 6000 && dist <= 30000) VV = (int)(km + 50);
	else if (dist >= 35000 && dist <= 70000) VV = (int)(((km - 30) / 5) + 80);
	else if (dist > 70000) VV = 89;

	if (VV < 10) printf("0%d\n", VV);
	else printf("%d\n", VV);

	return 0;
}

int main_A()
{
	int H1, H2;
	scanf("%d", &H1);
	scanf("%d", &H2);
	printf("%d\n", H1 - H2);
	return 0;
}
