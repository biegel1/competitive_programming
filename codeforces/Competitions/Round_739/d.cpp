#include<bits/stdc++.h>

using namespace std; 


void solve(){
	int t; 
	cin >> t; 
	vector<string> powers;
	for(long long power  = 1; power <= 2e18; power*=2){
		powers.push_back(to_string(power)); 
	}

	while(t--){
		string n;
		cin >> n;
		int ans = 100; 
		for(auto p: powers){
			int taken = 0; 
			int p1 = 0; 
			int p2 = 0; 
			while((p1 < n.size()) && (p2 < p.size())){
				if(n[p1] == p[p2]){
					p2++; 
					taken++; 
				}
				p1++; 

			}
			int current = n.size() + p.size() - (2*taken); 
			ans = min(ans, current); 
		}
		cout << ans << endl; 
	}




}

int main(){
	solve(); 
	return 0;
}
