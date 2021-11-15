#include<bits/stdc++.h>

using namespace std; 

long long binomial_coeff(long long n){
	long long ans =  (n*(n-1))/2; 
	return ans; 
}

void solve(){
	long long n, m; 
	cin >> n>>m; 
	long long k_min, k_max; 
	long long test; 
	long long z = n-m; 
	long long arg = n/m; 
	k_max = (z+1)*(z)/2; 
	if(z-m ==m){
		k_min = m; 
	}
	else{
		k_min = (m-(n%m))*binomial_coeff(arg) + (n%m)*binomial_coeff(arg + 1); 
	}

	cout << k_min << " " << k_max << endl; 


}

int main(){
	solve(); 
	return 0; 
}
