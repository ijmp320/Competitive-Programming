#pragma warning( disable: 4996 )
#include <stdio.h>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

// New Year Contest 2015
// http://nyc2015.contest.atcoder.jp/assignments

int main_B()
{
	int n = 0;
	scanf("%d", &n);
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
 
	sort(a.begin(), a.end());
 
	int ans = 0;
	int weigh = 0;
	for (int i = 0; i < n; i++){
		if (a[i] > weigh){
			ans++;
			weigh += a[i];
		}
	}
	printf("%d\n", ans);
 
	return 0;
}


int count32bit(unsigned v)
{
	unsigned count = (v & 0x55555555) + ((v >> 1) & 0x55555555);
	count = (count & 0x33333333) + ((count >> 2) & 0x33333333);
	count = (count & 0x0f0f0f0f) + ((count >> 4) & 0x0f0f0f0f);
	count = (count & 0x00ff00ff) + ((count >> 8) & 0x00ff00ff);
	return (count & 0x0000ffff) + ((count >> 16) & 0x0000ffff);
}
bool MSB32bit(unsigned v, int &out)
{
	if (v == 0) return false;
	v |= (v >> 1);
	v |= (v >> 2);
	v |= (v >> 4);
	v |= (v >> 8);
	v |= (v >> 16);
	out = count32bit(v) - 1;
}
 
int bit_reverse(int n){
	int i = 0;
	int count = 0;
	while (n != 0){
		int t = (n & (1 << (count + 1)) - 1) >> count;
		i <<= 1;
		i += t;
		n >>= 1;
	}
	return i;
}
 
int main()
{
	int n = 0;
	scanf("%d", &n);
 
	int bit_num = 0;
	MSB32bit(n, bit_num);
	bit_num++;
 
	int str1 = n & ((1 << (bit_num / 2)) - 1);
	
	int str2 = n >> (bit_num - bit_num / 2);
	int rev = bit_reverse(str2);
 
	if (str1 == rev){
		printf("Yes\n");
	}
	else printf("No\n");
 
	return 0;
}
