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

// Dice
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0502


int main() {
    while(true) {
        int n=0;
        cin >> n;
        if(n==0) break;
 
        int ans = 1;
        int n1=1,n2=2,n3=3;
        rep(i,n) {
            string cmd;
            cin >> cmd;
            int nn1, nn2, nn3;
            if(cmd=="North") {
                nn1 = n2;
                nn2 = 7-n1;
                nn3 = n3;   //
            }
            else if(cmd=="East") {
                nn1 = 7-n3;
                nn2 = n2;   //
                nn3 = n1;
            }
            else if(cmd=="South") {
                nn1 = 7-n2;
                nn2 = n1;
                nn3 = n3;   //
            }
            else if(cmd=="West") {
                nn1 = n3;
                nn2 = n2;   //
                nn3 = 7-n1;
            }
            else if(cmd=="Right") {
                nn1 = n1;   //
                nn2 = n3;
                nn3 = 7-n2;
            }
            else if(cmd=="Left"){
                nn1 = n1;   //
                nn2 = 7-n3;
                nn3 = n2;
            }
            n1 = nn1;
            n2 = nn2;
            n3 = nn3;
            ans += n1;
        }
        cout << ans << endl;
    }
    return 0;
}
