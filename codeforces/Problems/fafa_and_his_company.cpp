#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n; 
	cin >>n; 
	int ans = 0; 
	if(n==2){
			cout << 1 << endl; 
	}
	else{
		int l =1; 
		while((n/2)-l>=0){
			if((n-l)%l == 0){
				ans++; 
			}
			l++; 
		}
		cout << ans << endl; 
	}
}



int main(){
	solve();
	return 0; 
}
