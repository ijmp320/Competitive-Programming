#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;
typedef long long int lli;
const int INF = 100000000;
const int dx[4]={0,1,0,-1};
const int dy[4]={-1,0,1,0};
struct Pos{public:int x;int y;Pos(int X=0,int Y=0){x=X;y=Y;}Pos(const Pos &p){x=p.x;y=p.y;}};

// Donutsプロコンチャレンジ2015
// http://donuts-2015.contest.atcoder.jp/assignments

int main_B_TLE() {
	int N;
	scanf("%d",&N);
	vector<int> h(N);
	for(int i=0;i<N;i++) scanf("%d", &h[i]);
 
	for(int i=0; i<N;i++) {
		int t=0;
		int top = 0;
		for(int j=i-1;j>=0; j--) {
			if(top < h[j]) {
				top = h[j];
				t++;
			}
		}
		printf("%d\n", t);
	}
 
	return 0;
}

const double pi = 3.14159265359; 
int main() {
	int R,D;
	scanf("%d %d", &R,&D);
	printf("%f", (R*R*pi)*(2*D*pi));
	return 0;
}
