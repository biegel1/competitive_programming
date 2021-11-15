#include<bits/stdc++.h>

using namespace std; 

#define ll long long 
#define pb push_back

void solve(){
	int n; 
	cin >>n; 
	vector<ll> x(n); 
	for(int i =0; i<n; i++){
		cin >> x[i]; 
	}
	sort(x.begin(), x.end()); 
	ll ans = 1; 
	for(int i =0; i<n && x[i] <=ans; i++){
		ans+=x[i]; 
	}
	cout << ans<< endl;  
}

int main(){
	solve(); 
	return 0; 
}
