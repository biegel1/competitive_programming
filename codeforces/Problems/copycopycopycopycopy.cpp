#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		vector<long> nums; 
		for(int i =0; i<n; i++){
			long val; 
			cin >> val; 
			nums.push_back(val); 
		}
		sort(nums.begin(), nums.end()); 
		int ans = 1; 
		for(int i = 0; i<n-1; i++){
			if(nums[i] < nums[i+1]){
				ans++; 
			}
		}

		cout << ans << endl; 
	}

}

int main(){
	solve();
	return 0; 
}
