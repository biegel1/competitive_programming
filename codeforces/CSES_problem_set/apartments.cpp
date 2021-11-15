#include<bits/stdc++.h>

using namespace std; 
#define ll long long

void solve(){
	ll ans = 0; 
	ll n, m, k; 
	cin >> n>> m>>k; 
	vector<ll> desired_apartment_sizes(n); 
	for(int i =0; i<n; i++){
		cin >> desired_apartment_sizes[i]; 
	}
	vector<ll> apartment_sizes(m); 
	for(int i =0; i<m; i++){
		cin>> apartment_sizes[i]; 
	}
	sort(desired_apartment_sizes.begin(), desired_apartment_sizes.end()); 
	sort(apartment_sizes.begin(), apartment_sizes.end()); 
	int p = 0; 
	int i = 0; 
	while(i<n && p<m){
		if(desired_apartment_sizes[i]>= apartment_sizes[p]-k && desired_apartment_sizes[i] <= apartment_sizes[p] +k){
			i++; 
			p++; 
			ans++; 
		}
		else if(desired_apartment_sizes[i] < apartment_sizes[p] - k){
			i++; 
		}
		else{
			p++; 

		}

	}
	cout << ans<< endl; 




}

int main(){
	solve(); 
	return 0; 
}
