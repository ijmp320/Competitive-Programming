#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <chrono>
#define FOR(i,x,n) for(int i=0;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(c) (c).begin(),(c).end()
using namespace std;
using namespace chrono;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<vector<int>> vvi;

// CODE FESTIVAL 2015 —\‘IA
// http://code-festival-2015-quala.contest.atcoder.jp/assignments

#define D

#ifdef D
int main() {
	int N,M;
	cin >> N >> M;
	return 0;
}
#endif

#ifdef C
int main() {
	int N,T;
	cin >> N >> T;
	vector<int> A(N),B(N),D(N);
	int sum_B = 0,sum_A = 0;
	REP(i,N) {
		cin >> A[i] >> B[i];
		D[i] = A[i] - B[i];
		sum_A += A[i];
		sum_B += B[i];
	}
	if(sum_B > T) {
		cout << -1 << endl;
		return 0;
	}

	sort(ALL(D),greater<int>());

	int ans = 0;
	int t = sum_A - T;
	for(int i = 0; t > 0; i++) {
		t -= D[i];
		ans++;
	}
	cout << ans << endl;
	return 0;
}
#endif

#ifdef B
int main() {
	int N;
	cin >> N;
	int s = 0;
	REP(i,N) {
		int a;
		cin >> a;
		int t = s + a + s;
		s = t;
	}
	cout << s << endl;
	return 0;
}
#endif

#ifdef A
int main() {
	string s;
	cin >> s;
	REP(i,s.size()-4) {
		putchar(s[i]);
	}
	cout << "2015" << endl;
	return 0;
}
#endif
