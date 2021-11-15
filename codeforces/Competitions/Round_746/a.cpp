#include<bits/stdc++.h>
#include<string>

using namespace std; 

void solve(){
	int t; 
	cin >>t; 
	while(t--){
		long long n, H; 
		cin >>n >> H; 
		vector<long long> damages; 
		for(int i =0; i<n; i++){
			long long val; 
			cin >> val; 
			damages.push_back(val); 
		}
		sort(damages.begin(), damages.end()); 
		long long damage = damages[damages.size()-1]+ damages[damages.size()-2]; 
		long long trials; 
		if(H%damage == 0){
			trials = (H/damage)*2; 
		}
		else{
			long long taken = H/damage; 
			long long rest = H%damage; 
			rest = (H%damage-damages[damages.size()-1] <=0 ? 1 : 2); 
			trials = ((H/damage)*2) + rest; 
		}
		cout << trials << endl; 
	}

}


int main(){
	solve(); 
	return 0;
}
