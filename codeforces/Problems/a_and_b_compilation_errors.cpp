#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n; 
	cin >> n; 
	int val; 
	long long sum = 0; 
	long long sum1 = 0;
	long long sum2 = 0; 
	for(int i = 0; i < n; i++){
		cin >> val;
		sum+=val;
	}
	for(int i = 0; i< n-1; i++){
		cin >> val; 
		sum1+=val;
	}
	for(int i = 0; i<n-2; i++){
		cin >> val; 
		sum2+=val;
	}
	long long ans1 = sum - sum1; 
	long long ans2 = sum1 - sum2; 
	cout << ans1 << endl; 
	cout << ans2 << endl; 







}

int main(){
	solve(); 
	return 0; 
}
