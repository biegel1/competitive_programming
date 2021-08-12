#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 

	while(t--){
		int n; 
		string letters; 
		cin >>n; 
		cin >> letters; 
		vector<char> set_of_letters; 
		for(int i = 0; i<letters.size(); i++){
			if(i == 0){
				set_of_letters.push_back(letters[i]);
			}
			else{
				if((find(set_of_letters.begin(), set_of_letters.end(), letters[i]) != set_of_letters.end()) == false){
					set_of_letters.push_back(letters[i]);
				}
			}
		}
		bool verdict; 

		for(int i = 0; i<set_of_letters.size(); i++){
			verdict = true;
			char current_letter = set_of_letters[i]; 
			vector<int> indices; 
			for(int j = 0; j<n; j++){
				if(letters[j] == current_letter){
					indices.push_back(j); 
				}
			}
			int first_index = indices.front();
			int last_index = indices.back(); 
			int distance = last_index - first_index + 1;


			if(distance != indices.size()){
				verdict = false;
				break;
			}

		}
		if(verdict == false){
			cout << "NO"<< endl;
		}
		else{
			cout << "YES" << endl; 
		}
	}
}

int main(){
	solve();
	return 0;
}
