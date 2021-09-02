#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		vector<int>nums; 
		for(int i =0; i<n; i++){
			int val; 
			cin >> val; 
			nums.push_back(val); 
		}
		//find the shortest distance
		int maximum = 0; 
		int minimum = 100;
		int max_idx = 0; 
		int min_idx = 0; 
		for(int i = 0; i<n; i++){
			if(nums[i] > maximum){
				max_idx = i; 
				maximum = nums[i]; 
			}
			if(nums[i] < minimum){
				min_idx = i; 
				minimum = nums[i]; 
			}
		}
		int ans1 = 0; 
		int ans2 = 0; 
		if(min_idx <max_idx){
			ans1 = min_idx+1 + min(max_idx-min_idx, n-max_idx); 
			ans2 = n-max_idx + min(min_idx+1, max_idx-min_idx); 
			cout << min(ans1, ans2) << endl; 
		}
		else{
			ans1 = n-min_idx + min(max_idx+1, min_idx-max_idx); 
			ans2 = max_idx+1 + min(min_idx - max_idx, n-min_idx); 
			cout << min(ans1, ans2) << endl; 
		}



	}


	
}

int main(){
	solve(); 
	return 0; 
}
