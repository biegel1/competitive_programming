#include<bits/stdc++.h>
#include<string>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n, k; 
		cin >> n>> k; 
		map<int, pair<int, int>> indices; 
		int counter = 1; 
		bool done = false; 
		int round = 1; 
		for(int i= 2; i<=n; i++){
			for(int j = round; j>0; j--){
				if(counter == k){
					indices[0] = make_pair(n-i, n-i+j); 
					counter++; 
					done = true; 
					break; 
				}
				counter++; 
			}
			round++; 
			if(done){
				break; 
			}
		}
		string ans(n, 'a'); 
		ans[indices[0].first] = 'b'; 
		ans[indices[0].second] = 'b'; 
		cout << ans << endl; 

	}

}

int main(){
	solve(); 
	return 0; 
}
