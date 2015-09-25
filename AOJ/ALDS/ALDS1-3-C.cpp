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

// Elementary data structures - Doubly Linked List
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_C&lang=jp

int main() {
	char buf[100];
	int n;
	scanf("%d",&n);
	list<int> lst;
	REP(i,n) {
		string s;
		int key;
		scanf("%s",buf);
		s=buf;
		if(s=="insert") {
			scanf("%d",&key);
			lst.push_front(key);
		}
		else if(s=="delete") {
		scanf("%d",&key);
			auto it = find(ALL(lst), key);
			if(it!=lst.end()) {
				lst.erase(it);
			}
		}
		else if(s=="deleteFirst") lst.erase(lst.begin());
		else if(s=="deleteLast") lst.erase(--(lst.end()));
	}
	list<int>::iterator it = lst.begin();
	cout << *it;
	for( it=++lst.begin(); it!=lst.end(); ++it) {
		cout << " " << (*it);
	}
	cout << "\n";
	return 0;
}
