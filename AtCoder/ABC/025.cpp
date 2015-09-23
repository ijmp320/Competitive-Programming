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

// AtCoder Beginner Contest 025
// http://abc025.contest.atcoder.jp/assignments

int main_B() {
    int N,A,B;
    cin >> N >> A >> B;
    int x=0;
    REP(i,N) {
        string dir;
        int d,n;
        cin >> dir >> d;
        if(d<A) n = A;
        else if(A <= d && d <= B) n = d;
        else n = B;

        if(dir[0]=='W') {
            n*=-1;
        }

        x+=n;
    }
    if(x==0) {
        cout << 0 << endl;
        return 0;
    }
    cout << (x<0?"West":"East") << " " << abs(x) << endl;
    return 0;
}

int main_A() {
    vector<char> s(5);
    string S;
    cin >> S;
    REP(i,5) {
        s[i] = S[i];
    }
    int n;
    cin >> n;

    set<string> res;
    REP(i,5) {
        REP(j,5) {
            string tmp = "";
            tmp += s[i];
            tmp += s[j];
            res.insert(tmp);
        }
    }

    int c = 1;
    for(auto itr = res.begin(); itr!=res.end(); itr++) {
        if(c==n) {
            cout << (*itr) << endl;
            return 0;
        }
        c++;
    }

    return 0;
}
