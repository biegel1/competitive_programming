#include<bits/stdc++.h>

using namespace std; 

int voidAbsorption(int n){
	return (n/2) + 10; 
}

int lightningStrike(int n){
	return n-10; 
}

void solve(){
	int t; 
	cin >>t; 
	int x, n, m; 
	while(t--){
		cin >> x>>n>>m; 
		while(x>20 && n >0){
			n--; 
			x = voidAbsorption(x); 
		}
		int ans = x-m*10; 
		cout << ((ans <=0) ? "YES":"NO")<< "\n"; 



	}



}

int main(){
	solve(); 
	return 0; 
}
