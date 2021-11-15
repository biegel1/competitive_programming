#include<bits/stdc++.h>

#define ll long long

using namespace std; 

ll compute_smallest_difference_for_all_subsets(int n, vector<ll> vals, ll total_sum){
	vector<vector<ll>> differences; 
	ll ans = 10e9; 
	for(int i =0; i<pow(2, n); i++){
		int t = i; 
		vector<ll> v; 
		for(int j =0; j<n; j++){
			if(t&1){
				v.push_back(vals[j]); 
			}
			t>>=1; 		
		}
		ll val_sum = 0; 
		for(int k =0; k<v.size(); k++){
			val_sum+=v[k]; 
		}
		ans = min(ans, abs(2*val_sum - total_sum)); 
	}
	return ans; 
}




void solve(){
	int n; 
	cin >>n; 
	vector<ll> weights(n); 
	ll ans = 0; 
	ll total_sum = 0; 
	for(int i =0; i<n; i++){
		cin>> weights[i]; 
		total_sum+=weights[i]; 
	}

	ans = compute_smallest_difference_for_all_subsets(n, weights, total_sum); 
	cout << ans << endl; 
}

int main(){
	solve();
	return 0; 
}
