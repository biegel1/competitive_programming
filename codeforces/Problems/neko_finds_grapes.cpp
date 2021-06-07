#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
	long n, m;
	cin >> n >> m;
	vector<long> a; 
	vector<long> b; 
	long k; 
	for(int i = 0; i < n; i++){
		cin >>k;  
		a.push_back(k);
	}
	for(int j = 0; j < m; j++){
		cin >> k; 
		b.push_back(k);
	}
	int ans =0;
	int c0, c1; 
	int k0, k1; 
	c0 = 0; 
	c1 = 0; 
	k0 = 0; 
	k1 = 0; 
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			c0++;
		}
		else{
			c1++;
		}
	}
	for(int j = 0; j< m; j++){
		if(b[j] % 2 == 0){
			k0++;
		}
		else{
			k1++;
		}
	}
	ans = min(c0, k1) + min(c1, k0);
		
	cout << ans << endl;

}

int main(){
	solve();
	return 0;
}
