#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t;
	while(t--){
		int hh, mm;
		cin >> hh >> mm; 
		int ans_h = 23-hh; 
		int ans_m = 60-mm; 
		int res = ans_h*60 + ans_m;
		cout << res << endl; 
	}

}

int main(){
	solve(); 
	return 0; 
}
