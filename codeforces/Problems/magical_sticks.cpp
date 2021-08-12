#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		if(n ==1){
			cout << 1 << endl; 
		}
		else{
			if(n%2 == 0){
				cout << n/2 << endl; 
			}
			else{
				cout << n/2 + 1 << endl; 
			}
		}
	}
}

int main(){
	solve(); 
	return 0; 
}

