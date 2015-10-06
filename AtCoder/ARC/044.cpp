#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,n) for(int i=a;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()
#define MP(a,b) make_pair(a,b)
#define PB(a) push_back(a)
const int INF = 1e9;

// AtCoder Regular Contest 044
// http://arc044.contest.atcoder.jp/assignments

#define A
#ifdef A
// after contest
int main() {
    int N;
    cin >> N;
    if(N==1) {
        cout << "Not Prime" << endl;
        return 0;
    }
    if(N==2 || N==3 || N==5) {
        cout << "Prime" << endl;
        return 0;
    }
    if(N%2==0 || N%3==0 || N%5==0) {
        cout << "Not Prime" << endl;
        return 0;
    }
    cout << "Prime" << endl;
    return 0;
}

// during contest
int main_my() {
    int N;
    cin >> N;
    if(N==1) {
        cout << "Not Prime" << endl;
        return 0;
    }
    if(N==2) {
        cout << "Prime" << endl;
        return 0;
    }
    for(int i=2; i<sqrt(N)+1; i+=1){
		if(N % i == 0){
            if(N%2==0 || N%3==0 || N%5==0) {
                cout << "Not Prime" << endl;
            }
            else {
                cout << "Prime" << endl;
            }
			return 0;
		}
	}
    cout << "Prime" << endl;
    return 0;
}
#endif

