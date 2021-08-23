#include<bits/stdc++.h>
#include<string>


using namespace std; 


void solve(){
	int t; 
	cin >> t; 
	while(t--){
		long a, b, c;
		cin >> a >> b >> c; 
		long delta = abs(a-b); 
		long circle_size = delta*2; 
		if(a>circle_size || b>circle_size || c>circle_size){
			cout << -1 << "\n"; 
		}
		else if(a-1 == b|| a+1 ==b){
			cout << -1 << "\n"; 
		}
		else if(c-a == 1 && c-b ==1){
			cout << -1 << "\n"; 
		}
		else{
			if(c>circle_size/2){
				cout << c-delta<< "\n"; 
			}
			else{
				cout << c+delta<<"\n"; 
			}
		}


		

		


	}

}

int main(){
	solve(); 
	return 0; 
}
