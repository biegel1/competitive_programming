#include<bits/stdc++.h>


using namespace std; 

#define pb push_back

void solve(){
	int n; 
	cin >>n; 
	vector<string> s1; 
	s1.pb("0"); 
	s1.pb("1"); 
	for(int i =2; i<(1<<n); i = i<<1){
		vector<string> s2; 
		for(int j =s1.size()-1; j>=0; j--){
			s2.pb(s1[j]); 
		}
		
		for(int j = 0; j<s1.size(); j++){
			s1[j] = "0" + s1[j]; 
		}
		for(int j = 0; j<s2.size(); j++){
			s2[j] = "1" + s2[j]; 
		}
		s1.insert(end(s1), begin(s2), end(s2));  
	}
	for(int i =0; i<s1.size(); i++){
		cout << s1[i] << endl; 
	}




}

int main(){
	solve(); 
	return 0; 
}
