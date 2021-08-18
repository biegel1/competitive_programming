#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		int counter = 0;
		if(n>=2020){
			while(n-2020 >= 0){
				n= n-2020;
				counter++;
			}
			if(n<=counter){
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
