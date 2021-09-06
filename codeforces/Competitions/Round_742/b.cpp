#include<bits/stdc++.h>
#include<string>


using namespace std; 


void solve(){
	int t; 
	cin >> t; 
	while(t--){
		long long a, b;
		cin >> a >> b; 
		long long xors=0; 
		long long ans = a; 
		long long n =a-1; 
		if(n%4 ==0){
			xors = n; 
		}
		if(n%4 ==1){
			xors = 1; 
		}
		if(n%4 ==2){
			xors = n+1; 
		}
		if(n%4==3){
			xors = 0; 
		}
		if(xors ==b){
			cout << ans << endl; 
		}
		else{
			long long xors2 = xors^b; 
			ans+=1;
			if(xors2 == a){
				ans+=1; 
			}
			cout << ans << endl; 
		}

	}
}

int main(){
	solve(); 
	return 0; 
}
