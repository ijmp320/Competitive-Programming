#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// AtCoder Beginner Contest 019
// http://abc019.contest.atcoder.jp/assignments

int main_A() {
	vector<int> a(3);
	cin >> a[0] >> a[1] >> a[2];
	sort(a.begin(),a.end());
	cout << a[1] << endl;
	return 0;
}

int mai_B() {
	string ans;
	char s[1001];
	cin >> s;
	int c=0;
	int n = 1;
	for(int i=0;; i++) {
		if(s[i] == c) {
			n++;
		}
		else {
			char buf[100];
			sprintf(buf,"%c%d",c,n);
			ans += buf;
			n=1;
			c = s[i];
		}
		if(s[i]==0) {
			char buf[100];
			sprintf(buf,"%c%d",c,n);
			ans += buf;
			n=1;
			c = s[i];
			break;
		}
	}

	cout << ans << endl;
	return 0;
}


/// 入れる数字が1/2の時も同じ値が得られるから、２で割れなくなるまで割る
/// 残った奇数をsetに追加していくと、その奇数のパターン数を求めることができる
int main_C() {
	int N;
	cin >> N;
	set<int> s;
	rep(i,N) {
		int a; cin >> a;
		for(int i=0;;i++) {
			if(a % 2 == 0) {
				a /= 2;
			}
			else break;
		}
		s.insert(a);
	}
	cout << s.size() << endl;
	return 0;
}

