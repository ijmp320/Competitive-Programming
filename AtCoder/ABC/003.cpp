#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// AtCoder Beginner Contest 003
// http://abc003.contest.atcoder.jp/assignments

int main_C() {
	int N,K;
	int r[100];
	cin >> N >> K;
	rep(i,N) cin >> r[i];

	double ans = 0;
	sort(r,r+N);
	for(int i=N-K; i<N; i++) {
		ans = (ans+r[i])/2.0;
	}
	printf("%f\n",ans);

	return 0;
}

int main_B() {
	const char atcoder[7] = {'a','t','c','o','d','e','r'};
	char s[11],t[11];
	cin >> s;
	cin >> t;
	for(int i=0; s[i] != 0; i++) {
		if(s[i] != t[i]) {
			if(s[i] == '@') {
				bool b=false;
				rep(j,7) if(atcoder[j] == t[i]) b=true;
				if(!b) {
					printf("You will lose\n");
					return 0;
				}
			}
			else if(t[i] == '@') {
				bool b=false;
				rep(j,7) if(atcoder[j] == s[i]) b=true;
				if(!b) {
					printf("You will lose\n");
					return 0;
				}
			}
			else {
				printf("You will lose\n");
				return 0;
			}
		}
	}
	printf("You can win\n");
	return 0;
}

int main_A() {
	int N;
	cin >> N;
	int sum=0;
	rep(i,N+1) sum += i;
	cout << (sum * 10000)/N << endl;
	return 0;
}

