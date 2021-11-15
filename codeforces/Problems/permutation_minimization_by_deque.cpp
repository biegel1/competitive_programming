#include<bits/stdc++.h>

using namespace std;

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >>n; 
		vector<int> permutation; 
		for(int i=0; i<n; i++){
			int val; 
			cin >>val; 
			permutation.push_back(val); 
		}
		deque<int> d;
		int current; 
		for(int i=0; i<n; i++){
			current = permutation[i];
			if(i ==0){
				d.push_front(current); 
			}
			else{
				if(current < d.front()){
					d.push_front(current); 
				}
				else{
					d.push_back(current); 
				}
			}
		}
		for(auto e: d){
			cout<< e << " "; 
		}
		cout << endl;  
	}


}

int main(){
	solve(); 
	return 0; 
}
