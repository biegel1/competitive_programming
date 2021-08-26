#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n; 
	long long x; 
	cin >> n >> x; 
	int ans = 0; 
	for(int i =1 ; i<=sqrt(x) ; i++){
		if(x%i == 0){
			if(x/i <= n){
				ans++; 
				if(x/i != i){
					ans++; 
				}

			}
		}
	}
	cout << ans << endl; 
}

int main(){
	solve(); 
	return 0;  
}
