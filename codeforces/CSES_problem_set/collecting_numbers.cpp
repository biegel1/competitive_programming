#include<bits/stdc++.h>

using namespace std; 
#define pb push_back

void solve(){
	int n; 
	cin>>n; 
	vector<int> x(n); 
	vector<int> pos(n); 
	for(int i =0; i<n; i++){
		cin>> x[i]; 
		pos[x[i]] = i; 
	}
	int ans = 1; 
	for(int i =1; i<n;i++){
		if(pos[i] > pos[i+1]){
			ans++; 
		}
	}
	cout << ans << endl; 
}


int main(){
	solve(); 
	return 0; 
}
