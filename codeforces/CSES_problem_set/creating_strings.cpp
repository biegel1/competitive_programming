#include<bits/stdc++.h>

using namespace std; 

void solve(){
	string s; 
	cin >>s; 

	set<string> perm; 
	sort(s.begin(), s.end()); 
	do{
		perm.insert(s); 
	}while(next_permutation(s.begin(), s.end())); 
	cout << perm.size() << endl;  
	for(auto it : perm){
		cout << it << endl; 
	}



}

int main(){
	solve(); 
	return 0; 
}
