#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		long long n; 
		long long k; 
		cin >> n >> k;
		long long low = 1; 
		long long high = 10e10;
		long long ans; 
		while(low<=high){
			long long middle = (low+high)/2; 
			long long sol = middle - middle/n; 
			if(sol<k){
				low = middle + 1; 
			}
			else if(sol>k){
				high = middle -1; 
			}
			else{
				ans = middle; 
				high = middle-1; 
			}
		}
		cout << ans << endl; 
	}


}

int main(){
	solve(); 
	return 0; 
}
