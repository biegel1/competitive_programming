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
	set<int> boys_indices; 
	set<int> girls_indices; 

	for(int i = 0; i < boys.size(); i++){
		for(int j= 0; j< girls.size(); j++){
			if(fit(boys[i],girls[j])){
				boys_indices.insert(boys[i]);
				girls_indices.insert(girls[j]);
				cout << i << " " << j << endl; 
			}
		}
	}

	if(boys_indices.size() < girls_indices.size()){
		cout << boys_indices.size() << endl;
	}
	else{
		cout << girls_indices.size() << endl; 
	}
	for(auto it = boys_indices.begin(); it != boys_indices.end(); it++){
		cout << *it ; 
	}
}

int main(){
	solve(); 
	return 0;
}
