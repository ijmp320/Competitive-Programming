#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define reprop(i,n) for(int i=(n);i>=0;i--)
#define all(a) (a).begin(),(a).end()
#define m_p(a,b) make_pair(a,b)
#define p_b(a) push_back(a)
#define check_range(x,y,w,h) (x>=0&&x<w&&y>=0&&y<h)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// Questionnaire
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0505


struct pii_big {
	bool operator()(const std::pair<int,int>& a, const std::pair<int,int>& b) const {
		if(a.first == b.first)
			return a.second < b.second;
		else return a.first > b.first;
	}
};

int main() {
	while(true) {
		int n,m;
		cin >> n >> m;
		if(n==0 && m==0) break;

		vector< pii > a(m);
		rep(i,n) {
			rep(j,m) {
				int b;
				cin >> b;
				a[j].first += b;
				a[j].second = j+1;
			}
		}

		sort(all(a), pii_big());
		rep(i,m) {
			printf("%d",a[i].second);
			if(i==m-1) putchar('\n');
			else putchar(' ');
		}
	}
	return 0;
}
