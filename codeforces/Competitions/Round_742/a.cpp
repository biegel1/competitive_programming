#include<bits/stdc++.h>
#include<string>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		string s; 
		cin >> s; 
		string ans; 
		for(int i =0; i<n; i++){
			if(s[i] =='U'){
				ans.push_back('D'); 
			}
			else if(s[i] == 'D'){
				ans.push_back('U'); 
			}
			else if(s[i] == 'L'){
				ans.push_back('L'); 
				ans.push_back('R'); 
			}
			else if(s[i] =='R'){
				continue; 
			}

		}
		cout << ans << endl; 
	}

}


int main(){
	solve(); 
	return 0;
}
