#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n; 
	cin >> n; 
	vector<long long> arr; 
	for(int i =0; i<n; i++){
		long long val; 
		cin >> val; 
		arr.push_back(val); 
	}
	long long l=0; 
	long long r=0; 
	for(int  i = 0; i<n-1; i++){
		if(arr[i] > arr[i+1]){
			l = i; 
			break; 
		}
	}
	for(int i = n-1; i>0; i--){
		if(arr[i]<arr[i-1]){
			r = i; 
			break; 
		}
	}
	vector<long long> seq; 
	for(int i =r ; i>=l; i--){
		seq.push_back(arr[i]); 
	}

	for(int i =0; i<seq.size(); i++){
		arr[l+i] = seq[i]; 
	}

	if(is_sorted(arr.begin(), arr.end())){
		cout << "yes" << "\n"; 
		cout << l+1 << " " <<r+1 << "\n";
	}
	else{
		cout << "no" << "\n"; 
	}
}

int main(){
	solve(); 
	return 0; 
}
