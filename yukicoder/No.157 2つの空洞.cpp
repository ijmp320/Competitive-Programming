#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// No.157 2つの空洞
// http://yukicoder.me/problems/233

int W,H;
char c[22][22];
vector<P> cave1;
vector<P> cave2;

bool sec = false;
void dfs(int x, int y) {
    c[y][x] = '#';
    if(!sec) cave1.push_back(P(x,y));
    else  cave2.push_back(P(x,y));

    rep(i,4) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && nx < W && ny >= 0 && ny < H) {
            if(c[ny][nx] == '.') dfs(nx, ny);
        }
    }
    return;
}

int main() {
    cin >> W >> H;
    rep(i,H) {
        scanf("%s", c[i]);
    }

    rep(y,H) {
        rep(x,W) {
            if(c[y][x] == '.') {
                dfs(x, y);
                sec = true;
            }
        }
    }

    int ans=INF;
    int siz1 = cave1.size();
    int siz2 = cave2.size();
    rep(i,siz1) {
        rep(j,siz2) {
            ans = min(ans, abs(cave1[i].x - cave2[j].x) + abs(cave1[i].y - cave2[j].y));
        }
    }
    printf("%d\n",ans-1);
    return 0;
}
