#include <iostream>;
#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n, m; 
	cin >> n >> m;
	int x = n*m;
	int ans;
	if(x%2 == 0){
		ans = x/2;
	}
	else{
		ans = (x+1)/2;
	}


	cout << ans << endl;
}

int main(){
	int t; 
	cin >> t;

	while(t--){
		solve();
	}
	return 0;
}
