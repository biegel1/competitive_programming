#include<bits/stdc++.h>

using namespace std; 

int nums[1000000]; 
int cnt[1000000]; 

void solve(){
	int n; 
	cin >> n; 
	long long sum = 0; 
	long long ans = 0; 
	for(int i =0; i<n; i++){
		cin >> nums[i]; 
		sum+=nums[i]; 
	}
	if(sum%3 !=0){
		cout << 0 << "\n"; 
	}
	else{
		long long target_sum = sum/3; 
		long long ss = 0; 
		for(int i =n-1; i>=0; i--){
			ss+=nums[i]; 
			if(ss == target_sum){
				cnt[i] = 1; 
			}
		}
		ss =0; 
		for(int i = n-2; i>=0; i--){
			cnt[i] +=cnt[i+1]; 
		}
		for(int i =0; i+2 <n; i++){
			ss+=nums[i]; 
			if(ss == target_sum){
				ans+=cnt[i+2]; 
			}
		}
		cout << ans << endl; 
	}

}

int main(){
	solve(); 
	return 0; 
}
