#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	long long n, k; 
	while(t--){
		cin >> n>> k; 
		if(k*k <=n&& (n+k)%2 ==0){
			cout << "YES" << "\n"; 
		}
		else{
			cout << "NO" << "\n"; 
		}

	}

}

int main(){
	solve(); 
	return 0; 
}
