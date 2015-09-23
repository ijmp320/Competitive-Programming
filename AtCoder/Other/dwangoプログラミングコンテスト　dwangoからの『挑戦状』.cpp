#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <math.h>
#include <algorithm>
using namespace std;

// dwango�v���O���~���O�R���e�X�g�@dwango����́w�����x
// http://dwango2015-prelims.contest.atcoder.jp/assignments

// �����_��@
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

// �����_��@
int main_B()
{
	char s[100010];
	int sum = 0;  // ���v��
	scanf("%s", &s);

	// �J�n�n�_�����炷
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

	// sum�ɑ���
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
