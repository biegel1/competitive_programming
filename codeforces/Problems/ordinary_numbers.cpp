#include<bits/stdc++.h>
#include<string>

using namespace std; 


void solve(){
	int t; 
	cin >> t; 
	while(t--){
		long long n; 
		cin >> n; 
		int res = 0; 
		int count =0;
		string seed = "1";
		long long seed_copy = 1;
		for(int i = 0; i<9; i++){
			for(int j = 0; j<9; j++){
				if(seed_copy <= n){
					res++; 
				}
				seed_copy+=stoll(seed);
			}
			seed.push_back('1');
			seed_copy = stoll(seed);
		}
		cout << res << endl; 
	}
}

int main(){
	solve(); 
	return 0; 
}
