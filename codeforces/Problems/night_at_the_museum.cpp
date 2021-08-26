#include<bits/stdc++.h>

using namespace std; 

void solve(){
	string name; 
	cin >> name; 
	string abc = "abcdefghijklmnopqrstuvwxyz"; 
	int ans = 0;  
	int current =0; 
	for(int i =0; i<name.size(); i++){
		int index = abc.find(name[i]); 
		ans+= min(abs(current-index), (26-abs(current-index))); 
		current = index; 
	}
	cout << ans << endl; 




}

int main(){
	solve(); 
	return 0;  
}
