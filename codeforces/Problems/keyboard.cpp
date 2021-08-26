#include<bits/stdc++.h>

using namespace std; 

void solve(){
	string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./"; 
	char shift; 
	cin >> shift; 
	string sequence; 
	cin >> sequence; 
	string ans; 
	int move = (shift == 'L') ? 1 : -1; 
	for(int i = 0; i<sequence.size(); i++){
		int l = keyboard.find(sequence[i]); 
		ans.push_back(keyboard[l+move]); 
	}
	cout << ans << "\n"; 


}

int main(){
	solve(); 
	return 0; 
}
