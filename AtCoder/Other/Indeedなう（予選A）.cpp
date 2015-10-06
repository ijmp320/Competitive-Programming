#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(intP i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// Indeedなう（予選A）
// http://indeednow-quala.contest.atcoder.jp/assignments

int main_C() {
	int N;
	cin >> N;
	vector<int> s(N);
	int zero=0;
	rep(i,N) {
		cin >> s[i];
		if(s[i] == 0) zero++;
	}
	int Q;
	cin >> Q;
	vector<int> k(Q);
	rep(i,Q) cin >> k[i];
 
	sort(s.begin(), s.end(), greater<int>());
	rep(i,Q) {
		if(N-zero <= k[i]) cout << 0 << endl;
		else cout << s[k[i]] + 1 << endl;
	}
	return 0;
}

int main_B() {
	int N;
	cin >> N;
	rep(i,N) {
		string s;
		cin >> s;
		if(s.size() != 9) {
			printf("NO\n");
			continue;
		}
		bool check[9];  // ddeeinnow
		char ind[10] = {'d','d','e','e','i','n','n','o','w'};
		sort(s.begin(), s.end());
		int c=0;
		rep(j,s.size()) {
			if(s[j] == ind[c]) {
				c++;
			}
		}
		if(c==9) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

int main_A() {
	int A,B;
	cin >> A >> B;
	int a = log10(A) + 1,b = log10(B) + 1;
	printf("%d\n",(int)a*b);
	return 0;
}
