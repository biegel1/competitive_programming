#include<bits/stdc++.h>

using namespace std; 

int mex(char c1, char c2){
	if(c1 == '0' && c2 == '0'){
		return 1; 
	}
	if(c1 == '1' && c2 == '1'){
		return 0; 
	}
	return 2; 
}


int MEX(string s1, string s2){
	int s1_ones = 0; 
	int s1_zeros= 0; 
	int s2_ones = 0; 
	int s2_zeros =0; 
	int n = s1.size(); 
	for(int i =0; i<n; i++){
		if(s1[i] == '0'){
			s1_zeros++; 
		}
		if(s1[i] == '1'){
			s1_ones++; 
		}
		if(s2[i] == '0'){
			s2_zeros++; 
		}
		if(s2[i] == '1'){
			s2_ones++; 
		}
	}
	if(s1_ones == n && s2_ones==n){
		return 0; 
	}
	if(s1_zeros == n && s2_zeros == n){
		return 1; 
	}
	return 2; 
}

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		vector<string> bitable; 
		string s; 
		cin >> s; 
		bitable.push_back(s); 
		cin >> s; 
		bitable.push_back(s); 
		int ans = 0;  
		ans = MEX(bitable[0], bitable[1]); 
		if(ans == 0){
			cout << ans << endl; 
		}
		else if(ans == 1){
			cout << n << endl;  
		}
		else{
			ans = 0; 
			for(int i =0; i<n; i++){
				if(mex((bitable[0][i]), (bitable[1][i])) == 2){
					ans+=2; 
				}
				else if(mex((bitable[0][i]), (bitable[1][i])) == 1){
					if(i+1<n){
						if(mex((bitable[0][i+1]),(bitable[1][i+1])) == 0){
							ans+=2; 
							i++; 
							continue; 
							
						}
						else{
							ans+=1; 
						}
					}
					else{
						ans++; 
					}
				}
				else if(mex((bitable[0][i]), (bitable[1][i])) == 0){
					if(i+1<n){
						if(mex((bitable[0][i+1]), (bitable[1][i+1])) == 1){
							ans+=2; 
							i++; 
							continue; 
						}
					}
				}

			}
			cout << ans << endl; 
		}
	}



}

int main(){
	solve(); 
	return 0;
}



