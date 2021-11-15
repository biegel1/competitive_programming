#include<bits/stdc++.h>

using namespace std; 
#define ll long long

void solve(){
	ll n, x; 
	cin >> n>>x; 
	vector<ll> w(n); 
	for(int i =0; i<n; i++){
		cin >> w[i]; 
	}
	sort(w.begin(), w.end()); 
	ll ans = 0; 
	if(n==1){
		ans = 1; 
	}
	else{
		int i =0; 
		int p =n-1; 
		int correction = 0; 
		while(i<p){
			if(w[i] + w[p] <= x){
				i++; 
				correction++; 
				ans++; 
			}
			p--; 
		}
		ans+= n-i - correction; 


	}
	cout << ans << endl; 


}

int main(){
	solve(); 
	return 0; 
}
