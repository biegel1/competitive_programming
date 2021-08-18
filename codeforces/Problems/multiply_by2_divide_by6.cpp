#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		int number_of_twos = 0; 
		int number_of_threes = 0; 
		if(n==1){
			cout << 0 << endl;
		}
		else{
			while(n%2 == 0){
				n/=2; 
				number_of_twos++; 
			}
			while(n%3 == 0){
				n/=3; 
				number_of_threes++; 
			}
			if(n==1 && (number_of_twos <= number_of_threes)){
				cout << (number_of_threes - number_of_twos) + number_of_threes << endl;
			}
			else{
				cout << -1 << endl; 
			}

		}

	}


}


int main(){
	solve(); 
	return 0; 
}
