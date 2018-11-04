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
	vector<tuple<int, int, int>> v, tris;
	int x, y, z;
	while(cin >> x >> y >> z){
		v.push_back({x,y,z});
	}
	for (int i = 0; i < v.size(); i+=3) {
		tris.push_back({get<0>(v[i]), get<0>(v[i+1]), get<0>(v[i+2])});
		tris.push_back({get<1>(v[i]), get<1>(v[i+1]), get<1>(v[i+2])});
		tris.push_back({get<2>(v[i]), get<2>(v[i+1]), get<2>(v[i+2])});
	}
	int ans = 0;
	for(auto tri : tris){
		int x,y,z;
		tie(x,y,z) = tri;
		vector<int> v = {x,y,z};
		sort(all(v));
		tie(x,y,z) = {v[0], v[1], v[2]};
		if (z < (x+y)) ans++;
	}
	cout << "answer: " << ans << endl;
}