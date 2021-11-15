#include<bits/stdc++.h>

using namespace std; 
#define ll long long

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		ll row, col; 
		ll ans; 
		cin >> row >> col; 
		if(row<=col){
			if(col%2 ==0){
				ans = col*col - (2*col-2)+row-1; 
			}
			else{
				ans = col*col - (row-1); 
			}

		}
		else{
			if(row%2 ==0){
				ans = row*row - (col-1); 
			}
			else{
				ans = row*row - (2*row-2)+col-1; 
			}

		}
		cout << ans << endl; 

	}




}

int main(){
	solve(); 
	return 0; 
}
