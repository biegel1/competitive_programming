#include<bits/stdc++.h>
#include<string> 

using namespace std; 

string decode(string snippet){
	string ans; 
	if(snippet == "--"){
		ans = to_string(2); 
	}
	else if(snippet == "-."){
		ans = to_string(1); 
	}
	else if(snippet == "."){
		ans = to_string(0); 
	}
	return ans; 
}

void solve(){
	string code; 
	cin >> code; 
	string ans; 
	int i =0; 
	int increment; 
	while(i<code.size()){
		string sub; 
		if(code[i] =='.'){
			increment = 1; 
		}
		else{
			increment = 2; 
		}
		for(int j = 0; j<increment; j++){
			sub.push_back(code[i+j]); 
		}
		 
		ans+= decode(sub); 
		if(increment==1){
			i++; 
		}
		else{
			i+=2; 
		}
	}
	cout << ans << "\n"; 
}

int main(){
	solve(); 
	return 0; 
}
