#include<bits/stdc++.h>

using namespace std; 

void solve(){
	string s; 
	cin >> s; 
	int ans = 1; 
	int intermediate = 1; 
	for(int i =0; i<s.size()-1; i++){
		if(s[i] == s[i+1]){
			intermediate++; 
			if(i== s.size()-2){
				ans = max(intermediate, ans); 
			}
		}
		else{
			ans = max(intermediate, ans); 
			intermediate = 1; 
		}
	}
	cout << ans<< endl; 
}

int main(){
	solve(); 
	return 0; 
}
