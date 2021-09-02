#include<bits/stdc++.h>

using namespace std; 

void solve(){
	long long n; 
	cin >> n; 
	vector<long long> flowers; 
	for(int i =0; i<n; i++){
		long long flower; 
		cin >> flower; 
		flowers.push_back(flower); 
	}
	sort(flowers.begin(), flowers.end()); 
	long long max_diff = flowers[flowers.size()-1] - flowers[0]; 
	long long number_of_mins = 1; 
	for(int i =0; i<n-1; i++){
		if(flowers[i] == flowers[i+1]){
			number_of_mins++; 
		}
		else{
			break; 
		}
	}
	long long number_of_maxs = 1; 
	for(int i = n-1; i>0; i--){
		if(flowers[i] == flowers[i-1]){
			number_of_maxs++; 
		}
		else{
			break; 
		}

	}
	if(number_of_mins == n){
		long long ans = n*(n-1)/2; 
		cout<< max_diff << " "<< ans << "\n"; 
	}
	else{
		long long ans = number_of_mins*number_of_maxs; 
		cout << max_diff << " "<< ans << "\n"; 
	}





}

int main(){
	solve(); 
	return 0; 
}
