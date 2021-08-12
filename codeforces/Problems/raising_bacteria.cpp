#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

void solve(){
	int x; 
	int ans = 0; 
	cin >> x; 
	while(x){
		if(x&1 == true){
			ans++; 
		}
		x>>=1;
	}
	cout << ans << endl; 
}

int main(){
	solve(); 
	return 0; 
}
