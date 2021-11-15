#include<bits/stdc++.h>

using namespace std; 
#define ll long long

void solve(){
	int n; 
	cin >>n; 
	vector<ll> p(n); 
	for(int i =0; i<n; i++){
		cin >> p[i]; 
	}
	sort(p.begin(), p.end()); 
	ll val; 
	val = p[n/2]; 
	ll cost = 0; 
	for(int i =0; i<n; i++){
		cost+=abs(val-p[i]); 
	}
	cout<< cost << endl; 



	
	

	
}

int main(){
	solve(); 
	return 0; 
}
