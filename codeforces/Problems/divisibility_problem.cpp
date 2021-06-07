#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
	int a, b; 
	int ans =0; 
	cin >> a >> b; 
	if(a%b ==0){
		cout << ans << endl;
	}
	else{
		ans = b-a%b;
		cout << ans << endl;
	}
}

int main(){
	int t; 
	cin >> t; 
	while(t--){
		solve();
	}
	return 0;
}
