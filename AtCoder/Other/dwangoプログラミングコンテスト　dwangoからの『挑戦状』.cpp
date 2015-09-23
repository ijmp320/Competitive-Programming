#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <math.h>
#include <algorithm>
using namespace std;

// dwangoプログラミングコンテスト　dwangoからの『挑戦状』
// http://dwango2015-prelims.contest.atcoder.jp/assignments

// 部分点解法
int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	vector< vector<bool> > data;
	data.resize(N);
	for (int i = 0; i < N; i++){
		data[i].resize(i+1);
	}

	for (int i = 0; i < M; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		for (int y = 0; y < c; y++){
			for (int x = 0; x < y+1; x++){

				if ((a-1 + y) >= N+1)continue;
				if ((b-1 + x) >= (a + y + 1)) continue;
				
				data[a-1 + y][b-1 + x] = true;
			}
		}
	}

	int Q; scanf("%d", &Q);
	for (int i = 0; i < Q; i++){
		int sum = 0;
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		for (int y = 0; y < c; y++){
			for (int x = 0; x < y + 1; x++){
				if ((a - 1 + y) >= N + 1)continue;
				if ((b - 1 + x) >= (a + y + 1)) continue;

				if (data[a - 1 + y][b - 1 + x] == false) sum++;
			}
		}
		printf("%d\n", sum);
	}

	return 0;
}

// 部分点解法
int main_B()
{
	char s[100010];
	int sum = 0;  // 合計回数
	scanf("%s", &s);

	// 開始地点をずらす
	bool connect = false;
	int connection = 0;
	vector<int> connection_num;

	for (int i = 0;;){
		if (s[i] == '\0') {
			connection_num.push_back(connection + 1);
			break;
		}

		if (s[i] != '2'){
			if (connect){
				connect = false;
				connection_num.push_back(connection + 1);
				connection = 0;
			}
			i++;
			continue;
		}
		
		if (s[i + 1] != '5'){
			if (connect){
				connect = false;
				connection_num.push_back(connection + 1);
				connection = 0;
			}
			i ++;
			continue;
		}

		connection++;
		if (!connect) {
			connect = true;
		}
		i += 2;
	}

	// sumに足す
	int ln = connection_num.size();
	for (int i = 0; i < ln; i++){
		sum += ((connection_num[i] - 1)*connection_num[i]) / 2;
	}

	printf("%d\n", sum);
	return 0;
}

int main_A()
{
	int n, x;
	scanf("%d", &n);
	scanf("%d", &x);
	printf("%d\n", (n - x) * 525 + x * 540);
	return 0;
}
