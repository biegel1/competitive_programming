#include<bits/stdc++.h>

using namespace std; 

#define ll long long

void solve(){
	int n; 
	cin>>n; 
	ll a, b; 
	ll max_ans = 0; 
	ll ans = 0; 
	vector<pair<ll, int>> times; 
	for(int i =0; i<n; i++){
		cin>> a>> b; 
		times.push_back({a, 0}); 
		times.push_back({b, 1}); 
	}
	sort(times.begin(), times.end()); 
	for(int i =0; i<times.size(); i++){
		if(times[i].second ==0){
			ans++; 
		}
		else{
			ans--; 
		}
		max_ans = max(ans, max_ans); 
	}
	cout << max_ans<< endl; 




}

int main(){
	solve(); 
	return 0; 
}
