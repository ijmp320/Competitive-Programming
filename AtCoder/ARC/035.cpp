#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// AtCoder Regular Contest 035
// http://arc035.contest.atcoder.jp/assignments

ll factorial(int n) {
    ll result = 1;
    int k;

    for(k = 1; k <= n; k++) {
        result *= k;
        result %= 1000000007;
    }
    return result;
}

int main_B() {
	int N;
	vector<int> t;
	cin >> N;
	t.resize(N);
	rep(i,N) cin >> t[i];
	sort(t.begin(), t.end());

	ll ans = 0;
	ll T = 0;
	rep(i,N) {
		T += t[i];
		ans += T;
	}

	ll ans2=1;
	int n=1;
	rep(i,N) {
		if(i==N-1 || t[i] != t[i+1]) {
			ans2 *= factorial(n);
			ans2 %= 1000000007;
			n=1;
		}
		else {
			n++;
		}
	}
	cout << ans << endl;
	cout << ans2 << endl;
	return 0;
}


int main_A() {
	char str[1001];
	cin >> str;
	string s = str;
	int top = 0;
	int end = s.size() - 1;
	for(;;) {
		if(s.size() % 2 == 1 && top == end) break;
		else if(s.size() % 2 == 0 && end - top == 1) break;

		if(str[top] != str[end] && str[end] != '*' && str[top] != '*')
		{
			cout << "NO" << endl;
			return 0;
		}
		top++;
		end--;
	}
	cout << "YES" << endl;
	return 0;
}
