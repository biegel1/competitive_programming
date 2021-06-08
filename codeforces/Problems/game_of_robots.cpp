#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

void solve(){
	int n, k; 
	cin >> n >> k; 
	vector<int> ids; 
	int id; 
	while(cin >> id){
		ids.push_back(id);
	}
	vector<int> prons; 
	int counter= 1; 
	while(prons.size()< k){
		if(counter == 0){
			prons.insert(prons.end(), ids.begin(), ids.begin() + counter); 
		}
		else{
			k = k-prons.size(); 
			prons.erase(prons.begin(), prons.end());
			prons.insert(prons.end(), ids.begin(), ids.begin() + counter); 
		}
		counter++; 
	}
	cout << prons[k-1] << endl; 
}

int main(){
	solve();
	return 0; 
}
