#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define FOR(i,a,n) for(int i=a;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()
#define MP(a,b) make_pair(a,b)
#define PB(a) push_back(a)
#define F first
#define S second
const int INF = 2000000000;
const int DX[4]={0,1,0,-1}, DY[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// AtCoder Beginner Contest 026
// http://abc026.contest.atcoder.jp/assignments

const double pi = 3.14159265359;

int main() {
    double A,B,C;
    cin >> A >> B >> C;

    double t=200;
    double top=400,bottom=0;
    while(true) {
        int a = A*t+B*sin(C*pi*t);
        if(fabs(a-100.0)<=DBL_EPSILON) {
            printf("%.14f\n",t);
            break;
        }
        else if(a>100.0) {
            top = t;
            t = (t+bottom)/2.0;
        }
        else {
            bottom = t;
            t = (t+top)/2.0;
        }
    }
    return 0;
}

// int N;
// vector<int> B;
// int rec(int i) {
//     if(count(ALL(B),i)==0) {
//         return 1;
//     }
//     int ma = 0;
//     int mi = INF;
//     REP(j,N) {
//         if(B[j]==i) {
//             int t = rec(j+1);
//             ma = max(ma, t);
//             mi = min(mi, t);
//         }
//     }
//     return (ma + mi + 1);
// }
//
// int main() {
//     cin >> N;
//     B.resize(N);
//     FOR(i,1,N) {
//         cin >> B[i];
//     }
//     B[0]=INF;
//
//     cout << rec(1) << endl;
//     return 0;
// }
//
//
// int mainB() {
//     int N;
//     cin >> N;
//     vector<int> R(N);
//     REP(i,N) {
//         cin >> R[i];
//     }
//     sort(ALL(R));
//     reverse(ALL(R));
//
//     double ans = 0.000;
//     REP(i,N) {
//         double t = R[i]*R[i]*pi;
//         if(i%2==0) {
//             ans += t;
//         }
//         else {
//             ans -= t;
//         }
//     }
//     printf("%f\n",ans);
//     return 0;
// }
//
// int mainA() {
//     int A;
//     cin >> A;
//     cout << (A/2.0) * (A/2.0) << endl;
//     return 0;
// }

