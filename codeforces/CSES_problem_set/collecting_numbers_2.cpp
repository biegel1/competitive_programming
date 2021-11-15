#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n, m; 
	cin >>n>>m; 
	vector<int> x(n), pos(n); 
	for(int i =0; i<n; i++){
		cin >>x[i]; 
		pos[x[i]] = i; 
	}
	int ans =1; 
	for(int i =1; i<n; i++){
		if(pos[i] >pos[i+1]){
			ans++; 
		}
	}
	while(m--){
		int a, b; 
		cin >> a>> b; 
		a--; 
		b--; 
		swap(x[a], x[b]); 
		swap(pos[x[a]], pos[x[b]]); 



	

	}

}

int main(){
	solve(); 
	return 0; 
}
