#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		long long x, y, a, b; 
		cin >> x >> y; 
		cin >> a >> b; 
		long long ans = 0; 
		long long diff =abs(x-y); 
		long long minimum = min(x, y); 
		long long ans1 = diff*a + minimum *b; 
		long long ans2 = (x+y)*a; 
		cout << min(ans1, ans2) << endl; 
	}
}

int main(){
	solve(); 
	return 0; 
}

