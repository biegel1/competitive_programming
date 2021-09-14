#include<bits/stdc++.h>
#include<string>


using namespace std; 

int max_ans = 2; 
int ans; 
string s; 
void solve(){
	int t; 
	cin >> t; 
	while(t--){
		cin >> s; 
		ans =0; 
		int zeros = 0; 
		int ones = 0; 
		for(int  i=0; i<s.length(); i++){
			if(s[i] == '0'){
				zeros++; 
				if(i+1 < s.length()){
					if(s[i+1] == '1'){
						ans++; 
					}
				}
				else{
					ans++; 
				}
			}
			else{
				ones++; 
			}


		}
		if(zeros == s.length()){
			cout << 1 << endl; 
		}
		else if(ones == s.length()){
			cout << 0 << endl; 
		}
		else{
			if(ans<max_ans){
				cout << ans << endl; 
			}
			else{
				cout << max_ans << endl; 
			}

		}
		

	}

}

int main(){
	solve(); 
	return 0; 
}
