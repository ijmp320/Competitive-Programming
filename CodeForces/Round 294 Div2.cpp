#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// Codeforces Round #294 (Div. 2)
// http://codeforces.com/contest/519

int main() {
	int L,S;
	cin >> L >> S;
	if(L < S) swap(L,S);

	int ans = S;
	if(S*2 > L) ans -= (S*2-L)/2;
	printf("%d\n",ans);
	return 0;
}

int main_B() {
	int f,s;
	int n;
	cin >> n;

	int sum = 0;
	int sum2 = 0;
	int sum3 = 0;
	rep(i,n) {
		int a;
		cin >> a;
		sum += a;
	}
	rep(i,n-1) {
		int a;
		cin >> a;
		sum2 += a;
	}
	rep(i,n-2) {
		int a;
		cin >> a;
		sum3 += a;
	}

	f = sum - sum2;
	s = sum2 - sum3;

	cout << f << endl;
	cout << s << endl;
	return 0;
}


int main_A() {
	char bd[9][9];
	rep(i,8) cin >> bd[i];
	int white = 0;
	int black = 0;
	rep(i,8) rep(j,8) {
		int p = 0;
		if(bd[i][j] == 'Q' || bd[i][j] == 'q') p = 9;
		if(bd[i][j] == 'R' || bd[i][j] == 'r') p = 5;
		if(bd[i][j] == 'B' || bd[i][j] == 'b') p = 3;
		if(bd[i][j] == 'N' || bd[i][j] == 'n') p = 3;
		if(bd[i][j] == 'P' || bd[i][j] == 'p') p = 1;

		if(bd[i][j] >= 'a' && bd[i][j] <= 'z') black += p;
		if(bd[i][j] >= 'A' && bd[i][j] <= 'Z') white += p;
	}

	if(white > black) printf("White\n");
	if(white < black) printf("Black\n");
	if(white == black) printf("Draw\n");
	return 0;
}

