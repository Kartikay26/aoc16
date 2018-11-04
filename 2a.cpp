// kartikay26
#include <bits/stdc++.h>
using namespace std;
#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(x) x.begin(), x.end()
#ifndef ONLINE_JUDGE
#include "prettyprint.hpp"
#define debug(...) cout << "debug: " << #__VA_ARGS__ " = " << make_tuple(__VA_ARGS__) << endl
#else
#define debug(...) 0
#endif
typedef long long int ll;
#define int ll
typedef vector<int> vi;
typedef pair<int, int> pii;

int x=1, y=1;

map<pii, char> m;

void initmap(){
	const string ss[] = {"123",
						 "456",
						 "789"};
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if(ss[j][i] != ' ')
				m[{i,j}] = ss[j][i];
		}
	}
}

void move(char c){
	if (c == 'U') {if(m.count({x,y-1})) y--;};
	if (c == 'D') {if(m.count({x,y+1})) y++;};
	if (c == 'L') {if(m.count({x-1,y})) x--;};
	if (c == 'R') {if(m.count({x+1,y})) x++;};
}

int32_t main(){
	fast_io();
	initmap();
	// debug(m);
	while(!cin.eof()){
		string s;
		getline(cin, s);
		if(s=="") break;
		for(char c : s){
			move(c);
			// debug(c,m[{x,y}]);
		}
		cout << m[{x,y}];
	}
	cout << endl;
}