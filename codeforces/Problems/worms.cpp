#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n; 
	cin >> n; 
	vector<int> worms; 
	for(int i =0; i<n; i++){
		int val; 
		cin >>val; 
		worms.push_back(val); 
	}
	int m; 
	cin >> m; 
	vector<int> labels; 
	for(int i =0; i<m; i++){
		int val; 
		cin >> val; 
		labels.push_back(val); 
	}
	vector<pair<int,int>>pairs; 
	int j = 1; 
	int sum = 0; 
	for(int i = 0; i< n; i++){
		if(i ==0){
			pairs.push_back(make_pair(1, worms[i]));
			sum = worms[i]; 
		}
		else{
			pairs.push_back(make_pair(sum+1, sum+worms[i])); 
			sum+=worms[i]; 

		}
	}
	for(int i = 0; i<m; i++){
		int low = 0; 
		int high = n-1; 
		int guess = high/2; 
		while(low<=high){
			if(labels[i] >= pairs[guess].first && labels[i]<= pairs[guess].second){
				cout << guess+1 <<"\n"; 
				break; 
			}
			else if(labels[i]<pairs[guess].first){
				high = guess - 1; 
				guess = high/2; 
			}
			else if(labels[i]>pairs[guess].second){
				low = guess + 1; 
				guess = (high+low)/2; 
			}



		}

	}

		

}

int main(){
	solve(); 
	return 0; 
}

