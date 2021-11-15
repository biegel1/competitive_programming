#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		string s; 
		cin >> s; 
		int A = 0; 
		int B = 0; 
		int C = 0; 
		for(int i =0; i<s.size(); i++){
			if(s[i] =='A'){
				A++; 
			}
			else if(s[i] =='B'){
				B++; 
			}
			else{
				C++; 
			}
		}
		if(B == A+C){
			cout << "YES"<< endl; 
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



