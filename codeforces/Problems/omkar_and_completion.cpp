#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		vector<int> ans; 
		for(int i = 0; i<n; i++){
			ans.push_back(1); 
		}
		for(int i =0; i<n; i++){
			cout << ans[i] << " "; 
		}
		cout << endl; 
	}

}

int main(){
	solve(); 
	return 0; 
}
