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

// AtCoder Beginner Contest 009
// http://abc009.contest.atcoder.jp/assignments

#define B

#ifdef B
int main() {
	set<int> s;
	int N;
	cin >> N;
	REP(i,N) {
		int a;
		cin >> a;
		s.insert(a);
	}
	auto revitr = s.rbegin();
	revitr++;
	cout << *revitr << endl;
	return 0;
}
#endif

#ifdef A
int main() {
	double N;
	cin >> N;
	cout << ceil(N/2) << endl;
	return 0;
}
#endif