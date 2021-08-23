#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	vector<int> nums; 
	for(int i=1; i<=10000; i++){
		if(i%3 != 0 && i%10 !=3){
			nums.push_back(i); 
		}
	}
	while(t--){
		int k; 
		cin >> k; 
		cout << nums[k-1] << endl; 
	}
}

int main(){
	solve(); 
	return 0;
}
