#include<bits/stdc++.h>

using namespace std; 

void solve(){
	long long n, t; 
	cin >> n >> t; 
	vector<long long> estimations; 
	for(int i =0; i<n; i++){
		long long val; 
		cin >> val; 
		estimations.push_back(val); 
	}
	int ans = 0; 
	int p2 = 0; 
	long long sum=0; 
	int counter = 0; 
	long long helper_t = t; 
	for(int i =0; i<n; i++){
		while(estimations[p2] <=helper_t&&p2<n){
			helper_t-=estimations[p2]; 
			sum +=estimations[p2]; 
			counter++; 
			p2++; 
		}
		sum-=estimations[i]; 
		helper_t+=estimations[i]; 
		ans = max(ans, counter); 
		counter--; 

	}
	cout << ans << endl; 
	




	
}

int main(){
	solve(); 
	return 0; 
}
