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

// Codeforces Round #324 (Div.2)
// http://codeforces.com/contests/584

#define A
#ifdef A
int main() {
	int n,t;
	cin >> n >> t;
	if(t == 10) {
		if(n == 1) {
			cout << -1 << endl;
			return 0;
		}
		putchar('1');
		REP(i,n-1) {
			putchar('0');
		}
	}
	else {
		REP(i,n) {
			cout << t;
		}
	}
	cout << endl;
	return 0;
}
#endif