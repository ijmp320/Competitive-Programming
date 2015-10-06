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

// AtCoder Beginner Contest 008
// http://abc008.contest.atcoder.jp/assignments

#define B

#ifdef B
bool sort_greater(const pair<string,int> &a,const pair<string,int> &b) {
	return a.second > b.second;
}
int main() {
	map<string,int> m;
	int n;
	cin >> n;
	REP(i,n) {
		string s;
		cin >> s;
		if(m.find(s) == m.end()) {
			m[s] = 0;
		}
		else {
			m[s]++;
		}
	}

	vector<pair<string,int>> v;
	for(auto itr = m.begin(); itr != m.end(); itr++) {
		v.push_back(*itr);
	}
	sort(ALL(v),sort_greater);
	cout << v[0].first << endl;
	return 0;
}
#endif

#ifdef A
int main() {
	int S,T;
	cin >> S >> T;
	cout << T-S+1 << endl;
	return 0;
}
#endif