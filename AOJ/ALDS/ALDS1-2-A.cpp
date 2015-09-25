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
const int INF = 2000000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// Sort I - Bubble Sort
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_A&lang=jp

int main() {
	int n;
	cin >> n;
	int A[100];
	rep(i,n) cin >> A[i];

	int swap_num=0;
	bool f=true;
	while(f) {
		f=false;
		for(int j=n-1;j>=1;j--) {
			if(A[j] < A[j-1]) {
				swap(A[j],A[j-1]);
				swap_num++;
				f=true;
			}
		}
	}
	rep(i,n) {
		printf("%d",A[i]);
		if(i==n-1) putchar('\n');
		else putchar(' ');
	}
	printf("%d\n",swap_num);
	return 0;
}
