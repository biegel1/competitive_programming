#include<bits/stdc++.h>
#include<string>

using namespace std; 

long long ans = 0; 
long long n, s; 
long long median_element;
void solve(){
	int t; 
	cin >> t; 
	while(t--){
		cin >> n >> s; 
		if(n%2 ==0){
			median_element = n/2; 

		}
		else{
			median_element = n/2 +1; 
		}
		ans = s/(n-median_element+1); 
		cout << ans << endl; 
	}

}


int main(){
	solve(); 
	return 0;
}
