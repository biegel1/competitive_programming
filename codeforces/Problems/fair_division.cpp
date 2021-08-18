#include<bits/stdc++.h>

using namespace std; 


void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int val; 
		int n; 
		cin >> n;
		int ones = 0, twos = 0; 
		for(int i =0; i<n; i++){
			cin >> val; 
			if(val ==1){
				ones+=1; 
			}
			else{
				twos +=1;
			}
		}
		if(ones == 0){
			if(twos%2 == 0){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
		else if(twos == 0){
			if(ones%2 == 0){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
		else{
			if(ones%2 == 0){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
			}
		}
	
	}
	
}

int main(){
	solve();
	return 0;
}
