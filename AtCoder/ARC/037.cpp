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

// AtCoder Regular Contest 037
// http://arc037.contest.atcoder.jp/assignments

int main() {
	int N,K;
	cin >> N >> K;
	vector<ll> a(N),b(N);
	map<ll,int> ma;
	map<ll,int> mb;
	REP(i,N) {
		cin >> a[i];
		if(ma.find(a[i])==ma.end()) ma[a[i]] = 1;
		else {
			ma[a[i]]++;
		}
	}
	REP(i,N) {
		cin >> b[i];
		if(mb.find(b[i])==mb.end()) mb[b[i]] = 1;
		else {
			mb[b[i]]++;
		}
	}

	int sum2 = 0;
	map<ll,int> res;
	for(auto itrA = ma.begin(); itrA != ma.end(); itrA++) {
		for(auto itrB = mb.begin(); itrB != mb.end(); itrB++) {
			ll s = (itrA->F) * (itrB->F);
			int num = (itrA->S) * (itrB->S);
			if(res.find(s)==res.end()) res[s] = num;
			else {
				res[s] += num;
			}
			sum2 += num;
			if(sum2 > K * 2) goto next;
		}
	}

	next:;

	int sum = 0;
	for(auto itr = res.begin(); itr != res.end(); itr++) {
		sum += itr->S;
		if(sum >= K) {
			cout << (itr->F) << endl;
			break;
		}
	}

	// vector<ll> res(N*N);
	// REP(i,N) {
	// 	REP(j,N) {
	// 		res[i*N + j] = a[i] * b[j];
	// 	}
	// }
	// sort(ALL(res));
	// cout << res[K-1] << endl;
	return 0;
}

struct UnionFind {
	vector<int> data;
	UnionFind(int size) : data(size, -1) { }
	bool unionSet(int x, int y) {
		x = root(x); y = root(y);
    	if(x != y) {
    		if(data[y] < data[x]) swap(x, y);
    		data[x] += data[y]; data[y] = x;
    	}
    	return x != y;
	}
	bool findSet(int x, int y) {
		return root(x) == root(y);
	}
	int root(int x) {
    	return data[x] < 0 ? x : data[x] = root(data[x]);
	}
	int size(int x) {
    	return -data[root(x)];
	}
};

int main_B() {
	int N,M;
	cin >> N >> M;
	UnionFind uf(N);
	map<int,int> s;
	REP(i,M) {
		int u,v;
		cin >> u >> v;
		if(uf.findSet(u-1,v-1) == true) {
			s[u-1]=0;
		}
		uf.unionSet(u-1,v-1);
	}

	int t = 0;
	set<int> a;
	for(auto itr = s.begin(); itr != s.end(); itr++) {
		a.insert(uf.root(itr->first));
	}

	set<int> root;
	REP(i,N) {
		root.insert(uf.root(i));
	}

	cout << root.size() - a.size() << endl;
	return 0;
}

int main_A() {
	int N;
	cin >> N;
	int ans = 0;
	int sum = 0;
	REP(i,N) {
		int t;
		cin >> t;
		sum += max(0,80-t);
	}
	cout << sum << endl;
	return 0;
}

