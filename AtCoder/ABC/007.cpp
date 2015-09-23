#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,n) for(int i=a;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()
#define MP(a,b) make_pair(a,b)
#define PB(a) push_back(a)
const int INF = 1e9;

// AtCoder Beginner Contest 007
// http://abc007.contest.atcoder.jp/assignments

#define D
#ifdef D
int main() {
    return 0;
}
#endif

#ifdef C
const int DX[4]={0,1,0,-1}, DY[4]={-1,0,1,0};
bool already[50][50];
int dist[50][50];
struct bfs{
    int depth;
    int x;
    int y;
};
int main() {
    int H,W,sy,sx,gy,gx;
    cin >> H >> W >> sy >> sx >> gy >> gx;
    REP(i,H) {
        string s;
        cin >> s;
        REP(j,W) {
            if(s[j]=='#') already[i][j] = true;
        }
    }
    sx--; sy--; gx--; gy--;

    bfs start;
    start.depth = 0;
    start.x = sx;
    start.y = sy;

    queue<bfs> q;
    q.push(start);
    while(!q.empty()) {
        bfs b = q.front(); q.pop();

        if(already[b.y][b.x]) continue;
        dist[b.y][b.x] = b.depth;
        already[b.y][b.x] = true;

        if(b.x == gx && b.y == gy) {
            cout << b.depth << endl;
            return 0;
        }
        REP(i,4) {
            int nx = b.x + DX[i];
            int ny = b.y + DY[i];
            if(nx<0 || ny<0 || nx>=W || ny>=H || already[ny][nx]) continue;

            bfs nb = b;
            nb.depth++;
            nb.x = nx;
            nb.y = ny;
            q.push(nb);
        }
    }
    cout << dist[gy][gx] << endl;
    return 0;
}
#endif

#ifdef B
int main() {
    string s;
    cin >> s;
    if(s=="a") cout << -1 << endl;
    else cout << "a" << endl;
    return 0;
}
#endif

#ifdef A
int main() {
    int n;
    cin >> n;
    cout << n-1 << endl;
    return 0;
}
#endif

