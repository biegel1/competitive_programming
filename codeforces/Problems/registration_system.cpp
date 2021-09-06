#include<bits/stdc++.h>
#include<string>

using namespace std; 

void solve(){
	int n; 
	cin >> n; 
	unordered_map<string, int> users; 
	while(n--){
		string name; 
		cin >> name; 
		if(users.count(name) == 0){
			users[name] = 0; 
			cout << "OK" << endl; 
		}
		else{
			users[name]+=1; 
			int counter = 0; 
			string n_name = name+to_string(users[name]); 
			users[n_name] = 1; 
			cout << (n_name)<< endl; 
		}


	}

}

int main(){
	solve(); 
	return 0; 
}
