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

const int N = 1e6+1;


int32_t main(){
	fast_io();
	vector<pair<char, int>> directions;
	while(!cin.eof()){
		char d; int t;
		cin >> d;
		cin >> t;
		cin.ignore(2);
		directions.push_back({d,t});
	}
	complex<int> position = {0,0};
	complex<int> face = {0,1};
	map<char, complex<int>> m = {{'R',{0,-1}},{'L', {0,1}}};
	for(auto dir : directions){
		char d; int t;
		tie(d,t) = dir;
		face *= m[d];
		position += face * t;
		// debug(position);
	}
	int ans = abs(position.real()) + abs(position.imag());
	cout << "Answer: " << ans << endl;
}