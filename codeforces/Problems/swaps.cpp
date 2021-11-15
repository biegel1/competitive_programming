#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		int a[n]; 
		int b[n]; 
		for(int i = 0; i<n; i++){
			cin >> a[i]; 
		}
		for(int i=0; i<n; i++){
			cin >> b[i]; 
		}
		int ans =0; 
		if(a[0] < b[0]){
			cout << ans << endl; 
		}
		else{
			map<int, int> pos_a; 
			map<int, int> pos_b; 
			for(int i = n-1; i>=0; i--){
				pos_a[a[i]] = i; 
				pos_b[b[i]] = i; 
			}
			ans = 10e5; 
			int l = 10e5; 
			for(int i =2*n;i>0; i--){
				if(i%2 ==0){
					l = min(l, pos_b[i]); 
				}
				else{
					ans = min(ans, pos_a[i]+l); 
				}
				cout << ans << endl; 
			}
			cout << ans << endl; 
		}



	}


}

int main(){
	solve(); 
	return 0; 
}
