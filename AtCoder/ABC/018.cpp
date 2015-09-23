#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;
const int INF = 100000000;

// AtCoder Beginner Contest 018
// http://abc018.contest.atcoder.jp/assignments

int main_B() {
	char str[101];
	scanf("%s",str);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		int l,r;
		scanf("%d %d",&l,&r);
		vector<char> c(r-l+1);
		for(int j=r-1,count=0;j!=l-2;j--,count++) c[count] = str[j];
		for(int j=0;j<r-l+1;j++) str[l-1+j] = c[j];
	}
	printf("%s\n",str);
	return 0;
}

int main_A() {
	int A,B,C;
	scanf("%d %d %d", &A,&B,&C);
	if(A>B && A>C && B>C) printf("%d\n%d\n%d\n",1,2,3);
	if(A>B && A>C && B<C) printf("%d\n%d\n%d\n",1,3,2);
	if(B>A && B>C && A>C) printf("%d\n%d\n%d\n",2,1,3);
	if(B>A && B>C && A<C) printf("%d\n%d\n%d\n",3,1,2);
	if(C>A && C>B && B>A) printf("%d\n%d\n%d\n",3,2,1);
	if(C>A && C>B && B<A) printf("%d\n%d\n%d\n",2,3,1);
	return 0;
}
