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

// Sort I - Stable Sort
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_C&lang=jp

struct card {
	int n;
	char s;
	int i;
};

int main() {
	int n;
	card A[36],B[36];
	cin >> n;
	rep(i,n) {
		string c;
		cin >> c;
		A[i].s = c[0];
		A[i].n = c[1]-'0';
		A[i].i = i;
		B[i] = A[i];
	}

	// bubble sort
	rep(i,n) {
		for(int j=n-1;j>=i;j--) {
			if(A[j].n < A[j-1].n) {
				swap(A[j],A[j-1]);
			}
		}
	}
	rep(i,n) {
		char str[3];
		str[0] = A[i].s;
		str[1] = A[i].n + '0';
		str[2] = '\0';
		printf("%s",str);
		if(i==n-1) printf("\nStable\n");
		else putchar(' ');
	}

	// selection sort
	int minj;
	rep(i,n) {
		minj = i;
		for(int j=i;j<n;j++) {
			if(B[j].n < B[minj].n) {
				minj = j;
			}
		}
		swap(B[i],B[minj]);
	}
	rep(i,n) {
		char str[3];
		str[0] = B[i].s;
		str[1] = B[i].n + '0';
		str[2] = '\0';
		printf("%s",str);
		if(i==n-1) putchar('\n');
		else putchar(' ');
	}
	for(int i=1;i<n;i++) {
		if(B[i-1].n == B[i].n && B[i-1].i > B[i].i) {
			printf("Not stable\n");
			return 0;
		}
	}
	printf("Stable\n");
	return 0;
}
