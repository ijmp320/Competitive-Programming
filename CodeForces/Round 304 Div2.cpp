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

// Codeforces Round #304 (Div. 2)
// http://codeforces.com/contest/546

int decompositPrime(int n) {
    // 割る数の初期値
    int a = 2;
    // √n ≧ a ( n ≧ a * a ) の間ループ処理
    while (n >= a * a) {
        // a で割り切れたら、a は素因数
        // そして、割られる数を a で割る
        // a で割り切れなかったら、 a を 1 増加させる
        if (n % a == 0) {
            n /= a;
        } else {
            a++;
        }
    }
    // 最後に残った n は素因数
    return n;
}

int main_D_TLE() {
    int t;
    scanf("%d",&t);
    REP(i,t) {
        int a,b,ans=0;
        scanf("%d %d",&a,&b);

        for(int i=b+1; i<=a; i++) {
            int t = i;
            while(t!=1) {
                t /= decompositPrime(t);
                ans++;
            }
        }

        printf("%d\n",ans);
    }
    return 0;
}



int main_C() {
    int n,t;
    cin >> n;
    queue<int> k1,k2;
    cin >> t;
    REP(i,t) {
        int a;
        cin >> a;
        k1.push(a);
    }
    cin >> t;
    REP(i,t) {
        int a;
        cin >> a;
        k2.push(a);
    }

    set<pair<queue<int>,queue<int>>> s;

    int winner = 0;
    int ans = 0;
    while(true) {
        if(s.find(MP(k1,k2))!=s.end()) {
            cout << -1 << endl;
            return 0;
        }
        s.insert(MP(k1,k2));

        if(k1.empty()) {
            winner = 2;
            break;
        }
        else if(k2.empty()) {
            winner = 1;
            break;
        }

        int a=k1.front(), b=k2.front();
        k1.pop(); k2.pop();

        if(a>b) {
            k1.push(b);
            k1.push(a);
        }
        else {
            k2.push(a);
            k2.push(b);
        }

        ans++;
    }
    cout << ans << " " << winner << endl;

    return 0;
}

int main_B() {
    int num[9000001];
    memset(num,0,sizeof(num));

    int n;
    cin >> n;
    vector<int> a(n);
    REP(i,n) {
        cin >> a[i];
        num[a[i]]++;
    }

    ll ans = 0;
    for(int i=0; i<=3000; i++) {
        while(num[i]>1) {
            for(int j=i; j<=900000; j++) {
                if(num[j]==0) {
                    num[i]--;
                    num[j]++;
                    break;
                }
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

int main_A() {
    ll k,n,w;
    cin >> k >> n >> w;
    ll need = 0.5 * w * (w+1) * k;

    cout << (need-n<0?0:need-n) << endl;
    return 0;
}

