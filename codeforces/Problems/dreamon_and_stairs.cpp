#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n, m; 
	cin >> n>> m; 
	int ones = n; 
	int twos = 0; 
	int ans = -1; 
	while(ones+2*twos == n&& ones >=0){
			if((ones +twos)%m ==0){
				ans = ones+twos; 
			}
			ones-=2; 
			twos+=1; 
	}
	cout << ans << endl; 
}



int main(){
	solve(); 
	return 0; 
}
