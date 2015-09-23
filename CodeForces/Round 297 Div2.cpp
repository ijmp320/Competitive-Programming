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

// Codeforces Round #297 (Div. 2)
// http://codeforces.com/contest/525

// sample only
int main() {
	int n;
	cin >> n;
	vector<ll> s(n);
	rep(i,n) cin >> s[i];
	sort(all(s));
	reverse(all(s));

	ll a=0,b=0;
	bool fa = false,fb = false;
	for(int i=1;i<n && (!fa || !fb);) {
		if(s[i-1] == s[i]) {
			if(!fa) {
				a = s[i];
				fa = true;
			}
			else {
				b = s[i];
				fb = true;
				break;
			}
			i+=2;
		}
		else {
			if(s[i-1]-1 == s[i]) {
				if(!fa) {
					a = s[i];
					fa = true;
				}
				else {
					b = s[i];
					fb = true;
					break;
				}
				i+=2;
			}
			else {
				i++;
			}
		}
	}
	cout << a * b << endl;
	return 0;
}

int main_B() {
	string s,s_op,ans;
	int n;
	cin >> s >> n;
	s_op = s;
	ans = s;
	reverse(all(s_op));
	vector<int> a(n);
	rep(i,n) {
		cin >> a[i];
		a[i]--;
	}
	sort(all(a));

	int c=0;
	bool fop=false;
	stack<char> st;
	for(int i=0;i<s.size()/2;i++) {
		for(;i==a[c];) {
			fop = !fop;
			c++;
		}
		if(fop) {
			putchar(s[s.size()-1-i]);
			st.push(s[i]);
		}
		else {
			putchar(s[i]);
			st.push(s[s.size()-1-i]);
		}
	}
	if(s.size()%2==1) putchar(s[s.size()/2]);
	while(!st.empty()) {
		putchar(st.top());st.pop();
	}
	putchar('\n');
	return 0;
}

int main_A() {
	int n;
	string s;
	cin >> n >> s;
	vector<char> hk;
	int ans = 0;
	rep(i,n-1) {
		hk.p_b(s[i*2]-0x20);
		auto itr = find(all(hk),s[i*2+1]);
		if(itr==hk.end()) {
			ans++;
		}
		else {
			hk.erase(itr);
		}
	}
	cout << ans << endl;
	return 0;
}

