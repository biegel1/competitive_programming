#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		int val; 
		vector<int> vals; 
		for(int i = 0; i<n; i++){
			cin >> val; 
			vals.push_back(val);
		}
		int ans = 1e7; 
		while(vals.size()>0){
			int max_val = *max_element(vals.begin(), vals.end());
			for(int i = 0; i < vals.size(); i++){
				int current = max_val&vals[i];
				vals[i] = current;
			}
			ans = max_val;
			vals.erase(remove(vals.begin(), vals.end(), max_val), vals.end());
		}

		cout << ans << endl;


	}

}

int main(){
	solve(); 
	return 0;
}
