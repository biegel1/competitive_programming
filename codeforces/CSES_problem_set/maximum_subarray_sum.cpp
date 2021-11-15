#include<bits/stdc++.h>

using namespace std; 
#define ll long long

void solve(){
	int n; 
	cin >>n; 
	ll x[n]; 
	for(int i =0; i<n; i++){
		cin >> x[i]; 
	}
	ll best = -10e9; ll	sum =-10e9; 
	for(int i =0; i<n; i++){
		sum = max(x[i], sum+x[i]); 
		best = max(best, sum); 
	}
	cout << best << "\n"; 


}

int main(){
	solve(); 
	return 0; 
}
