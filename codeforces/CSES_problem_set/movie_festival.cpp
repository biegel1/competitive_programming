#include<bits/stdc++.h>

using namespace std; 
#define ll long long

void solve(){
	int n; 
	cin >>n; 
	vector<pair<ll, ll>> movies; 
	ll a, b; 
	for(int i =0; i<n; i++){
		cin >> a >> b; 
		movies.push_back({b, a}); 
	}
	sort(movies.begin(), movies.end()); 
	ll ans = 1; 
	ll current_right = movies[0].first; 

	for(int i =1; i<movies.size(); i++){
		ll next_left = movies[i].second; 
		ll next_right = movies[i].first; 
		if(current_right <= next_left){
			ans++; 
			current_right = next_right; 
		}
	}
	cout << ans  << endl; 




}

int main(){
	solve(); 
	return 0; 
}
