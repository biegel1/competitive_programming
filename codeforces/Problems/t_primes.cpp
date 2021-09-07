#include<bits/stdc++.h>

using namespace std; 

bool is_perfect_square(long long x){
	long long ans = (long long)sqrt(x); 
	if(ans * ans == x){
		return true; 
	}
	return false; 
}

bool is_prime(long long x){
	if(x<=1){
		return false; 
	}
	if(x<=3){
		return true; 
	}
	if(x%2 ==0 || x%3 ==0){
		return false; 
	}
	for(long long i =5; i*i <=x; i+=6){
		if(x%i == 0||x%(i+2)==0){
			return false; 
		}
	}
	return true; 

}



void solve(){
	int n; 
	cin >> n; 
	for(int i =0; i<n; i++){
		long long num; 
		cin >> num; 
		if(is_perfect_square(num)){
			long long n_num = (long long)sqrt(num); 
			if(is_prime(n_num)){
				cout << "YES" << endl; 
			}
			else{
				cout << "NO" << endl; 
			}
		}
		else{
			cout << "NO" << endl; 
		}
	}



}

int main(){
	solve(); 
	return 0; 
}
