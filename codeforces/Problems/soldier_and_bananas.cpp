#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

void solve(){

	int k, n, w; 
	cin >> k>> n>>w; 
	int m; 
	m = k*(w*(w+1)/2)-n;
	if(m>0){
		cout << m << endl; 
	}
	else{
		cout << 0 << endl; 
	}
	


}

int main(){
	
	solve(); 
	return 0; 
}
