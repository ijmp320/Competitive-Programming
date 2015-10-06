#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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

// No.197 手品
// http://yukicoder.me/problems/432

int main() {
    int N;
    string sb,sa;
    cin >> sb >> N >> sa;
    int nb = 0, na = 0;
    REP(i,3) {
        nb += (sb[i]=='x');
        na += (sa[i]=='x');
    }
    if(nb!=na) {
        cout << "SUCCESS" << endl;
        return 0;
    }

    if(N==0) {
        if(sb==sa) {
            cout << "FAILURE" << endl;
        }
        else {
            cout << "SUCCESS" << endl;
        }
    }
    else if(N==1) {
        swap(sb[0],sb[1]);
        if(sb==sa) {
            cout << "FAILURE" << endl;
            return 0;
        }
        swap(sb[0],sb[1]);
        swap(sb[1],sb[2]);
        if(sb==sa) {
            cout << "FAILURE" << endl;
            return 0;
        }
        cout << "SUCCESS" << endl;
    }
    else {
        cout << "FAILURE" << endl;
    }
    return 0;
}
