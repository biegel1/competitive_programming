#include<bits/stdc++.h>

using namespace std;

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		long long n;
		cin >> n; 
		int c1; 
		int c2; 
		int res; 
		res = n/3; 
		c1 = res; 
		c2 = res; 
		while(c1+2*c2< n){
			if(c1+2*c2+2 > n){
				c1++; 
			}
			else{
				c2++; 
			}
		}
		cout << c1 << " " << c2 << endl; 


	}

}

int main(){
	solve(); 
	return 0; 
}
