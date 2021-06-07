#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; 
	int ans = 0; 
	string s; 
	
	cin >> n >> s;

	vector<char> v; 

	for(int i = 0; i < s.size(); i++){ 
		if(i>0){
			if(s[i] !=v.back()){
				v.push_back(s[i]);
			}
			else{
				ans++;
			}
		}
		else{
			v.push_back(s[i]);
		}
	}

	cout << ans << endl;
}

int main(){
	solve();
}


