#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <utility>
using namespace std;
const int INF = 100000000;
const int dx[4]={0,1,0,-1};
const int dy[4]={-1,0,1,0};

// Mysterious Worm  2015/02/06 AC
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0179

int main() {
	while(1) {
		char str[15];
		scanf("%s",str);
		if(str[0]=='0')break;
		string body(str);
		set<string> s;
		queue< pair<string,int> > q;
		q.push(make_pair(body,0));
		s.insert(body);

		while(1) {
			if(q.size()==0) {printf("NA\n");break;}
			string str_tmp(q.front().first);
			int deep = q.front().second;
			q.pop();

			bool change=false;
			for(int i=0,str_size=str_tmp.size()-1;i<str_size;i++) {
				char c1=str_tmp[i], c2=str_tmp[i+1];
				if(c1!=c2) {
					change=true;
					string str_n(str_tmp);
					if(c1!='r' && c2!='r') {
						str_n[i]='r';
						str_n[i+1]='r';
					}
					if(c1!='g' && c2!='g') {
						str_n[i]='g';
						str_n[i+1]='g';
					}
					if(c1!='b' && c2!='b') {
						str_n[i]='b';
						str_n[i+1]='b';
					}

					if(s.find(str_n)!=s.end()) continue;

					s.insert(str_n);
					q.push(make_pair(str_n, deep+1));
				}
			}
			if(!change) {
				printf("%d\n",deep);
				break;
			}
		}
	}
	return 0;
}

