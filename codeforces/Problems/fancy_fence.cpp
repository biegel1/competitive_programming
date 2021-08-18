#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int a; 
		cin >> a; 
	    double n; 
		n = 360.0/(180.0-a);
		if(n ==(int)n){
			cout << "YES" << endl; 
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
