#include<bits/stdc++.h>

using namespace std; 

#define ll long long

ll bin(ll k){
	return k*(k-1)/2; 
}

void solve(){
	int n; 
	cin >>n; 
	ll sumand; 
	for(int i =0; i<n; i++){
		if(i ==0){
			cout << 0 << endl; 
			sumand = 0; 
		}
		else{
			ll k = (i+1)*(i+1); 
			sumand +=(i-1)*8; 
			cout << bin(k)-sumand << endl;  

		}

	}






}

int main(){
	solve(); 
	return 0; 
}
