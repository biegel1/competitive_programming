#include<bits/stdc++.h>

using namespace std; 

#define ll long long

void solve(){
	int n; 
	cin >>n; 
	ll val; 
	set<ll> s; 
	for(int i = 0; i<n; i++){
		cin >> val; 
		s.insert(val); 
	}
	cout << s.size()<< endl; 
	


}

int main(){
	solve(); 
	return 0; 

}

