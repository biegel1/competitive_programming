#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

bool fit(int a, int b){
	bool verdict = false; 
	if(abs(a-b) <= 1){
		verdict = true;
	}
	return verdict;
}

void solve(){
	int n, m; 
	int val; 
	cin >> n; 
	vector<int> boys; 
	int ans= 0; 
	for(int i = 0; i<n; i++){
		cin >> val; 
		boys.push_back(val);
	}

	cin >>m; 
	vector<int> girls; 
	for(int j = 0; j<m; j++){
		cin >> val; 
		girls.push_back(val); 
	}
	sort(girls.begin(), girls.end());
	sort(boys.begin(), boys.end());

	for(int i = 0; i < boys.size(); i++){
		for(int j= 0; j< girls.size(); j++){
			if(fit(boys[i],girls[j])){
				girls.erase(girls.begin()+j); 
				ans++; 
				break;
			}
		}
	}
	cout << ans << endl; 
}

int main(){
	solve(); 
	return 0;
}
