#include<bits/stdc++.h>
#define ll long long

using namespace std; 

ll total_sum(ll n){
	return n*(n+1)/2; 
}

void solve(){
	int n; 
	cin >>n; 
	int m  =n; 
	ll val = total_sum(n); 
	if(val%2 ==0){
		ll target = val/2; 
		cout << "YES"<< endl; 
		while(target>=n){
			target-=n; 
			n-=1; 
		}
		ll u_bound = n; 
		ll val_to_exclude = target; 
		vector<int> vals1; 
		vector<int> vals2; 
		for(int i =1; i<=u_bound; i++){
			if(i==val_to_exclude){
				continue; 
			}
			vals1.push_back(i); 
		}
		for(int i =u_bound+1; i<=m ; i++){
			vals2.push_back(i); 
		}
		if(val_to_exclude!=0){
			vals2.push_back(val_to_exclude); 
		}
		cout << vals1.size()<< endl; 
		for(int i =0; i<vals1.size(); i++){
			cout <<vals1[i] << " ";  
		}
		cout << endl; 
		cout << vals2.size()<< endl; 
		for(int i =0; i<vals2.size(); i++){
			cout << vals2[i] << " ";  
		}
		
		cout << endl;  
	}
	else{
		cout << "NO" << endl; 
	}


}

int main(){
	solve(); 
	return 0; 
}
