#include<bits/stdc++.h>

using namespace std; 

#define ll long long

int binary_search(ll val, vector<pair<ll, int>> a){
	ll low = 0; 
	ll high = a.size()-1; 
	ll middle; 
	while(low<=high){
		middle = (high+low)/2; 

		if(a[middle].first == val){
			return a[middle].second; 
		}
		else if(a[middle].first > val){
			high = middle -1; 
		}
		else if(a[middle].first <val){
			low = middle +1; 
		}
	}
	return -1; 
}


void solve(){
	ll n, x; 
	cin>> n>>x; 
	vector<pair<ll, int>> a; 
	set<pair<ll, int>> s; 
	for(int i =0; i<n; i++){
		ll val; 
		cin>>val; 
		s.insert({val, i+1}); 
		a.push_back({val, i+1}); 
	}
	ll val;
	int index1; 
	int index2; 
	bool found = false; 
	for(int i =0; i<a.size(); i++){
		val = a[i].first; 
		index1 = a[i].second; 
		s.erase({val, index1}); 
		auto it = s.lower_bound({abs(val-x), 0}); 
		if(it == s.end()||(*it).first + val != x){
			continue; 
		}
		else{
			found = true; 
			index2 = (*it).second; 
			break; 
		}
	}
	if(found){
		cout << index1<< " " << index2 <<endl; 
	}
	else{
		cout<< "IMPOSSIBLE" << endl; 
	}





}

int main(){
	solve(); 
	return 0; 

}
