#include<bits/stdc++.h>

using namespace std; 

#define ll long long 

void solve(){
	int n; 
	cin >>n; 
	vector<ll> a(n); 
	for(int i =0; i<n; i++){
		cin >> a[i]; 
	}
	ll ans=0;  
	ll current = a[0]; 
	for(int i =1; i<n; i++){
		if(a[i] <= current){
			ans+= current-a[i]; 
		}
		else{
			current = a[i]; 
		}
	}

	cout<< ans << endl; 


}

int main(){
	solve(); 
	return 0; 
}
