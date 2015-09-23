#include <bits/stdc++.h>
using namespace std;

// AtCoder Beginner Contest 028
// http://abc028.contest.atcoder.jp/assignments

int main_C() {
    int a[5];
    for(int i=0;i<5;i++) {
        cin >> a[i];
    }
 
    vector<int> ans;
    for(int i=0;i<3;i++) {
        for(int j=i+1;j<4;j++) {
            for(int k=j+1;k<5;k++) {
                ans.push_back(a[i]+a[j]+a[k]);
            }
        }
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(),ans.end());
    cout << ans[2] << endl;
    return 0;
}

int c[6];
int main_B() {
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++) {
        c[s[i]-'A']++;
    }
 
    cout << c[0];
    for(int i=1; i<6; i++) {
        cout << " " << c[i];
    }
    cout << endl;
    return 0;
}

int main_A() {
    int N;
    cin >> N;
    if(N<=59) cout << "Bad" << endl;
    else if(N<=89) cout << "Good" << endl;
    else if(N<=99) cout << "Great" << endl;
    else cout << "Perfect" << endl;
    return 0;
}
