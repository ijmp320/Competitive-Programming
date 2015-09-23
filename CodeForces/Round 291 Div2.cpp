#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MS(i,n) memset(i,n,sizeof(i))
#define REP(i,n) for(i=0;i<n;i++)
const int INF = 100000000;
const double PI = 3.14159265358979323846264338327950288;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct Pos{int x;int y;Pos(int X=0,int Y=0){x=X;y=Y;}};

// Codeforces Round #291 (Div. 2)
// http://codeforces.com/contest/514


int i,j,l;

// Problem B
int main() {
	int n;
	int x0,y0;
	cin >> n >> x0 >> y0;
	vector<Pos> ene(n);
	vector<bool> live(n);
	REP(i,n) {
		live[i] = true;
		cin >> ene[i].x >> ene[i].y;
	}

	int ans = 0;
	REP(i,n) {
		if(live[i]) {
			ans++;
			// 縦
			if(x0 == ene[i].x) {
				REP(j,n) {
					if(x0 == ene[j].x) live[j] = false;
				}
			}
			// 横
			else if(y0 == ene[i].y) {
				REP(j,n) {
					if(y0 == ene[j].y) live[j] = false;
				}
			}
			else {
				int a = (ene[i].x - x0)*10000000 / (ene[i].y - y0)*10000000;
				REP(j,n) {
					if((ene[j].y - y0) == 0) continue;
					if(((ene[j].x - x0)*10000000 / (ene[j].y - y0)*10000000)==a) live[j] = false;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}

/* Problem A
int main() {
	char x[100];
	cin >> x;
	for(i=0; x[i]!= '\0'; i++) {
		char c;
		if(x[i] >= '5') c = '0' + ('9'-x[i]);
		else c = x[i];

		if(i==0 && c=='0') putchar('9');
		else putchar(c);
	}
	return 0;
}
 *
 */

