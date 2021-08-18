#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	int a, b, c, n; 
	while(t--){
		cin >> a >> b>> c>>n; 
		int max_element = max({a, b, c}); 
		n-=max_element-a;
		n-=max_element-b;
		n-=max_element-c;
		if(n>=0&&n%3==0){
			cout << "YES" << endl;
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
