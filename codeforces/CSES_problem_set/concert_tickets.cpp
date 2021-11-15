#include<bits/stdc++.h>

using namespace std; 

#define ll long long

ll binary_search(ll target, vector<ll> prices){
	ll low = 0; 
	ll high = prices.size()-1;  
	ll middle; 
	int result = -1; 
	while(low<=high){
		middle =(low+high)/2; 
		if(prices[middle] == target){
			result = middle; 
			low = middle+1; 
		}
		else if(prices[middle] <target){
			low = middle +1; 
		}
		else if(prices[middle] >target){
			high = middle - 1; 
		}
	}
	if(result !=-1){
		return result; 
	}
	return high; 
}

void solve(){
	int n, m; 
	cin >> n>>m; 
	set<array<ll, 2>> prices; 
	for(int i =0; i<n; i++){
		ll a; 
		cin >>a; 
		prices.insert({a, i}); 
	}
	for(int i =0; i<m; i++){
		ll t; 
		cin >>t; 
		auto it = prices.lower_bound({t+1}); 
		if(it== prices.begin()){
			cout << -1<<endl; 
		}
		else{
			--it; 
			cout << (*it)[0] << endl; 
			prices.erase(it); 
		}
	}
}

int main(){
	solve(); 
	return 0; 
}
