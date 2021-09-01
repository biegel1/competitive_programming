#include<bits/stdc++.h>

using namespace std; 

long long compute_moves(int n, long long seed){
	long long ans=0; 
	if(n==1){
		return 0; 
	}
	while(n > 1){
		ans = (compute_moves(n-2, seed+1)+(8*seed * seed)); 
		return ans; 
	}

}
void solve(){
	int t; 
	cin >> t; 
	long long maxN = 5*10^5; 
	long long dp[maxN] ={0}; 
	long long counter = 1; 
	while(t--){
		int n; 
		cin >> n; 
		long long ans = compute_moves(n, 1); 
		cout << ans << endl; 

	}


}

int main(){
	solve(); 
	return 0; 
}
