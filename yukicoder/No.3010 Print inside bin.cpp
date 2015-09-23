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

// No.3010 Print inside /bin
// http://yukicoder.me/problems/512

#include <dirent.h>
int main() {
    const char* path = "/bin";
    DIR *dp;       // ディレクトリへのポインタ
    dirent* entry; // readdir() で返されるエントリーポイント
    dp = opendir(path);
    if (dp==NULL) exit(1);
    vector<string> a;
    do {
    entry = readdir(dp);
    if (entry != NULL)
        a.PB(entry->d_name);
    } while (entry != NULL);

    sort(ALL(a));
    FOR(i,2,a.size()) {
        cout << a[i] << endl;
    }
    return 0;
}
