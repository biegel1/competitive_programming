#include<bits/stdc++.h>

using namespace std; 

#define ll long long

void solve(){
	ll n; 
	cin >>n; 
	ll ans = 1; 
	ll m = 1000000007; 
	for(int i =0; i<n; i++){
		ans*=2; 
		ans = ans%m; 
	}

	cout <<ans<< endl;  


}

int main(){
	solve(); 
	return 0; 
}
