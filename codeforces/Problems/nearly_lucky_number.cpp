#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
	string n; 
	cin >> n;
	int c1, c2; 
	c1 = 0; 
	for(int i = 0; i < n.size(); i++){
		if(n[i] == '4'|| n[i] == '7'){
			c1++; 
		}
	}
	if(c1 == 4 || c1 == 7){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}

}


int main(){
	solve();
	return 0;
}
