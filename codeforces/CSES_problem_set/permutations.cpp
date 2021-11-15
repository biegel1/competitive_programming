#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n; 
	cin >>n; 
	vector<int> permutation; 
	bool odd = true; 
	if(n==1){
		cout << 1 << endl; 
	}
	else if(n<=3){
		cout << "NO SOLUTION" << endl; 
	}
	else{
		if(n%2 ==0){
			odd = false; 
		}
		if(odd){
			for(int i =n; i>=1; i-=2){
				permutation.push_back(i); 
			}
			for(int i =n-1; i>=2; i-=2){
				permutation.push_back(i); 
			}
		}
		else{
			for(int i =n-1; i>=1; i-=2){
				permutation.push_back(i); 
			}
			for(int i =n; i>=2; i-=2){
				permutation.push_back(i); 
			}

		}
		for(int i =0; i<n; i++){
			cout << permutation[i] << " "; 
		}
	}
	cout << endl;  





}

int main(){
	solve(); 
	return 0; 
}
