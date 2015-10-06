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

// AtCoder Beginner Contest 029
// http://abc029.contest.atcoder.jp/assignments

#define D

#ifdef D
int main() {
	int N;
	cin >> N;
	return 0;
}
#endif

#ifdef C
int N;
vector<string> s;
void rec(int i, string str) {
	if (i == N) {
		cout << str << endl;
		return;
	}
	rec(i + 1, str + 'a');
	rec(i + 1, str + 'b');
	rec(i + 1, str + 'c');
}

int main() {
	cin >> N;
	rec(1, "a");
	rec(1, "b");
	rec(1, "c");
	return 0;
}
#endif

#ifdef B
int main() {
	int ans = 0;
	rep(i, 12) {
		string s;
		cin >> s;
		if (s.find('r') != s.npos) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
#endif

#ifdef A
int main() {
	string s;
	cin >> s;
	cout << s + "s" << endl;
	return 0;
}
#endif
