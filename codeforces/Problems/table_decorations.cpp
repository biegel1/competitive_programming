#include<bits/stdc++.h>

using namespace std; 
vector<long long> find_ordering(long long r, long long g, long long b){
	vector<long long> ans; 
	if(r>=b && r>=g){
		ans.push_back(r); 
		if(b>=g){
			ans.push_back(b); 
			ans.push_back(g); 
		}
		else{
			ans.push_back(g); 
			ans.push_back(b); 
		}
		return ans; 
	}
	if(b>=g && b>=r){
		ans.push_back(b); 
		if(r>=g){
			ans.push_back(r); 
			ans.push_back(g); 
		}
		else{
			ans.push_back(g); 
			ans.push_back(r); 
		}
		return ans; 
	}
	if(g>=r&&g>=b){
		ans.push_back(g); 
		if(r>=b){
			ans.push_back(r); 
			ans.push_back(b); 
		}
		else{
			ans.push_back(b); 
			ans.push_back(r); 
		}
		return ans; 
	}

}

void solve(){
	long long r, g, b; 
	cin >> r>> g>> b; 
	vector<long long> vals; 
	vals = find_ordering(r, g, b); 
	long long first = vals[0]; 
	long long second = vals[1]; 
	long long third = vals[2]; 
	long long ans = 0; 
	if(first >=2 *(second+third)){
		ans = second+third; 
	}
	else{
		ans= (first+second+third)/3; 
	}

	cout << ans << endl; 



}

int main(){
	solve(); 
	return 0; 
}

