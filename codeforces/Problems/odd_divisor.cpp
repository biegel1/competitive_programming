#include<bits/stdc++.h>


using namespace std; 

void solve(){
	int t; 
	long long n; 
	cin >> t; 
	while(t--){
		cin >> n; 
		while(!(n&1)){
			n>>=1; 
		}
		if(n==1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl; 
	}
}

int main(){
	solve(); 
	return 0; 
}
