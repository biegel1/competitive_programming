#include<bits/stdc++.h>

using namespace std; 

#define ll long long

int log_5(int n){
	return (log(n)/log(5)); 
}

void solve(){
	ll n; 
	cin >>n; 
	int k = log_5(n); 
	ll ans = 0; 
	ll val = 1; 
	for(int i =0; i<k; i++){
		val*=5; 
		ans += n/val; 
	}
	cout << ans << endl; 






}

int main(){
	solve(); 
	return 0; 
}
