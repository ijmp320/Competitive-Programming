#include <stdio.h>

// AtCoder Beginner Contest 017
// http://abc017.contest.atcoder.jp/assignments

int main_B() {
	char str[50];
	scanf("%s", str);
	int i = 0;
	bool ans = true;
	bool c = false;
	for (;;){
		if (str[i] == '\0')break;
 
		if (c) {
			if (str[i] == 'h') { i++; c = false; continue; }
			else { ans = false; break; }
		}
 
		if (str[i] == 'c') c = true;
		else if (str[i] == 'o');
		else if (str[i] == 'k');
		else if (str[i] == 'u');
		else {ans = false; break;}
		i++;
	}
 
	if (ans) printf("YES\n");
	else printf("NO\n");
 
	return 0;
}

int main_A() {
	int s1, s2, s3;
	int e1, e2, e3;
	scanf("%d %d", &s1, &e1);
	scanf("%d %d", &s2, &e2);
	scanf("%d %d", &s3, &e3);
	printf("%d\n", (int)(s1*e1*0.1f + s2*e2*0.1f + s3*e3*0.1f));
	return 0;
}
