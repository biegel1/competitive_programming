#include<bits/stdc++.h>

using namespace std; 

void solve(){
	long long n,m; 
	cin >> n >> m; 
	vector<long long> arr; 
	for(int i =0; i<n; i++){
		long long val; 
		cin >> val; 
		arr.push_back(val); 
	}
	long long maxN = 10e5; 
	long long dp[maxN] = {0}; 
	set<long long> s; 
	for(int i =n-1; i>=0; i--){
		s.insert(arr[i]);
		dp[i] = s.size(); 
	}
	//dp goes here
	while(m--){
		long long l;
		cin >> l; 
		long long ans = dp[l-1]; 
		cout << ans << endl; 
	}
}

int main(){
	solve(); 
	return 0; 
}
