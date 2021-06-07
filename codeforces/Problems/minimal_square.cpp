#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
	int a, b , l, ans; 
	cin >> a >> b; 
	l = max(min(a, b)*2, max(a, b));
	ans = l*l; 
	cout  << ans << endl; 
	

}

int main(){
	int t; 
	cin >> t; 
	while(t--){
		solve();
	}
	return 0; 
}
