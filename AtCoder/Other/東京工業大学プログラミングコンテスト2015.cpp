#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define all(c) (c.begin,c.end())
using namespace std;
 
// 東京工業大学プログラミングコンテスト2015
// http://ttpc2015.contest.atcoder.jp/assignments
 
#define A
#ifdef A
int main() {
	string s;
	cin >> s;
	if (s[2] == 'B') {
		cout << "Bachelor ";
	}
	else if (s[2] == 'M') {
		cout << "Master ";
	}
	else {
		cout << "Doctor ";
	}
	printf("%c%c\n",s[0],s[1]);
	return 0;
}
#endif
