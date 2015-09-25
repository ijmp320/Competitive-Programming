#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
#define FOR(i,a,n) for(int i=a;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()
#define MP(a,b) make_pair(a,b)
#define PB(a) push_back(a)
#define F first
#define S second
const int INF = 2000000000;
const int DX[4]={0,1,0,-1}, DY[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// Search - Dictionary
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_C&lang=jp

#define M (1046527)
#define NIL (-1)
#define L (14)

vector<string> H;

int getChar(char ch) {
	if(ch=='A') return 1;
	else if(ch=='C') return 2;
	else if(ch=='G') return 3;
	else if(ch=='T') return 4;
	else return 0;
}

ll getKey(string str) {
	ll sum=0, p=1, i;
	int len = str.size();
	for(i=0; i<len; i++) {
		sum += p*(getChar(str[i]));
		p *= 5;
	}
	return sum;
}

int h1(int key) {return key % M;}
int h2(int key) {return 1 + (key % (M-1));}

int find(string str) {
	ll key, i, h;
	key = getKey(str);
	for(i=0;;i++) {
		h = (h1(key) + i * h2(key)) % M;
		if(H[h] == str) return 1;
		else if(H[h].size() == 0) return 0;
	}
	return 0;
}

int insert(string str) {
	ll key, i, h;
	key = getKey(str);
	for(i=0;;i++) {
		h = (h1(key) + i * h2(key)) % M;
		if(H[h] == str) return 1;
		else if(H[h].size() == 0) {
			H[h] = str;
			return 0;
		}
	}
	return 0;
}

int main() {
	H.resize(M);
	REP(i,M) H[i] = "";

	int n;
	cin >> n;
	REP(i,n) {
		string cmd, str;
		cin >> cmd >> str;
		if(cmd[0]=='i') {
			insert(str);
		}
		else {
			if(find(str)) {
				cout << "yes\n";
			}
			else {
				cout << "no\n";
			}
		}
	}
	return 0;
}
