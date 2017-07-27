#include <bits/stdc++.h>
using namespace std;
#define z  26
int n;
bool good[z];
string goods, pattern;
bool check(string pattern, string s){
	if(pattern.size() != s.size())
		return 0;
	for(int i = 0; i < s.size(); i++)
		if(pattern[i] != '?'){
			if(s[i] != pattern[i])
				return 0;
		}
		else
			if(!good[s[i] - 'a'])
				return 0;				
	return 1;
}
int main(){
	cin >> goods >> pattern >> n;
	for(auto c : goods)
		good[c - 'a'] = 1;
	auto p = pattern.find('*');
	for(string s; n--; ){
		cin >> s;
		if(s.size() < pattern.size() - 1)
			cout << "NO" << '\n';
		else if(p == string :: npos)
			cout << (check(pattern, s) ? "YES" : "NO") << '\n';
		else{
			bool flag = 1;
			flag &= check(pattern.substr(0, p), s.substr(0, p));
			reverse(pattern.begin(), pattern.end());
			reverse(s.begin(), s.end());
			p = pattern.size() - p - 1;
			flag &= check(pattern.substr(0, p), s.substr(0, p));
			reverse(pattern.begin(), pattern.end());
			reverse(s.begin(), s.end());
			p = pattern.size() - p - 1;
			for(int i = p; i < s.size() - (pattern.size() - p - 1); i++)
				flag &= !good[ s[i] - 'a' ];
			if(flag)cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	return 0;
}
