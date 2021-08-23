#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		long long k; 
		cin >> k; 
		int col  =1; 
		int	min_val = 1;
		int layer_size = 1; 
		int row = 1; 
		while(k>=min_val+layer_size){
			min_val=min_val+layer_size; 
			layer_size+=2; 
			col++; 
		}
		int m = k-min_val+1; 
		if(m<=col){
			row = m; 
			cout << row << " " << col << "\n"; 
		}
		else{
			row = col; 
			col = (col-(m-col));
			cout << row << " " << col << "\n"; 
				
		}
	}

}

int main(){
	solve(); 
	return 0;
}



