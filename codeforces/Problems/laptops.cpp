#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n; 
	cin >> n; 
	vector<pair<int,int>> pq; 
	int val1, val2; 
	for(int i = 0; i<n;i++){
		cin >> val1>> val2; 
		pq.push_back(make_pair(val1, val2)); 
	}
	sort(pq.begin(), pq.end()); 
	int ans = 0; 
	for(int i =0; i<n-1; i++){
		if(pq[i].second > pq[i+1].second){
			ans++; 
		}
	}
	cout << ((ans>0) ? "Happy Alex" : "Poor Alex" )<< endl; 



}

int main(){
	solve(); 
	return 0; 
}
