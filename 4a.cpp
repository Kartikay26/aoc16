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

/* --- WARNING: BAD CODE AHEAD: READ IT AT YOUR OWN RISK --- */

int32_t main(){
	fast_io();
	string s;
	int ans = 0;
	while(cin >> s){
		map<char, int> mp;
		int i = 0;
		int k1 = s.find_last_of("-");
		int k2 = s.find("[");
		int secid = stoll(s.substr(k1+1,k2-k1-1));
		while(i<s.size()){
			char c = s[i];
			if ('a' <= c and c <= 'z') {
				mp[c]++;
			}
			if (c == '[') break;
			i++;
		}
		i++;
		vector<pair<int, char>> v;
		for(auto ci : mp){
			v.push_back({ci.second, 'a'+('z'-ci.first)});
		}
		sort(v.rbegin(), v.rend());
		bool flag = 1;
		auto it = v.begin();
		while(i<s.size()-1){
			char c = 'a' + ('z'-(*it).second);
			if (c != s[i]){
				flag = 0;
				break;
			}
			it++; i++;
		}
		ans += flag*secid;
	}
	cout << "Answer: " << ans << endl;
}