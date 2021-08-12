#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int ans; 
		string number; 
		cin >> number; 
		int val = (int)number[0] - 48;
		ans = (val- 1)*4*(5)/2 + (number.size()* (number.size() + 1)/2); 
		cout << ans << endl; 
	}
}

int main(){
	solve(); 
	return 0; 
}
