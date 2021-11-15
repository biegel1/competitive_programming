#include<bits/stdc++.h>

using namespace std; 

#define ll long long 

void solve(){
	int n; 
	cin >>n; 
	int a[n+1] = {0}; 
	for(int i =0; i<n-1; i++){
		ll val; 
		cin >> val; 
		a[val] = 1; 
	}
	int ans; 
	for(int i =1; i<=n; i++){
		if(a[i] == 0){
			ans =i; 
		}
	}
	cout << ans << endl; 






}
int main(){
	solve(); 
	return 0; 
}
