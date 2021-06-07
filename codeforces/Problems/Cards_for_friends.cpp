#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
	int t; 
	cin >> t; 
	int w, h, n;
	int pieces;
	for(int c = 0; c < t; c++){
		pieces = 1;
		cin >> w >> h >> n;
		while(w%2 == 0||h%2 == 0){
			if(w%2 == 0 & h% 2 == 0){
				pieces = pieces *4;
				w = w/2; 
				h = h/2; 
			}
			if(w%2 == 0){
				pieces = pieces*2;
				w = w/2;
			}
			else if(h%2 == 0){
				pieces = pieces *2; 
				h = h/2;
			}

		}
		if(pieces >= n){
			cout <<  "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}

int main(){
	solve();
	return 0;
}
