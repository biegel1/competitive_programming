#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n; 
	cin >> n;
	vector<int> nums; 
	int val; 
	for(int i = 0; i<n;i++){
		cin >> val; 
		nums.push_back(val); 
	}
	int sum = 0; 
	int cnt_0 = 0; 

	for(int i = 0; i< n; i++){
		sum +=nums[i]; 
		if(nums[i] == 0){
			cnt_0 +=1;
		}
	}

	if(n == 1 && nums[0] == 0){
		cout << 1 << endl;
	}
	else if(n==1 && nums[0] == 1){
		cout << 0 << endl;
	}
	else{
		for(int i = 0; i<n; i++){
			for(int j = i; j<n; j++){
				vector<int> helper_nums = nums;
				int current_sum = 0; 
				for(int k = 0; k<n; k++){
					if(k>= i && k <= j){
						helper_nums[k] = 1-helper_nums[k];
					}
					current_sum+=helper_nums[k];
				}
				sum = max(sum, current_sum);
			}
		}
		if(cnt_0 == 0){
			cout << sum - 1 << endl;
		}
		else{
			cout << sum << endl;
		}
	}




}

int main(){
	solve(); 
	return 0;
}

