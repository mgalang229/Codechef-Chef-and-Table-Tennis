#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	string s;
	cin >> s;
	int c=0, op=0;
	for(int i=0; i<(int)s.size(); ++i) {
		if(s[i]=='1') c++;
		else op++;
	}
	if(c==11||op==11) {
		if(c>op) cout << "WIN";
		else cout << "LOSE";
	} else {
		if(c>op&&c-op==2) cout << "WIN";
		else cout << "LOSE";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		solve();
	}
}
