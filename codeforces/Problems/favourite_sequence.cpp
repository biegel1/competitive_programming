#include<bits/stdc++.h>

using namespace std;

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		vector<long long> a; 
		vector<long long> b; 
		long long ans[n]; 
		for(int i = 0; i < n; i++){
			long long val; 
			cin >> val; 
			a.push_back(val); 
			b.push_back(val); 
		}
		reverse(b.begin(), b.end()); 
		int j=0; 
		int k= 0; 
		for(int i = 0; i<n; i++){
			if(i%2 == 0){
				ans[i] = a[j];
				j++;
			}
			else{
				ans[i] = b[k]; 
				k++;
			}
		}

		
		for(auto x: ans){
			cout << x << " "; 
		}
		cout << endl; 



	}
		
}

int main(){
	solve(); 
	return 0; 
}
