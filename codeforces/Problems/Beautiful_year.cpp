#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

void solve(){
	int y; 
	string s; 
	cin >> y;
	y++;
	bool found = false;
	while(found == false){
		found = true;
		s = to_string(y);
		sort(s.begin(), s.end());
		for(int i = 0; i < s.size()-1; i++){
			if(s[i] == s[i+1]){
				found = false;
				break;
			}
		}
		if(found == true){
			cout << y << endl;
			break;
		}
		else{
			y++;
		}
	}
}

int main(){
	solve(); 
	return 0;
}
