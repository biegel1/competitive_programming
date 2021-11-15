#include<bits/stdc++.h>

using namespace std; 

#define ll long long

void solve(){
	ll n; 
	cin >> n; 
	vector<ll> vals; 
	vals.push_back(n); 
	while(n>1){
		if(n%2 ==0){
			n/=2; 
		}
		else{
			n=(n*3)+1; 
		}
		vals.push_back(n); 
	}
	for(int i =0; i<vals.size(); i++){
		cout << vals[i] << " "; 
	}
	cout << endl; 
}

int main(){
	solve(); 
	return 0; 
}
