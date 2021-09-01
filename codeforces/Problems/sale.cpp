#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n, m; 
	cin >> n>> m; 
	vector<int> prices; 
	for(int i =0; i<n; i++){
		int val; 
		cin >> val; 
		prices.push_back(val); 
	}
	sort(prices.begin(), prices.end()); 
	int i =1; 
	int ans = 0; 
	while(i<=m && prices[i-1]<0){
		ans+=(-1)*prices[i-1]; 
		i++; 
	}
	cout << ans << endl; 



}

int main(){
	solve(); 
	return 0; 
}
