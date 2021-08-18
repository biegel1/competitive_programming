#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n, k;
	cin >> n >>k;
	int ans = 1;
	int val;
	vector<int> heights;
	for(int i = 0; i < n; i++){
		cin >> val;
		heights.push_back(val);
	}
	int best = 1e7;
	int sum = 0; 
	for(int i = 0; i<k ; i++){
		sum += heights[i];
	}
	int curr_sum = sum; 
	for(int i = k; i <n; i++){
		curr_sum+=heights[i]- heights[i-k];
		if(sum >= curr_sum){
			sum = curr_sum;
			ans = i-k+2;
		}
	}
	cout << ans << endl;



}

int main(){
	solve(); 
	return 0;

}
