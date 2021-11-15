#include<bits/stdc++.h>

using namespace std; 

#define ll long long

void solve(){
	int t; 
	cin >>t; 
	while(t--){
		ll a, b; 
		cin >> a >> b; 
		if((a+b)%3 == 0){
			ll biggest = max(a, b); 
			ll smallest = min(a, b); 
			if(2*smallest >= biggest){
				cout << "YES" << endl; 
			}
			else{
				cout << "NO" << endl; 
			}

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


