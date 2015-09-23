#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// Codeforces Round #293 (Div. 2)
// http://codeforces.com/contest/518

int main() {
	char s[101];
	char t[101];
	cin >> s >> t;

	bool isOK = false;
	string ans;
	for(int i=0; s[i] != 0; i++) {
		if(t[i] - s[i] >= 2) {
			ans.push_back(s[i] + ((t[i]-s[i])/2));
			isOK = true;
		}
		else if(t[i] > s[i]){
			ans.push_back(t[i]);
		}
		else {
			ans.push_back(s[i]);
		}
	}
	if(isOK) cout << ans << endl;
	else cout << "No such string" << endl;

	return 0;
}
/*
int main() {
	int n,m,k;
	cin >> n >> m >> k;
	vector<int> oder(n), b(m);
	rep(i,n) cin >> oder[i];
	rep(i,m) cin >> b[i];



	vector<int> a_index(n,0);  // i個目のアプリの起動回数
	for(int i=1; i<=n; i++) {
		a_index[oder[i-1]] = i-1;
	}
	rep(i,n) printf("%d ",a_index[i]);
	printf("\n");

	int ans = 0;
	rep(i,m) {
		int num = 1;
		// i番目のアプリを起動したい

		int j = a_index[b[i]];

		// j : b[i]がある位置 index

		num += j / k;
		if(j != 0) swap(a_index[oder[j]], a_index[oder[j-1]]);

		ans += num;
	}
	cout << ans << endl;

	return 0;
}
*/




