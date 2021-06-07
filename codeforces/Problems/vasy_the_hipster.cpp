#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
	int r, b, m; 
	cin >> r >> b; 
	m = min(r, b); 
	r = r-m; 
	b = b- m; 
	int ans = 0; 
	if(r ==0){
		if(b%2 == 0){
			ans = b/2; 
		}
		else{
			ans = (b-1)/2; 
		}
	}
	else{
		if(r%2 ==0){
			ans = r/2; 
		}
		else{
			ans = (r-1)/2; 
		}
	}

	cout << m << " "  << ans << endl; 
}


int main(){
	solve(); 
	return 0;
}
