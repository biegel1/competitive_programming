#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n; 
	cin >>n; 
	vector<int> values;
	for(int i=0; i<n; i++){
		int val; 
		cin >>val; 
		values.push_back(val); 
	}
	int ans = 0; 
	sort(values.begin(), values.end()); 
	for(int i =0; i<n-1; i++){
		ans+=values.back()-values[i]; 
	}
	cout << ans << endl; 


}

int main(){
	solve(); 
	return 0; 
}
