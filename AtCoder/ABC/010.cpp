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
#include <chrono>
using namespace std;
using namespace chrono;
#define FOR(i,x,n) for(int i=0;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(c) (c).begin(),(c).end()
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<vector<int>> vvi;

// AtCoder Beginner Contest 010
// http://abc010.contest.atcoder.jp/assignments

#define C

#ifdef C
int main() {
	int x1,y1,x2,y2;
	int T,V;
	cin >> x1 >> y1 >> x2 >> y2 >> T >> V;
	int TV = T*V;
	int n;
	cin >> n;
	REP(i,n) {
		int x,y;
		cin >> x >> y;
		double a = sqrt((x - x1)*(x - x1) + (y - y1)*(y - y1));
		double b = sqrt((x - x2)*(x - x2) + (y - y2)*(y - y2));
		if(a + b <= TV) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
#endif

#ifdef B
int main() {
	// 1 3   7 9   13
	// o o   o o   o o   o o   o o    o o
	// oxoxoxoxoxoxo
	// oxooxooxooxoo
	int n;
	cin >> n;
	int ans = 0;
	REP(i,n) {
		int a;
		cin >> a;
		for(; a % 6 != 1 && a % 6 != 3; a--) ans++;
	}
	cout << ans << endl;
	return 0;
}
#endif

#ifdef A
int main() {
	string s;
	cin >> s;
	cout << s+"pp" << endl;
	return 0;
}
#endif