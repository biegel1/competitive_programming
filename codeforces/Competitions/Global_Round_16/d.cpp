#include<bits/stdc++.h>

using namespace std; 


void solve(){
	int t; 
	cin >> t; 
	while(t--){
		unordered_map<int, int> map; 
		vector<long long> a; 
		vector<long long> b; 
		int n, m; 
		cin >> n>>m; 

		for(int i =0; i<m; i++){
			long long val; 
			cin >> val; 
			a.push_back(val); 
			b.push_back(val); 
			map[i] = val; 
		}
		sort(b.begin(), b.end()); 
		int val= -1; 
		vector<long long> seat_distribution; 
		for(int i =0; i<m; i++){
			for(int j= 0; j<m; j++){
				if(map[i] == b[j]){
					while(j+1 <m && b[j] == b[j+1]){
						j++; 
					}
					b[j] = val; 
					val--; 
					seat_distribution.push_back(j); 
				}
			}
		}
		int ans = 0; 
		bool occupied[m+1] = {0}; 
		for(int i =0; i<m; i++){

			for(int j =0; j<=seat_distribution[i]; j++){
				if(occupied[j]){
					ans++; 
				}
			}
			occupied[seat_distribution[i]] = true; 
		}
		cout << ans << endl; 
	}

}

int main(){
	solve(); 
	return 0;
}
