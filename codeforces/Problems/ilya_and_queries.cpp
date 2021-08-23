#include<bits/stdc++.h>

using namespace std; 

void solve(){
	string s; 
	cin >> s; 
	int m; 
	cin >>m; 
	int n = s.size(); 
	int dp[n] = {0}; 
	int ans; 
	for(int i=1; i<n; i++){
		if(s[i] == '.'&& s[i-1] == s[i]){
			dp[i]+=1; 
		}
		else if(s[i]=='#'&&s[i-1] == s[i]){
			dp[i]+=1; 
		}
		dp[i] += dp[i-1]; 
	}
	while(m--){
		int l, r; 
		cin >> l >> r; 
		ans = dp[r-1]-dp[l-1]; 
		cout << ans << '\n'; 
	}



}

int main(){
	solve(); 
	return 0; 
}

