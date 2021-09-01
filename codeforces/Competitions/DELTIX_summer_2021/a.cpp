#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		long long c, d; 
		cin >> c >> d; 
		int a = 0;
		int b = 0; 
		if(abs(c-d) %2 == 1){
			cout << -1 << endl; 
		}
		else{
			if(c == 0 && d == 0){
				cout << 0 << endl; 
			}
			else if(c == d){
				cout << 1 << endl; 
			}
			else{
				cout << 2 << endl; 
			}
		}






	}

}


int main(){
	solve(); 
	return 0;
}
