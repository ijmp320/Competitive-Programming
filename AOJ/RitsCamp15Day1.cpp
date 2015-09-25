#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// A : Soccer
// http://judge.u-aizu.ac.jp/onlinejudge/cdescription.jsp?cid=RitsCamp15Day1&pid=A

int main() {
	int n;
	cin >> n;
	int bf,ba,bt,bx,by;

	double maxdist_A = -1;
	double passtime_A = -1;
	double maxdist_B = -1;
	double passtime_B = -1;

	rep(i,n) {
		int f,a,t,x,y;
		cin >> f >> a >> t >> x >> y;
		if(i!=0) {
			if(bt == t && ba != a) {
				double dist = sqrt((by-y)*(by-y) + (bx-x)*(bx-x));
				double time_p = (f-bf)/60.0;

				if(t == 0) {
					if(dist > maxdist_A) {
						maxdist_A = dist;
						passtime_A = time_p;
					}
					else if(dist == maxdist_A) {
						if(passtime_A > time_p) {
							passtime_A = time_p;
						}
					}
				}
				else {
					if(dist > maxdist_B) {
						maxdist_B = dist;
						passtime_B = time_p;
					}
					else if(dist == maxdist_B) {
						if(passtime_B > time_p) {
							passtime_B = time_p;
						}
					}
				}

			}
		}
		bf = f; ba = a; bt = t;
		bx = x; by = y;
	}
	printf("%f %f\n%f %f\n", maxdist_A, passtime_A, maxdist_B, passtime_B);
	return 0;
}
